#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GGS_fixitListAST inObject,
                                                      class GGS_unifiedTypeMap & io_ioTypeMap,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_fixItRemove,
    enum_fixItReplace,
    enum_fixItInsertBefore,
    enum_fixItInsertAfter
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItReplace (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertBefore (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixItInsertAfter (class GGS_semanticExpressionForGeneration & out_exp) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration class_func_fixItInsertAfter (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItInsertBefore (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItRemove (LOCATION_ARGS) ;

  public: static class GGS_fixitElementForGeneration class_func_fixItReplace (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertAfter (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItInsertBefore (class GGS_semanticExpressionForGeneration & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFixItReplace (class GGS_semanticExpressionForGeneration & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ getter_getFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ getter_getFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ getter_getFixItReplace (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItInsertAfter struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertAfter class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertAfter? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertAfter mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertAfter unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItInsertBefore struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore & operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItInsertBefore class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItInsertBefore? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItInsertBefore mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItInsertBefore unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitElementForGeneration_2E_fixItReplace struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitElementForGeneration_2E_fixItReplace & operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitElementForGeneration_2E_fixItReplace init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitElementForGeneration_2E_fixItReplace class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
// Phase 1: fixitElementForGeneration.fixItReplace? optional
//--------------------------------------------------------------------------------------------------

class GGS_fixitElementForGeneration_2E_fixItReplace_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_fixitElementForGeneration_2E_fixItReplace mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_fixitElementForGeneration_2E_fixItReplace unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitElementForGeneration_2E_fixItReplace_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_fixitListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_fixitListForGeneration (const class GGS_fixitListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_fixitListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_fixitListForGeneration (const class GGS_fixitListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_fixitListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_fixitListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_fixitElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_fixitListForGeneration class_func_listWithValue (const class GGS_fixitElementForGeneration & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_fixitListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_fixitElementForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_fixitListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_fixitListForGeneration add_operation (const GGS_fixitListForGeneration & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_fixitElementForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_fixitElementForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_fixitElementForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_fixitElementForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_fixitElementForGeneration constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_fixitElementForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_fixitElementForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_fixitElementForGeneration getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_fixitListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_fixitListForGeneration ;
  friend class DownEnumerator_fixitListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @fixitListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_fixitListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_fixitElementForGeneration mProperty_mElement ;
  public: inline GGS_fixitElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_fixitListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_fixitElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_fixitListForGeneration_2E_element (const GGS_fixitElementForGeneration & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_fixitListForGeneration_2E_element (const GGS_fixitListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_fixitListForGeneration_2E_element & operator = (const GGS_fixitListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_fixitListForGeneration_2E_element init_21_ (const class GGS_fixitElementForGeneration & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_fixitListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_fixitListForGeneration_2E_element class_func_new (const class GGS_fixitElementForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GGS_fixitListForGeneration inObject,
                                    class GGS_stringset & io_ioInclusionSet,
                                    class GGS_uint & io_ioTemporaryVariableIndex,
                                    class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GGS_string & io_ioGeneratedCode,
                                    class GGS_string & out_outFixItArrayCppName,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (class cPtr_semanticExpressionForGeneration * inObject,
                                             class GGS_string & io_ioGeneratedCode,
                                             class GGS_stringset & io_ioInclusionSet,
                                             class GGS_uint & io_ioTemporaryVariableIndex,
                                             class GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             class GGS_string & out_outCppExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GGS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GGS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_errorInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GGS_stringlist & inOperand3,
                                                                             const class GGS_fixitListForGeneration & inOperand4,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GGS_stringlist & inOperand3,
                                                                         const class GGS_fixitListForGeneration & inOperand4,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void errorInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_fixitListForGeneration & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GGS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GGS_fixitListForGeneration mProperty_mFixitListForGeneration ;


//--- Default constructor
  public: cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GGS_stringlist & in_mBuiltVariableCppNameList,
                                              const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @errorInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_errorInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_errorInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_errorInstructionForGeneration_2E_weak (const class GGS_errorInstructionForGeneration & inSource) ;

  public: GGS_errorInstructionForGeneration_2E_weak & operator = (const class GGS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_errorInstructionForGeneration_2E_weak init_nil (void) {
    GGS_errorInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_errorInstructionForGeneration bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_errorInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_errorInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_errorInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectElementListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_forInstructionEnumeratedObjectElementListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_forInstructionEnumeratedObjectElementListAST (const class GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mOptionalTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mDeclaredAsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionalConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectElementListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_forInstructionEnumeratedObjectElementListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_forInstructionEnumeratedObjectElementListAST (const class GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mOptionalTypeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mDeclaredAsUnused (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mOptionalConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectElementListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectElementListAST list
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mOptionalTypeName,
                                                 const class GGS_bool & in_mDeclaredAsUnused,
                                                 const class GGS_lstring & in_mOptionalConstantName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementListAST init (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectElementListAST extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectElementListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectElementListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_lstring & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_bool & inOperand1,
                                                    const class GGS_lstring & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectElementListAST add_operation (const GGS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclaredAsUnusedAtIndex (class GGS_bool constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalConstantNameAtIndex (class GGS_lstring constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mDeclaredAsUnusedAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionalConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mOptionalTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectElementListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_forInstructionEnumeratedObjectElementListAST ;
  friend class DownEnumerator_forInstructionEnumeratedObjectElementListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectElementListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectElementListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: inline GGS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GGS_bool mProperty_mDeclaredAsUnused ;
  public: inline GGS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GGS_lstring mProperty_mOptionalConstantName ;
  public: inline GGS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & in_mOptionalTypeName,
                                                                       const GGS_bool & in_mDeclaredAsUnused,
                                                                       const GGS_lstring & in_mOptionalConstantName) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element & operator = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectElementListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectElementListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractEnumeratedCollectionAST (const class cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractEnumeratedCollectionAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractEnumeratedCollectionAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractEnumeratedCollectionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractEnumeratedCollectionAST_init (Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractEnumeratedCollectionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractEnumeratedCollectionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractEnumeratedCollectionAST_2E_weak (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

  public: GGS_abstractEnumeratedCollectionAST_2E_weak & operator = (const class GGS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractEnumeratedCollectionAST_2E_weak init_nil (void) {
    GGS_abstractEnumeratedCollectionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractEnumeratedCollectionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractEnumeratedCollectionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractEnumeratedCollectionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionImplicitVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionImplicitVarInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionImplicitVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionImplicitVarInExpAST (const class cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPrefix (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfAnonymousEnumeration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionImplicitVarInExpAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                                               const class GGS_location & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionImplicitVarInExpAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionImplicitVarInExpAST class_func_new (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                                                   const class GGS_location & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumeratedCollectionImplicitVarInExpAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumeratedCollectionImplicitVarInExpAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPrefix ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfAnonymousEnumeration ;


//--- Default constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (const GGS_lstring & in_mPrefix,
                                                        const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                        const GGS_location & in_mEndOfAnonymousEnumeration,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionImplicitVarInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionImplicitVarInExpAST bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionImplicitVarInExpAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mEnumerationOptionalTypeName (void) const ;

  public: class GGS_lstring readProperty_mEnumerationVariable (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionVarInExpAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionVarInExpAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionVarInExpAST class_func_new (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           const class GGS_location & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumeratedCollectionVarInExpAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumeratedCollectionVarInExpAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_semanticExpressionAST & inOperand2,
                                                                     const class GGS_location & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GGS_lstring mProperty_mEnumerationVariable ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionVarInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GGS_lstring & in_mEnumerationOptionalTypeName,
                                                const GGS_lstring & in_mEnumerationVariable,
                                                const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GGS_location & in_mEndOfEnumerationExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionVarInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionVarInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionVarInExpAST_2E_weak (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GGS_enumeratedCollectionVarInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionVarInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionVarInExpAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionVarInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionVarInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST : public GGS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumeratedCollectionCstListInExpAST (const class cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_forInstructionEnumeratedObjectElementListAST readProperty_mElementList (void) const ;

  public: class GGS_bool readProperty_mEndsWithEllipsis (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GGS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumeratedCollectionCstListInExpAST init_21__21_mEndsWithEllipsis_21__21_ (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                                const class GGS_bool & inOperand1,
                                                                                                const class GGS_semanticExpressionAST & inOperand2,
                                                                                                const class GGS_location & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionCstListInExpAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionCstListInExpAST class_func_new (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               const class GGS_semanticExpressionAST & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (const class GGS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                          const class GGS_bool & inOperand1,
                                                                                          const class GGS_semanticExpressionAST & inOperand2,
                                                                                          const class GGS_location & inOperand3,
                                                                                          Compiler * inCompiler) ;


//--- Extension method analyzeEnumeration
  public: virtual void method_analyzeEnumeration (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_localConstantList & arg_ioLocalConstantListForDoBranch,
           class GGS_string & arg_outEnumeratorCppName,
           class GGS_semanticExpressionForGeneration & arg_outEnumerationExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInSemanticContext
  public: virtual void method_enterInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_forInstructionEnumeratedObjectElementListAST mProperty_mElementList ;
  public: GGS_bool mProperty_mEndsWithEllipsis ;
  public: GGS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GGS_location mProperty_mEndOfEnumerationExpression ;


//--- Default constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                    const GGS_bool & in_mEndsWithEllipsis,
                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumeratedCollectionCstListInExpAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumeratedCollectionCstListInExpAST_2E_weak : public GGS_abstractEnumeratedCollectionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GGS_enumeratedCollectionCstListInExpAST_2E_weak & operator = (const class GGS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumeratedCollectionCstListInExpAST_2E_weak init_nil (void) {
    GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumeratedCollectionCstListInExpAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumeratedCollectionCstListInExpAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumeratedCollectionCstListInExpAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_forInstructionEnumeratedObjectListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_forInstructionEnumeratedObjectListAST (const class GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
  public: class GGS_abstractEnumeratedCollectionAST current_mEnumeratedCollection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_forInstructionEnumeratedObjectListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_forInstructionEnumeratedObjectListAST (const class GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
  public: class GGS_abstractEnumeratedCollectionAST current_mEnumeratedCollection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListAST list
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_bool & in_mAscending,
                                                 const class GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListAST init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectListAST class_func_listWithValue (const class GGS_bool & inOperand0,
                                                                                           const class GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_bool & inOperand0,
                                                    const class GGS_abstractEnumeratedCollectionAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectListAST add_operation (const GGS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_bool constinArgument0,
                                               class GGS_abstractEnumeratedCollectionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_bool constinArgument0,
                                                      class GGS_abstractEnumeratedCollectionAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_bool & outArgument0,
                                                 class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_bool & outArgument0,
                                                class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_bool & outArgument0,
                                                      class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedCollectionAtIndex (class GGS_abstractEnumeratedCollectionAST constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_bool & outArgument0,
                                              class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_bool & outArgument0,
                                             class GGS_abstractEnumeratedCollectionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAscendingAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractEnumeratedCollectionAST getter_mEnumeratedCollectionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_forInstructionEnumeratedObjectListAST ;
  friend class DownEnumerator_forInstructionEnumeratedObjectListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GGS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GGS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GGS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_bool & in_mAscending,
                                                                const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element & operator = (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element init_21__21_ (const class GGS_bool & inOperand0,
                                                                                    const class GGS_abstractEnumeratedCollectionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListAST_2E_element class_func_new (const class GGS_bool & inOperand0,
                                                                                            const class GGS_abstractEnumeratedCollectionAST & inOperand1,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_forInstructionEnumeratedObjectListAST readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_lstring readProperty_mIndexVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_while_5F_expression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_before_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_between_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_do_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mAfterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_after_5F_branch (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_foreach_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionAST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                     const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                                     const class GGS_lstring & inOperand2,
                                                                                                     const class GGS_semanticExpressionAST & inOperand3,
                                                                                                     const class GGS_location & inOperand4,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                     const class GGS_location & inOperand6,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                     const class GGS_location & inOperand8,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand9,
                                                                                                     const class GGS_location & inOperand10,
                                                                                                     const class GGS_semanticInstructionListAST & inOperand11,
                                                                                                     const class GGS_location & inOperand12,
                                                                                                     const class GGS_location & inOperand13,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                             const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                             const class GGS_lstring & inOperand2,
                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                             const class GGS_location & inOperand4,
                                                             const class GGS_semanticInstructionListAST & inOperand5,
                                                             const class GGS_location & inOperand6,
                                                             const class GGS_semanticInstructionListAST & inOperand7,
                                                             const class GGS_location & inOperand8,
                                                             const class GGS_semanticInstructionListAST & inOperand9,
                                                             const class GGS_location & inOperand10,
                                                             const class GGS_semanticInstructionListAST & inOperand11,
                                                             const class GGS_location & inOperand12,
                                                             const class GGS_location & inOperand13,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionAST_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_semanticExpressionAST & inOperand3,
                                                                                               const class GGS_location & inOperand4,
                                                                                               const class GGS_semanticInstructionListAST & inOperand5,
                                                                                               const class GGS_location & inOperand6,
                                                                                               const class GGS_semanticInstructionListAST & inOperand7,
                                                                                               const class GGS_location & inOperand8,
                                                                                               const class GGS_semanticInstructionListAST & inOperand9,
                                                                                               const class GGS_location & inOperand10,
                                                                                               const class GGS_semanticInstructionListAST & inOperand11,
                                                                                               const class GGS_location & inOperand12,
                                                                                               const class GGS_location & inOperand13,
                                                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GGS_lstring mProperty_mIndexVariableName ;
  public: GGS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GGS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GGS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GGS_location mProperty_mEndOf_5F_foreach_5F_instruction ;


//--- Default constructor
  public: cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GGS_lstring & in_mIndexVariableName,
                                  const GGS_semanticExpressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOf_5F_while_5F_expression,
                                  const GGS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GGS_location & in_mEndOf_5F_before_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GGS_location & in_mEndOf_5F_between_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GGS_location & in_mEndOf_5F_do_5F_branch,
                                  const GGS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GGS_location & in_mEndOf_5F_after_5F_branch,
                                  const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 class GGS_unifiedTypeMap & io_ioTypeMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                             class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const class GGS_analysisContext constin_inAnalysisContext,
                                             class GGS_unifiedTypeMap & io_ioTypeMap,
                                             class GGS_localVarManager & io_ioVariableMap,
                                             class GGS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             class GGS_string & out_outEnumeratorCppName,
                                             class GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_forInstructionEnumeratedObjectListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_forInstructionEnumeratedObjectListForGeneration (const class GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEnumerationOrder (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionForGeneration current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public: class GGS_string current_mEnumeratorCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_forInstructionEnumeratedObjectListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_forInstructionEnumeratedObjectListForGeneration (const class GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mEnumerationOrder (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionForGeneration current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public: class GGS_string current_mEnumeratorCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mEnumerationOrder,
                                                 const class GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                 const class GGS_string & in_mEnumeratorCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListForGeneration init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListForGeneration extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_forInstructionEnumeratedObjectListForGeneration class_func_listWithValue (const class GGS_string & inOperand0,
                                                                                                     const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                     const class GGS_string & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_semanticExpressionForGeneration & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_forInstructionEnumeratedObjectListForGeneration add_operation (const GGS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_semanticExpressionForGeneration constinArgument1,
                                               class GGS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_semanticExpressionForGeneration constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_semanticExpressionForGeneration & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_semanticExpressionForGeneration & outArgument1,
                                                class GGS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_semanticExpressionForGeneration & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedExpressionAtIndex (class GGS_semanticExpressionForGeneration constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationOrderAtIndex (class GGS_string constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppNameAtIndex (class GGS_string constinArgument0,
                                                                     class GGS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_semanticExpressionForGeneration & outArgument1,
                                              class GGS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_semanticExpressionForGeneration & outArgument1,
                                             class GGS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionForGeneration getter_mEnumeratedExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEnumerationOrderAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mEnumeratorCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_forInstructionEnumeratedObjectListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_forInstructionEnumeratedObjectListForGeneration ;
  friend class DownEnumerator_forInstructionEnumeratedObjectListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionEnumeratedObjectListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mEnumerationOrder ;
  public: inline GGS_string readProperty_mEnumerationOrder (void) const {
    return mProperty_mEnumerationOrder ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_mEnumeratedExpression ;
  public: inline GGS_semanticExpressionForGeneration readProperty_mEnumeratedExpression (void) const {
    return mProperty_mEnumeratedExpression ;
  }

  public: GGS_string mProperty_mEnumeratorCppName ;
  public: inline GGS_string readProperty_mEnumeratorCppName (void) const {
    return mProperty_mEnumeratorCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumerationOrder (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationOrder = inValue ;
  }

  public: inline void setter_setMEnumeratedExpression (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedExpression = inValue ;
  }

  public: inline void setter_setMEnumeratorCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratorCppName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_string & in_mEnumerationOrder,
                                                                          const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                          const GGS_string & in_mEnumeratorCppName) ;

//--------------------------------- Copy constructor
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & operator = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionEnumeratedObjectListForGeneration_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                                  const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                  const class GGS_string & inOperand2,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionEnumeratedObjectListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionEnumeratedObjectListForGeneration_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                                      const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                      const class GGS_string & inOperand2,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionForGeneration (const class cPtr_forInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_forInstructionEnumeratedObjectListForGeneration readProperty_mEnumeratedObjectList (void) const ;

  public: class GGS_string readProperty_mIndexVariableCppName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                       const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                       const class GGS_string & inOperand2,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                       const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                                 const class GGS_string & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand5,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand6,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand7,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_forInstructionEnumeratedObjectListForGeneration mProperty_mEnumeratedObjectList ;
  public: GGS_string mProperty_mIndexVariableCppName ;
  public: GGS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                            const GGS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                            const GGS_string & in_mIndexVariableCppName,
                                            const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                            const GGS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                            const GGS_semanticInstructionListForGeneration & in_mAfterInstructionList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionForGeneration_2E_weak (const class GGS_forInstructionForGeneration & inSource) ;

  public: GGS_forInstructionForGeneration_2E_weak & operator = (const class GGS_forInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionForGeneration_2E_weak init_nil (void) {
    GGS_forInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionForGeneration bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & operator = (const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak init_nil (void) {
    GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone init (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone class_func_new (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultNone unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult init_21_ (const class GGS_location & inOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult class_func_new (const class GGS_location & inOperand0,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationDropResult unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar init_21_ (const class GGS_lstring & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar class_func_new (const class GGS_lstring & inOperand0,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInVar_init_21_ (const class GGS_lstring & inOperand0,
                                                                                Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GGS_lstring & in_mActualParameterName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInVar unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class_func_new (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_lstring & inOperand1,
                                                                                                          class Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GGS_lstring & in_mActualParameterTypeName,
                                                                               const GGS_lstring & in_mActualParameterName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak extractObject (const GGS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GGS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_lstring & inOperand1,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GGS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class_func_new (const class GGS_lstring & inOperand0,
                                                                                                            const class GGS_lstring & inOperand1,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                              const class GGS_lstring & inOperand1,
                                                                                              Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GGS_stringlist & arg_ioAssignementList,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GGS_string arg_inAccessMethodName,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mActualParameterTypeName ;
  public: GGS_lstring mProperty_mActualParameterName ;


//--- Default constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GGS_lstring & in_mActualParameterTypeName,
                                                                                 const GGS_lstring & in_mActualParameterName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak : public GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & operator = (const class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak init_nil (void) {
    GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak extractObject (const GGS_object & inObject,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInFileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInFileInstructionAST init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_lstring & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_semanticExpressionAST & inOperand3,
                                                                                   const class GGS_location & inOperand4,
                                                                                   const class GGS_actualParameterListAST & inOperand5,
                                                                                   const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInFileInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_semanticExpressionAST & inOperand3,
                                                                       const class GGS_location & inOperand4,
                                                                       const class GGS_actualParameterListAST & inOperand5,
                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInFileInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInFileInstructionAST_init_21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             const class GGS_actualParameterListAST & inOperand5,
                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6,
                                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInFileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_lstring & in_mGrammarComponentName,
                                            const GGS_lstring & in_mLabelName,
                                            const GGS_semanticExpressionAST & in_mSourceExpression,
                                            const GGS_location & in_mEndOfSourceExpression,
                                            const GGS_actualParameterListAST & in_mActualParameterList,
                                            const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInFileInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInFileInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInFileInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInFileInstructionAST_2E_weak (const class GGS_grammarInFileInstructionAST & inSource) ;

  public: GGS_grammarInFileInstructionAST_2E_weak & operator = (const class GGS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInFileInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInFileInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInFileInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInFileInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInFileInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInStringInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GGS_lstring readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GGS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mNameExpression (void) const ;

  public: class GGS_location readProperty_mEndOfNameExpression (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInStringInstructionAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_lstring & inOperand2,
                                                                                             const class GGS_semanticExpressionAST & inOperand3,
                                                                                             const class GGS_location & inOperand4,
                                                                                             const class GGS_semanticExpressionAST & inOperand5,
                                                                                             const class GGS_location & inOperand6,
                                                                                             const class GGS_actualParameterListAST & inOperand7,
                                                                                             const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInStringInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_semanticExpressionAST & inOperand3,
                                                                         const class GGS_location & inOperand4,
                                                                         const class GGS_semanticExpressionAST & inOperand5,
                                                                         const class GGS_location & inOperand6,
                                                                         const class GGS_actualParameterListAST & inOperand7,
                                                                         const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInStringInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInStringInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_semanticExpressionAST & inOperand3,
                                                                                       const class GGS_location & inOperand4,
                                                                                       const class GGS_semanticExpressionAST & inOperand5,
                                                                                       const class GGS_location & inOperand6,
                                                                                       const class GGS_actualParameterListAST & inOperand7,
                                                                                       const class GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8,
                                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGrammarComponentName ;
  public: GGS_lstring mProperty_mLabelName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mEndOfSourceExpression ;
  public: GGS_semanticExpressionAST mProperty_mNameExpression ;
  public: GGS_location mProperty_mEndOfNameExpression ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;
  public: GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;


//--- Default constructor
  public: cPtr_grammarInStringInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mGrammarComponentName,
                                              const GGS_lstring & in_mLabelName,
                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                              const GGS_location & in_mEndOfSourceExpression,
                                              const GGS_semanticExpressionAST & in_mNameExpression,
                                              const GGS_location & in_mEndOfNameExpression,
                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInStringInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInStringInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInStringInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInStringInstructionAST_2E_weak (const class GGS_grammarInStringInstructionAST & inSource) ;

  public: GGS_grammarInStringInstructionAST_2E_weak & operator = (const class GGS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInStringInstructionAST_2E_weak init_nil (void) {
    GGS_grammarInStringInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInStringInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInStringInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInStringInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceFileForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_string & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         const class GGS_stringlist & inOperand6,
                                                                                                         const class GGS_string & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceFileForGeneration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                         const class GGS_string & inOperand1,
                                                                                         const class GGS_string & inOperand2,
                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                         const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                         const class GGS_bool & inOperand5,
                                                                                         const class GGS_stringlist & inOperand6,
                                                                                         const class GGS_string & inOperand7,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_string & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                   const class GGS_actualParameterListForGeneration & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   const class GGS_stringlist & inOperand6,
                                                                                                   const class GGS_string & inOperand7,
                                                                                                   Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mGrammarName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                              const GGS_stringlist & in_mAssignementList,
                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceFileForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceFileForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceFileForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_grammarInstructionWithSourceExpressionForGeneration (const class cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mGrammarName (void) const ;

  public: class GGS_string readProperty_mLabelName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceStringExpression (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mNameStringExpression (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GGS_stringlist readProperty_mAssignementList (void) const ;

  public: class GGS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                                   const class GGS_string & inOperand1,
                                                                                                                   const class GGS_string & inOperand2,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                                   const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                                   const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                                   const class GGS_bool & inOperand6,
                                                                                                                   const class GGS_stringlist & inOperand7,
                                                                                                                   const class GGS_string & inOperand8,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_string & inOperand1,
                                                                                               const class GGS_string & inOperand2,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                               const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                               const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                               const class GGS_bool & inOperand6,
                                                                                               const class GGS_stringlist & inOperand7,
                                                                                               const class GGS_string & inOperand8,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                             const class GGS_string & inOperand1,
                                                                                                             const class GGS_string & inOperand2,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                             const class GGS_semanticExpressionForGeneration & inOperand4,
                                                                                                             const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                                             const class GGS_bool & inOperand6,
                                                                                                             const class GGS_stringlist & inOperand7,
                                                                                                             const class GGS_string & inOperand8,
                                                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mGrammarName ;
  public: GGS_string mProperty_mLabelName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceStringExpression ;
  public: GGS_semanticExpressionForGeneration mProperty_mNameStringExpression ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GGS_stringlist mProperty_mAssignementList ;
  public: GGS_string mProperty_mSyntaxDirectedTranslationResultVarName ;


//--- Default constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_string & in_mGrammarName,
                                                                    const GGS_string & in_mLabelName,
                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                    const GGS_stringlist & in_mAssignementList,
                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @grammarInstructionWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

  public: GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_grammarInstructionWithSourceExpressionForGeneration bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_grammarInstructionWithSourceExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum incDecKind
//--------------------------------------------------------------------------------------------------

class GGS_incDecKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_incDecKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_increment,
    enum_decrement
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecKind extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecKind class_func_decrement (LOCATION_ARGS) ;

  public: static class GGS_incDecKind class_func_increment (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDecrement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIncrement (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecInstructionAST (const class cPtr_incDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_bool & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_lstringlist & inOperand3,
                                                                    const class GGS_incDecKind & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                const class GGS_lstring & inOperand2,
                                                                const class GGS_lstringlist & inOperand3,
                                                                const class GGS_incDecKind & inOperand4,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstringlist & inOperand3,
                                                              const class GGS_incDecKind & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                     const GGS_bool & in_mPrefixedBySelf,
                                     const GGS_lstring & in_mReceiverName,
                                     const GGS_lstringlist & in_mStructAttributeList,
                                     const GGS_incDecKind & in_mKind,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionAST_2E_weak (const class GGS_incDecInstructionAST & inSource) ;

  public: GGS_incDecInstructionAST_2E_weak & operator = (const class GGS_incDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionAST_2E_weak init_nil (void) {
    GGS_incDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionAST bang_incDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecNoOVFInstructionAST (const class cPtr_incDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GGS_lstring readProperty_mReceiverName (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecNoOVFInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstringlist & inOperand3,
                                                                         const class GGS_incDecKind & inOperand4,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstringlist & inOperand3,
                                                                     const class GGS_incDecKind & inOperand4,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecNoOVFInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_bool & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_lstringlist & inOperand3,
                                                                   const class GGS_incDecKind & inOperand4,
                                                                   Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mPrefixedBySelf ;
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                          const GGS_bool & in_mPrefixedBySelf,
                                          const GGS_lstring & in_mReceiverName,
                                          const GGS_lstringlist & in_mStructAttributeList,
                                          const GGS_incDecKind & in_mKind,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionAST_2E_weak (const class GGS_incDecNoOVFInstructionAST & inSource) ;

  public: GGS_incDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_incDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionAST bang_incDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecNoOVFInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfIncDecInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfIncDecInstructionAST (const class cPtr_selfIncDecInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfIncDecInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_incDecKind & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_incDecKind & inOperand1,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfIncDecInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfIncDecInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                      const class GGS_incDecKind & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfIncDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_incDecKind & in_mKind,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecInstructionAST_2E_weak (const class GGS_selfIncDecInstructionAST & inSource) ;

  public: GGS_selfIncDecInstructionAST_2E_weak & operator = (const class GGS_selfIncDecInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecInstructionAST bang_selfIncDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfIncDecInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecNoOVFInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfIncDecNoOVFInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfIncDecNoOVFInstructionAST (const class cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfIncDecNoOVFInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_incDecKind & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecNoOVFInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecNoOVFInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_incDecKind & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecNoOVFInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfIncDecNoOVFInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfIncDecNoOVFInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_incDecKind & inOperand1,
                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfIncDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_incDecKind & in_mKind,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfIncDecNoOVFInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfIncDecNoOVFInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

  public: GGS_selfIncDecNoOVFInstructionAST_2E_weak & operator = (const class GGS_selfIncDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfIncDecNoOVFInstructionAST_2E_weak init_nil (void) {
    GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfIncDecNoOVFInstructionAST bang_selfIncDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfIncDecNoOVFInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfIncDecNoOVFInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfIncDecNoOVFInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfIncDecNoOVFInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecInstructionForGeneration (const class cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                              const class GGS_lstringlist & inOperand3,
                                                                              const class GGS_incDecKind & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                          const class GGS_string & inOperand1,
                                                                          const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                          const class GGS_lstringlist & inOperand3,
                                                                          const class GGS_incDecKind & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const class GGS_lstringlist & inOperand3,
                                                                        const class GGS_incDecKind & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                               const GGS_string & in_mReceiverCppName,
                                               const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                               const GGS_lstringlist & in_mStructAttributeList,
                                               const GGS_incDecKind & in_mKind,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecInstructionForGeneration_2E_weak (const class GGS_incDecInstructionForGeneration & inSource) ;

  public: GGS_incDecInstructionForGeneration_2E_weak & operator = (const class GGS_incDecInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecInstructionForGeneration bang_incDecInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_incDecNoOVFInstructionForGeneration (const class cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mReceiverCppName (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GGS_incDecKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_incDecNoOVFInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GGS_lstringlist & inOperand3,
                                                                                   const class GGS_incDecKind & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_incDecKind & inOperand4,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS_lstringlist & inOperand3,
                                                                             const class GGS_incDecKind & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mReceiverCppName ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_lstringlist mProperty_mStructAttributeList ;
  public: GGS_incDecKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                    const GGS_string & in_mReceiverCppName,
                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                    const GGS_incDecKind & in_mKind,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @incDecNoOVFInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_incDecNoOVFInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

  public: GGS_incDecNoOVFInstructionForGeneration_2E_weak & operator = (const class GGS_incDecNoOVFInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_incDecNoOVFInstructionForGeneration_2E_weak init_nil (void) {
    GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_incDecNoOVFInstructionForGeneration bang_incDecNoOVFInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_incDecNoOVFInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_incDecNoOVFInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_incDecNoOVFInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_incDecNoOVFInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ifExpressionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regularExp,
    enum_letExp
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_regularExp (class GGS_semanticExpressionAST & out_exp,
                                                                   class GGS_location & out_endOfExp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letExp (class GGS_lstring & out_constantName,
                                                               class GGS_semanticExpressionAST & out_exp,
                                                               class GGS_location & out_endOfExp,
                                                               class GGS_lstring & out_typeName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind class_func_letExp (const class GGS_lstring & inOperand0,
                                                               const class GGS_semanticExpressionAST & inOperand1,
                                                               const class GGS_location & inOperand2,
                                                               const class GGS_lstring & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifExpressionKind class_func_regularExp (const class GGS_semanticExpressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLetExp (class GGS_lstring & outArgument0,
                                                      class GGS_semanticExpressionAST & outArgument1,
                                                      class GGS_location & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRegularExp (class GGS_semanticExpressionAST & outArgument0,
                                                          class GGS_location & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind_2E_letExp_3F_ getter_getLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind_2E_regularExp_3F_ getter_getRegularExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegularExp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_letExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_constantName ;
  public: inline GGS_lstring readProperty_constantName (void) const {
    return mProperty_constantName ;
  }

  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_letExp (const GGS_lstring & in_constantName,
                                          const GGS_semanticExpressionAST & in_exp,
                                          const GGS_location & in_endOfExp,
                                          const GGS_lstring & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_letExp (const GGS_ifExpressionKind_2E_letExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_letExp & operator = (const GGS_ifExpressionKind_2E_letExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_letExp init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_lstring & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letExp extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_letExp class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_semanticExpressionAST & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_lstring & inOperand3,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.letExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_letExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_letExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_letExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_letExp_3F_ (const GGS_ifExpressionKind_2E_letExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_letExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_letExp unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_letExp_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionKind_2E_regularExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionAST mProperty_exp ;
  public: inline GGS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_location mProperty_endOfExp ;
  public: inline GGS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_semanticExpressionAST & in_exp,
                                              const GGS_location & in_endOfExp) ;

//--------------------------------- Copy constructor
  public: GGS_ifExpressionKind_2E_regularExp (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifExpressionKind_2E_regularExp & operator = (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionKind_2E_regularExp init_21__21_ (const class GGS_semanticExpressionAST & inOperand0,
                                                                  const class GGS_location & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionKind_2E_regularExp class_func_new (const class GGS_semanticExpressionAST & inOperand0,
                                                                          const class GGS_location & inOperand1,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifExpressionKind.regularExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionKind_2E_regularExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifExpressionKind_2E_regularExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifExpressionKind_2E_regularExp_3F_ (const GGS_ifExpressionKind_2E_regularExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifExpressionKind_2E_regularExp unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionKind_2E_regularExp_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @CommaSeparatedExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_CommaSeparatedExpressionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_CommaSeparatedExpressionList (const class GGS_CommaSeparatedExpressionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ifExpressionKind current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_CommaSeparatedExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_CommaSeparatedExpressionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_CommaSeparatedExpressionList (const class GGS_CommaSeparatedExpressionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ifExpressionKind current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_CommaSeparatedExpressionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @CommaSeparatedExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_CommaSeparatedExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_CommaSeparatedExpressionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_CommaSeparatedExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_ifExpressionKind & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_CommaSeparatedExpressionList init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_CommaSeparatedExpressionList extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_CommaSeparatedExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_CommaSeparatedExpressionList class_func_listWithValue (const class GGS_ifExpressionKind & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_CommaSeparatedExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ifExpressionKind & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_CommaSeparatedExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_CommaSeparatedExpressionList add_operation (const GGS_CommaSeparatedExpressionList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ifExpressionKind constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ifExpressionKind constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ifExpressionKind & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ifExpressionKind & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ifExpressionKind & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_ifExpressionKind constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ifExpressionKind & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ifExpressionKind & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifExpressionKind getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_CommaSeparatedExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_CommaSeparatedExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_CommaSeparatedExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_CommaSeparatedExpressionList ;
  friend class DownEnumerator_CommaSeparatedExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @CommaSeparatedExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_CommaSeparatedExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifExpressionKind mProperty_mExpression ;
  public: inline GGS_ifExpressionKind readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifExpressionKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (const GGS_ifExpressionKind & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_CommaSeparatedExpressionList_2E_element (const GGS_CommaSeparatedExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_CommaSeparatedExpressionList_2E_element & operator = (const GGS_CommaSeparatedExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_CommaSeparatedExpressionList_2E_element init_21_ (const class GGS_ifExpressionKind & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_CommaSeparatedExpressionList_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_CommaSeparatedExpressionList_2E_element class_func_new (const class GGS_ifExpressionKind & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const class GGS_CommaSeparatedExpressionList inObject,
                                                    const class GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    class GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const class GGS_analysisContext constin_inAnalysisContext,
                                                    class GGS_unifiedTypeMap & io_ioTypeMap,
                                                    class GGS_localVarManager & io_ioVariableMap,
                                                    class GGS_ifTestListForGeneration & out_outTestListForGeneration,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum ifTestForGeneration
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_regular,
    enum_letExp,
    enum_optionalExp
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_regular (class GGS_semanticExpressionForGeneration & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letExp (class GGS_string & out_targetVarCppName,
                                                               class GGS_semanticExpressionForGeneration & out_exp,
                                                               class GGS_unifiedTypeMapEntry & out_targetType,
                                                               class GGS_unifiedTypeMapEntry & out_testType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_optionalExp (class GGS_string & out_targetVarCppName,
                                                                    class GGS_semanticExpressionForGeneration & out_exp,
                                                                    class GGS_unifiedTypeMapEntry & out_targetType) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration class_func_letExp (const class GGS_string & inOperand0,
                                                                  const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifTestForGeneration class_func_optionalExp (const class GGS_string & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_ifTestForGeneration class_func_regular (const class GGS_semanticExpressionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLetExp (class GGS_string & outArgument0,
                                                      class GGS_semanticExpressionForGeneration & outArgument1,
                                                      class GGS_unifiedTypeMapEntry & outArgument2,
                                                      class GGS_unifiedTypeMapEntry & outArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOptionalExp (class GGS_string & outArgument0,
                                                           class GGS_semanticExpressionForGeneration & outArgument1,
                                                           class GGS_unifiedTypeMapEntry & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractRegular (class GGS_semanticExpressionForGeneration & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_letExp_3F_ getter_getLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_optionalExp_3F_ getter_getOptionalExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration_2E_regular_3F_ getter_getRegular (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLetExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOptionalExp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegular (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ifTestListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_ifTestListForGeneration (const class GGS_ifTestListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ifTestForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ifTestListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ifTestListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_ifTestListForGeneration (const class GGS_ifTestListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ifTestForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ifTestListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_ifTestListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ifTestListForGeneration (void) ;

//--------------------------------- List constructor by graph
  public: GGS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_ifTestForGeneration & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestListForGeneration init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestListForGeneration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ifTestListForGeneration class_func_listWithValue (const class GGS_ifTestForGeneration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ifTestListForGeneration inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ifTestForGeneration & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ifTestListForGeneration_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ifTestListForGeneration add_operation (const GGS_ifTestListForGeneration & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ifTestForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ifTestForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ifTestForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ifTestForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ifTestForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_ifTestForGeneration constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ifTestForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ifTestForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ifTestForGeneration getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ifTestListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ifTestListForGeneration ;
  friend class DownEnumerator_ifTestListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean???!'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean_3F__3F__3F__21_ (const class GGS_analysisContext constinArgument0,
                                                       const class GGS_location constinArgument1,
                                                       const class GGS_semanticExpressionForGeneration constinArgument2,
                                                       class GGS_semanticExpressionForGeneration & outArgument3,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (class GGS_localVarManager & ioObject,
                                                     const class GGS_lstring constin_inVarName,
                                                     const class GGS_unifiedTypeMapEntry constin_inType,
                                                     const class GGS_string constin_inCppName,
                                                     const class GGS_string constin_inNameForCheckingFormalParameterUsing,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_localVarManager & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (class GGS_localVarManager & ioObject,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_letExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_testType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_testType (void) const {
    return mProperty_testType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

  public: inline void setter_setTestType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_testType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_letExp (const GGS_string & in_targetVarCppName,
                                             const GGS_semanticExpressionForGeneration & in_exp,
                                             const GGS_unifiedTypeMapEntry & in_targetType,
                                             const GGS_unifiedTypeMapEntry & in_testType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_letExp (const GGS_ifTestForGeneration_2E_letExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_letExp & operator = (const GGS_ifTestForGeneration_2E_letExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_letExp init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_letExp extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_letExp class_func_new (const class GGS_string & inOperand0,
                                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand3,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.letExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_letExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_letExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_letExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_letExp_3F_ (const GGS_ifTestForGeneration_2E_letExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_letExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_letExp unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_letExp_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_optionalExp struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_targetVarCppName ;
  public: inline GGS_string readProperty_targetVarCppName (void) const {
    return mProperty_targetVarCppName ;
  }

  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_targetType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_targetType (void) const {
    return mProperty_targetType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTargetVarCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetVarCppName = inValue ;
  }

  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setTargetType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_targetType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & in_targetVarCppName,
                                                  const GGS_semanticExpressionForGeneration & in_exp,
                                                  const GGS_unifiedTypeMapEntry & in_targetType) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_optionalExp & operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_optionalExp init_21__21__21_ (const class GGS_string & inOperand0,
                                                                          const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                          const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_optionalExp extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_optionalExp class_func_new (const class GGS_string & inOperand0,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand2,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.optionalExp? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_optionalExp_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_optionalExp mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_optionalExp unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_optionalExp_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestForGeneration_2E_regular struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticExpressionForGeneration mProperty_exp ;
  public: inline GGS_semanticExpressionForGeneration readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestForGeneration_2E_regular & operator = (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestForGeneration_2E_regular init_21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_regular extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestForGeneration_2E_regular class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ifTestForGeneration.regular? optional
//--------------------------------------------------------------------------------------------------

class GGS_ifTestForGeneration_2E_regular_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ifTestForGeneration_2E_regular mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ifTestForGeneration_2E_regular_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ifTestForGeneration_2E_regular_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ifTestForGeneration_2E_regular unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestForGeneration_2E_regular_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifTestListForGeneration_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ifTestListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ifTestForGeneration mProperty_mExpression ;
  public: inline GGS_ifTestForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ifTestListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_ifTestForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ifTestListForGeneration_2E_element (const GGS_ifTestForGeneration & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_ifTestListForGeneration_2E_element (const GGS_ifTestListForGeneration_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ifTestListForGeneration_2E_element & operator = (const GGS_ifTestListForGeneration_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifTestListForGeneration_2E_element init_21_ (const class GGS_ifTestForGeneration & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifTestListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifTestListForGeneration_2E_element class_func_new (const class GGS_ifTestForGeneration & inOperand0,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionAST (const class cPtr_ifInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_CommaSeparatedExpressionList readProperty_mExpressions (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_then_5F_branch (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_m_5F_else_5F_instructionList (void) const ;

  public: class GGS_location readProperty_mEndOf_5F_if_5F_instruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_CommaSeparatedExpressionList & inOperand1,
                                                                    const class GGS_semanticInstructionListAST & inOperand2,
                                                                    const class GGS_location & inOperand3,
                                                                    const class GGS_semanticInstructionListAST & inOperand4,
                                                                    const class GGS_location & inOperand5,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                            const class GGS_CommaSeparatedExpressionList & inOperand1,
                                                            const class GGS_semanticInstructionListAST & inOperand2,
                                                            const class GGS_location & inOperand3,
                                                            const class GGS_semanticInstructionListAST & inOperand4,
                                                            const class GGS_location & inOperand5,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_CommaSeparatedExpressionList & inOperand1,
                                                              const class GGS_semanticInstructionListAST & inOperand2,
                                                              const class GGS_location & inOperand3,
                                                              const class GGS_semanticInstructionListAST & inOperand4,
                                                              const class GGS_location & inOperand5,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_CommaSeparatedExpressionList mProperty_mExpressions ;
  public: GGS_semanticInstructionListAST mProperty_m_5F_then_5F_instructionList ;
  public: GGS_location mProperty_mEndOf_5F_then_5F_branch ;
  public: GGS_semanticInstructionListAST mProperty_m_5F_else_5F_instructionList ;
  public: GGS_location mProperty_mEndOf_5F_if_5F_instruction ;


//--- Default constructor
  public: cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                 const GGS_CommaSeparatedExpressionList & in_mExpressions,
                                 const GGS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                 const GGS_location & in_mEndOf_5F_then_5F_branch,
                                 const GGS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                 const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionAST_2E_weak (const class GGS_ifInstructionAST & inSource) ;

  public: GGS_ifInstructionAST_2E_weak & operator = (const class GGS_ifInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionAST_2E_weak init_nil (void) {
    GGS_ifInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionAST bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_ifInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifInstructionForGeneration (const class cPtr_ifInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_ifTestListForGeneration readProperty_mExpressions (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_m_5F_then_5F_instructionList (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_m_5F_else_5F_instructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_ifTestListForGeneration & inOperand1,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionForGeneration extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                      const class GGS_ifTestListForGeneration & inOperand1,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_ifInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_ifTestListForGeneration & inOperand1,
                                                                const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_ifTestListForGeneration mProperty_mExpressions ;
  public: GGS_semanticInstructionListForGeneration mProperty_m_5F_then_5F_instructionList ;
  public: GGS_semanticInstructionListForGeneration mProperty_m_5F_else_5F_instructionList ;


//--- Default constructor
  public: cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                           const GGS_ifTestListForGeneration & in_mExpressions,
                                           const GGS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                           const GGS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifInstructionForGeneration_2E_weak (const class GGS_ifInstructionForGeneration & inSource) ;

  public: GGS_ifInstructionForGeneration_2E_weak & operator = (const class GGS_ifInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifInstructionForGeneration_2E_weak init_nil (void) {
    GGS_ifInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifInstructionForGeneration bang_ifInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST (const class cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsConstant (void) const ;

  public: class GGS_lstring readProperty_mOptionalTypeName (void) const ;

  public: class GGS_lstring readProperty_mVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                   const class GGS_lstring & inOperand3,
                                                                                                   const class GGS_semanticExpressionAST & inOperand4,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithAssignmentAST class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_lstring & inOperand2,
                                                                                               const class GGS_lstring & inOperand3,
                                                                                               const class GGS_semanticExpressionAST & inOperand4,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableOrConstantDeclarationWithAssignmentAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_lstring & inOperand2,
                                                                                             const class GGS_lstring & inOperand3,
                                                                                             const class GGS_semanticExpressionAST & inOperand4,
                                                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: GGS_lstring mProperty_mVariableName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_bool & in_mIsConstant,
                                                                    const GGS_lstring & in_mOptionalTypeName,
                                                                    const GGS_lstring & in_mVariableName,
                                                                    const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_undefinedLocalConstantDeclarationAST (const class cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantTypeName (void) const ;

  public: class GGS_lstring readProperty_mConstantName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_undefinedLocalConstantDeclarationAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationAST class_func_new (const class GGS_location & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @undefinedLocalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void undefinedLocalConstantDeclarationAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantTypeName ;
  public: GGS_lstring mProperty_mConstantName ;


//--- Default constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstring & in_mConstantTypeName,
                                                     const GGS_lstring & in_mConstantName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationAST_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationAST_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationAST bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_localConstantDeclarationWithAssignmentAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_localConstantDeclarationWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localConstantDeclarationWithAssignmentAST (const class cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVariableName (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localConstantDeclarationWithAssignmentAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_semanticExpressionAST & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantDeclarationWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localConstantDeclarationWithAssignmentAST class_func_new (const class GGS_location & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_semanticExpressionAST & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localConstantDeclarationWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_localConstantDeclarationWithAssignmentAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localConstantDeclarationWithAssignmentAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_semanticExpressionAST & inOperand2,
                                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVariableName ;
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mVariableName,
                                                          const GGS_semanticExpressionAST & in_mSourceExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localConstantDeclarationWithAssignmentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localConstantDeclarationWithAssignmentAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

  public: GGS_localConstantDeclarationWithAssignmentAST_2E_weak & operator = (const class GGS_localConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localConstantDeclarationWithAssignmentAST_2E_weak init_nil (void) {
    GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localConstantDeclarationWithAssignmentAST bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localConstantDeclarationWithAssignmentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localConstantDeclarationWithAssignmentAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localConstantDeclarationWithAssignmentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_undefinedLocalConstantDeclarationForGeneration (const class cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_undefinedLocalConstantDeclarationForGeneration init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const class GGS_string & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_string mProperty_mCppVariableName ;


//--- Default constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                               const GGS_string & in_mCppVariableName,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @undefinedLocalConstantDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

  public: GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & operator = (const class GGS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_undefinedLocalConstantDeclarationForGeneration bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_undefinedLocalConstantDeclarationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mTargetType (void) const ;

  public: class GGS_bool readProperty_mIsConstant (void) const ;

  public: class GGS_string readProperty_mCppVariableName (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                               const class GGS_bool & inOperand1,
                                                                                                               const class GGS_string & inOperand2,
                                                                                                               const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                               class Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                         const class GGS_bool & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mTargetType ;
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_string mProperty_mCppVariableName ;
  public: GGS_semanticExpressionForGeneration mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                    const GGS_bool & in_mIsConstant,
                                                                                    const GGS_string & in_mCppVariableName,
                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & operator = (const class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak init_nil (void) {
    GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_logListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_logListAST (const class GGS_logListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mLogMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionAST current_mLogExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_logListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_logListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_logListAST (const class GGS_logListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mLogMessage (LOCATION_ARGS) const ;
  public: class GGS_semanticExpressionAST current_mLogExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_logListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logListAST list
//--------------------------------------------------------------------------------------------------

class GGS_logListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_logListAST (void) ;

//--------------------------------- List constructor by graph
  public: GGS_logListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mLogMessage,
                                                 const class GGS_semanticExpressionAST & in_mLogExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logListAST init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logListAST extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_logListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_logListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_semanticExpressionAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_logListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_logListAST add_operation (const GGS_logListAST & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_semanticExpressionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_semanticExpressionAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_semanticExpressionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_semanticExpressionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_semanticExpressionAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLogExpressionAtIndex (class GGS_semanticExpressionAST constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLogMessageAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_semanticExpressionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_semanticExpressionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticExpressionAST getter_mLogExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mLogMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_logListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_logListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_logListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_logListAST ;
  friend class DownEnumerator_logListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_logListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mLogMessage ;
  public: inline GGS_lstring readProperty_mLogMessage (void) const {
    return mProperty_mLogMessage ;
  }

  public: GGS_semanticExpressionAST mProperty_mLogExpression ;
  public: inline GGS_semanticExpressionAST readProperty_mLogExpression (void) const {
    return mProperty_mLogExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_logListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLogMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogMessage = inValue ;
  }

  public: inline void setter_setMLogExpression (const GGS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLogExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_logListAST_2E_element (const GGS_lstring & in_mLogMessage,
                                     const GGS_semanticExpressionAST & in_mLogExpression) ;

//--------------------------------- Copy constructor
  public: GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_logListAST_2E_element & operator = (const GGS_logListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logListAST_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_semanticExpressionAST & inOperand1,
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


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_logInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logInstructionAST (const class cPtr_logInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_logListAST readProperty_mLogList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_logListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                             const class GGS_logListAST & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                               const class GGS_logListAST & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_logListAST mProperty_mLogList ;


//--- Default constructor
  public: cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_logListAST & in_mLogList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logInstructionAST_2E_weak (const class GGS_logInstructionAST & inSource) ;

  public: GGS_logInstructionAST_2E_weak & operator = (const class GGS_logInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logInstructionAST_2E_weak init_nil (void) {
    GGS_logInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logInstructionAST bang_logInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_logInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_logInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_logInstructionForGeneration (const class cPtr_logInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLogMessage (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLogExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_logInstructionForGeneration init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_semanticExpressionForGeneration & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionForGeneration class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @logInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_logInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void logInstructionForGeneration_init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_semanticExpressionForGeneration & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLogMessage ;
  public: GGS_semanticExpressionForGeneration mProperty_mLogExpression ;


//--- Default constructor
  public: cPtr_logInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_logInstructionForGeneration (const GGS_lstring & in_mLogMessage,
                                            const GGS_semanticExpressionForGeneration & in_mLogExpression,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @logInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_logInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_logInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_logInstructionForGeneration_2E_weak (const class GGS_logInstructionForGeneration & inSource) ;

  public: GGS_logInstructionForGeneration_2E_weak & operator = (const class GGS_logInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_logInstructionForGeneration_2E_weak init_nil (void) {
    GGS_logInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_logInstructionForGeneration bang_logInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_logInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_logInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_logInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_logInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithVariantAST (const class cPtr_loopInstructionWithVariantAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mVariantExpression (void) const ;

  public: class GGS_location readProperty_mEndOfVariantExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mFirstInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfFirstInstructions (void) const ;

  public: class GGS_semanticExpressionAST readProperty_mLoopExpression (void) const ;

  public: class GGS_location readProperty_mEndOfLoopExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfLoopInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantAST init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                 const class GGS_semanticExpressionAST & inOperand1,
                                                                                                 const class GGS_location & inOperand2,
                                                                                                 const class GGS_semanticInstructionListAST & inOperand3,
                                                                                                 const class GGS_location & inOperand4,
                                                                                                 const class GGS_semanticExpressionAST & inOperand5,
                                                                                                 const class GGS_location & inOperand6,
                                                                                                 const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                 const class GGS_location & inOperand8,
                                                                                                 const class GGS_location & inOperand9,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         const class GGS_semanticInstructionListAST & inOperand3,
                                                                         const class GGS_location & inOperand4,
                                                                         const class GGS_semanticExpressionAST & inOperand5,
                                                                         const class GGS_location & inOperand6,
                                                                         const class GGS_semanticInstructionListAST & inOperand7,
                                                                         const class GGS_location & inOperand8,
                                                                         const class GGS_location & inOperand9,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_semanticExpressionAST & inOperand1,
                                                                                           const class GGS_location & inOperand2,
                                                                                           const class GGS_semanticInstructionListAST & inOperand3,
                                                                                           const class GGS_location & inOperand4,
                                                                                           const class GGS_semanticExpressionAST & inOperand5,
                                                                                           const class GGS_location & inOperand6,
                                                                                           const class GGS_semanticInstructionListAST & inOperand7,
                                                                                           const class GGS_location & inOperand8,
                                                                                           const class GGS_location & inOperand9,
                                                                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mVariantExpression ;
  public: GGS_location mProperty_mEndOfVariantExpression ;
  public: GGS_semanticInstructionListAST mProperty_mFirstInstructions ;
  public: GGS_location mProperty_mEndOfFirstInstructions ;
  public: GGS_semanticExpressionAST mProperty_mLoopExpression ;
  public: GGS_location mProperty_mEndOfLoopExpression ;
  public: GGS_semanticInstructionListAST mProperty_mSecondInstructions ;
  public: GGS_location mProperty_mEndOfSecondInstructions ;
  public: GGS_location mProperty_mEndOfLoopInstruction ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantAST_2E_weak (const class GGS_loopInstructionWithVariantAST & inSource) ;

  public: GGS_loopInstructionWithVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantAST bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithVariantForGeneration (const class cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mVariantExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithVariantForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                       const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                       const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                   const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                   const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                   const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand2,
                                                                                 const class GGS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GGS_semanticInstructionListForGeneration & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_semanticExpressionForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                        const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                        const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithVariantForGeneration_2E_weak (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithVariantForGeneration bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithVariantForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithoutVariantAST (const class cPtr_loopInstructionWithoutVariantAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticInstructionListAST readProperty_mFirstInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfFirstInstructions (void) const ;

  public: class GGS_CommaSeparatedExpressionList readProperty_mLoopExpression (void) const ;

  public: class GGS_location readProperty_mEndOfLoopExpression (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfSecondInstructions (void) const ;

  public: class GGS_location readProperty_mEndOfLoopInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantAST init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_semanticInstructionListAST & inOperand1,
                                                                                            const class GGS_location & inOperand2,
                                                                                            const class GGS_CommaSeparatedExpressionList & inOperand3,
                                                                                            const class GGS_location & inOperand4,
                                                                                            const class GGS_semanticInstructionListAST & inOperand5,
                                                                                            const class GGS_location & inOperand6,
                                                                                            const class GGS_location & inOperand7,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantAST class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_semanticInstructionListAST & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_CommaSeparatedExpressionList & inOperand3,
                                                                            const class GGS_location & inOperand4,
                                                                            const class GGS_semanticInstructionListAST & inOperand5,
                                                                            const class GGS_location & inOperand6,
                                                                            const class GGS_location & inOperand7,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithoutVariantAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListAST & inOperand1,
                                                                                      const class GGS_location & inOperand2,
                                                                                      const class GGS_CommaSeparatedExpressionList & inOperand3,
                                                                                      const class GGS_location & inOperand4,
                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                      const class GGS_location & inOperand6,
                                                                                      const class GGS_location & inOperand7,
                                                                                      Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticInstructionListAST mProperty_mFirstInstructions ;
  public: GGS_location mProperty_mEndOfFirstInstructions ;
  public: GGS_CommaSeparatedExpressionList mProperty_mLoopExpression ;
  public: GGS_location mProperty_mEndOfLoopExpression ;
  public: GGS_semanticInstructionListAST mProperty_mSecondInstructions ;
  public: GGS_location mProperty_mEndOfSecondInstructions ;
  public: GGS_location mProperty_mEndOfLoopInstruction ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                 const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                 const GGS_location & in_mEndOfFirstInstructions,
                                                 const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                 const GGS_location & in_mEndOfLoopExpression,
                                                 const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                 const GGS_location & in_mEndOfSecondInstructions,
                                                 const GGS_location & in_mEndOfLoopInstruction,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantAST_2E_weak (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

  public: GGS_loopInstructionWithoutVariantAST_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantAST_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantAST bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantAST_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_loopInstructionWithoutVariantForGeneration (const class cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mFirstInstructions (void) const ;

  public: class GGS_ifTestListForGeneration readProperty_mLoopExpression (void) const ;

  public: class GGS_semanticInstructionListForGeneration readProperty_mSecondInstructions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_loopInstructionWithoutVariantForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                      const class GGS_ifTestListForGeneration & inOperand2,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantForGeneration extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                      const class GGS_ifTestListForGeneration & inOperand2,
                                                                                      const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_loopInstructionWithoutVariantForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand1,
                                                                                const class GGS_ifTestListForGeneration & inOperand2,
                                                                                const class GGS_semanticInstructionListForGeneration & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_semanticInstructionListForGeneration mProperty_mFirstInstructions ;
  public: GGS_ifTestListForGeneration mProperty_mLoopExpression ;
  public: GGS_semanticInstructionListForGeneration mProperty_mSecondInstructions ;


//--- Default constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                           const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                           const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                           const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @loopInstructionWithoutVariantForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_loopInstructionWithoutVariantForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

  public: GGS_loopInstructionWithoutVariantForGeneration_2E_weak & operator = (const class GGS_loopInstructionWithoutVariantForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_loopInstructionWithoutVariantForGeneration_2E_weak init_nil (void) {
    GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_loopInstructionWithoutVariantForGeneration bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_loopInstructionWithoutVariantForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_loopInstructionWithoutVariantForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_loopInstructionWithoutVariantForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @messageInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_messageInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_messageInstructionAST (const class cPtr_messageInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_messageInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_semanticExpressionAST & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_messageInstructionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_messageInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                 const class GGS_semanticExpressionAST & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @messageInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_messageInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void messageInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                   const class GGS_semanticExpressionAST & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_messageInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_messageInstructionAST (const GGS_location & in_mInstructionLocation,
                                      const GGS_semanticExpressionAST & in_mExpression,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @messageInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_messageInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_messageInstructionAST_2E_weak (const class GGS_messageInstructionAST & inSource) ;

  public: GGS_messageInstructionAST_2E_weak & operator = (const class GGS_messageInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_messageInstructionAST_2E_weak init_nil (void) {
    GGS_messageInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_messageInstructionAST bang_messageInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_messageInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_messageInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_messageInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @messageInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_messageInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_messageInstructionForGeneration (const class cPtr_messageInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_messageInstructionForGeneration init_21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_messageInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_messageInstructionForGeneration class_func_new (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @messageInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_messageInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void messageInstructionForGeneration_init_21__21_ (const class GGS_semanticExpressionForGeneration & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_messageInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_messageInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                const GGS_location & in_mInstructionLocation,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @messageInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_messageInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_messageInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_messageInstructionForGeneration_2E_weak (const class GGS_messageInstructionForGeneration & inSource) ;

  public: GGS_messageInstructionForGeneration_2E_weak & operator = (const class GGS_messageInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_messageInstructionForGeneration_2E_weak init_nil (void) {
    GGS_messageInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_messageInstructionForGeneration bang_messageInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_messageInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_messageInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_messageInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_messageInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_methodCallInstructionAST (const class cPtr_methodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_actualParameterListAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                    const class GGS_semanticExpressionAST & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_actualParameterListAST & inOperand3,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @methodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void methodCallInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_semanticExpressionAST & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_actualParameterListAST & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_methodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_methodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_semanticExpressionAST & in_mReceiverExpression,
                                         const GGS_lstring & in_mMethodName,
                                         const GGS_actualParameterListAST & in_mActualParameterList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionAST_2E_weak (const class GGS_methodCallInstructionAST & inSource) ;

  public: GGS_methodCallInstructionAST_2E_weak & operator = (const class GGS_methodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionAST_2E_weak init_nil (void) {
    GGS_methodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionAST bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_methodCallInstructionForGeneration (const class cPtr_methodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReceiverType (void) const ;

  public: class GGS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS_methodKind readProperty_mKind (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mMethodBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_methodCallInstructionForGeneration init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                              const class GGS_string & inOperand3,
                                                                                              const class GGS_methodKind & inOperand4,
                                                                                              const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                              const class GGS_bool & inOperand6,
                                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                              const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_methodKind & inOperand4,
                                                                              const class GGS_actualParameterListForGeneration & inOperand5,
                                                                              const class GGS_bool & inOperand6,
                                                                              const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                        const class GGS_semanticExpressionForGeneration & inOperand2,
                                                                                        const class GGS_string & inOperand3,
                                                                                        const class GGS_methodKind & inOperand4,
                                                                                        const class GGS_actualParameterListForGeneration & inOperand5,
                                                                                        const class GGS_bool & inOperand6,
                                                                                        const class GGS_unifiedTypeMapEntry & inOperand7,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_unifiedTypeMapEntry mProperty_mReceiverType ;
  public: GGS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_methodKind mProperty_mKind ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mMethodBaseType ;


//--- Default constructor
  public: cPtr_methodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_methodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                   const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                   const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GGS_string & in_mMethodName,
                                                   const GGS_methodKind & in_mKind,
                                                   const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                   const GGS_bool & in_mHasCompilerArgument,
                                                   const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @methodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_methodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_methodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_methodCallInstructionForGeneration_2E_weak (const class GGS_methodCallInstructionForGeneration & inSource) ;

  public: GGS_methodCallInstructionForGeneration_2E_weak & operator = (const class GGS_methodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_methodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_methodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_methodCallInstructionForGeneration bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_methodCallInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_methodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_methodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superInitInstructionAST (const class cPtr_superInitInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_actualOutputArgumentList readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superInitInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_actualOutputArgumentList & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superInitInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_actualOutputArgumentList & inOperand1,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_superInitInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superInitInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                     const class GGS_actualOutputArgumentList & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_actualOutputArgumentList mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                        const GGS_actualOutputArgumentList & in_mActualParameterList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superInitInstructionAST_2E_weak (const class GGS_superInitInstructionAST & inSource) ;

  public: GGS_superInitInstructionAST_2E_weak & operator = (const class GGS_superInitInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superInitInstructionAST_2E_weak init_nil (void) {
    GGS_superInitInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superInitInstructionAST bang_superInitInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superInitInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superInitInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superInitInstructionForGeneration (const class cPtr_superInitInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mSuperInitializerSignature (void) const ;

  public: class GGS_semanticExpressionListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_string readProperty_mSuperTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superInitInstructionForGeneration init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_semanticExpressionListForGeneration & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superInitInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_semanticExpressionListForGeneration & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_superInitInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superInitInstructionForGeneration_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       const class GGS_semanticExpressionListForGeneration & inOperand2,
                                                                       const class GGS_string & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mSuperInitializerSignature ;
  public: GGS_semanticExpressionListForGeneration mProperty_mActualParameterList ;
  public: GGS_string mProperty_mSuperTypeName ;


//--- Default constructor
  public: cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superInitInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                  const GGS_string & in_mSuperInitializerSignature,
                                                  const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                  const GGS_string & in_mSuperTypeName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superInitInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superInitInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superInitInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superInitInstructionForGeneration_2E_weak (const class GGS_superInitInstructionForGeneration & inSource) ;

  public: GGS_superInitInstructionForGeneration_2E_weak & operator = (const class GGS_superInitInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superInitInstructionForGeneration_2E_weak init_nil (void) {
    GGS_superInitInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superInitInstructionForGeneration bang_superInitInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superInitInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superInitInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superInitInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superInitInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superMethodCallInstructionAST (const class cPtr_superMethodCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_actualParameterListAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_actualParameterListAST & inOperand2,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_superMethodCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superMethodCallInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_actualParameterListAST & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mMethodName,
                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionAST_2E_weak (const class GGS_superMethodCallInstructionAST & inSource) ;

  public: GGS_superMethodCallInstructionAST_2E_weak & operator = (const class GGS_superMethodCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionAST_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionAST bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_superMethodCallInstructionForGeneration (const class cPtr_superMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

  public: class GGS_string readProperty_mMethodName (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GGS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mBaseType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_superMethodCallInstructionForGeneration init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GGS_bool & inOperand3,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionForGeneration class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_superMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_actualParameterListForGeneration & inOperand2,
                                                                                 const class GGS_bool & inOperand3,
                                                                                 const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;
  public: GGS_string mProperty_mMethodName ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: GGS_unifiedTypeMapEntry mProperty_mBaseType ;


//--- Default constructor
  public: cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mMethodName,
                                                        const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GGS_bool & in_mHasCompilerArgument,
                                                        const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @superMethodCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_superMethodCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_superMethodCallInstructionForGeneration_2E_weak (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

  public: GGS_superMethodCallInstructionForGeneration_2E_weak & operator = (const class GGS_superMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_superMethodCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_superMethodCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_superMethodCallInstructionForGeneration bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_superMethodCallInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_superMethodCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_superMethodCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procCallInstructionAST (const class cPtr_procCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRoutineName (void) const ;

  public: class GGS_actualParameterListAST readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_actualParameterListAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_actualParameterListAST & inOperand2,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procCallInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                        const class GGS_lstring & inOperand1,
                                                        const class GGS_actualParameterListAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRoutineName ;
  public: GGS_actualParameterListAST mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_procCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                       const GGS_lstring & in_mRoutineName,
                                       const GGS_actualParameterListAST & in_mActualParameterList,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procCallInstructionAST_2E_weak (const class GGS_procCallInstructionAST & inSource) ;

  public: GGS_procCallInstructionAST_2E_weak & operator = (const class GGS_procCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procCallInstructionAST_2E_weak init_nil (void) {
    GGS_procCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procCallInstructionAST bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procCallInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionForGeneration : public GGS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procCallInstructionForGeneration (const class cPtr_procCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_routineMangledName (void) const ;

  public: class GGS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallInstructionForGeneration init_21_routineMangledName_21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_actualParameterListForGeneration & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionForGeneration class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_actualParameterListForGeneration & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procCallInstructionForGeneration_init_21_routineMangledName_21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_actualParameterListForGeneration & inOperand1,
                                                                                Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_routineMangledName ;
  public: GGS_actualParameterListForGeneration mProperty_mActualParameterList ;


//--- Default constructor
  public: cPtr_procCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procCallInstructionForGeneration (const GGS_lstring & in_routineMangledName,
                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallInstructionForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procCallInstructionForGeneration_2E_weak : public GGS_semanticInstructionForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procCallInstructionForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procCallInstructionForGeneration_2E_weak (const class GGS_procCallInstructionForGeneration & inSource) ;

  public: GGS_procCallInstructionForGeneration_2E_weak & operator = (const class GGS_procCallInstructionForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procCallInstructionForGeneration_2E_weak init_nil (void) {
    GGS_procCallInstructionForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procCallInstructionForGeneration bang_procCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procCallInstructionForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallInstructionForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procCallInstructionForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procCallInstructionForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfAssignmentInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfAssignmentInstructionAST (const class cPtr_selfAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfAssignmentInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAssignmentInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfAssignmentInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfAssignmentInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_semanticExpressionAST & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                             const GGS_semanticExpressionAST & in_mSourceExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfAssignmentInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfAssignmentInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfAssignmentInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfAssignmentInstructionAST_2E_weak (const class GGS_selfAssignmentInstructionAST & inSource) ;

  public: GGS_selfAssignmentInstructionAST_2E_weak & operator = (const class GGS_selfAssignmentInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfAssignmentInstructionAST_2E_weak init_nil (void) {
    GGS_selfAssignmentInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfAssignmentInstructionAST bang_selfAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfAssignmentInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfAssignmentInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfAssignmentInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfDivEqualExpressionInstructionAST : public GGS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GGS_selfDivEqualExpressionInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_selfDivEqualExpressionInstructionAST (const class cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_selfDivEqualExpressionInstructionAST init_21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_semanticExpressionAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfDivEqualExpressionInstructionAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfDivEqualExpressionInstructionAST class_func_new (const class GGS_location & inOperand0,
                                                                                const class GGS_semanticExpressionAST & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfDivEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_selfDivEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void selfDivEqualExpressionInstructionAST_init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_semanticExpressionAST & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_selfDivEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @selfDivEqualExpressionInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_selfDivEqualExpressionInstructionAST_2E_weak : public GGS_semanticInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak (const class GGS_selfDivEqualExpressionInstructionAST & inSource) ;

  public: GGS_selfDivEqualExpressionInstructionAST_2E_weak & operator = (const class GGS_selfDivEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_selfDivEqualExpressionInstructionAST_2E_weak init_nil (void) {
    GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_selfDivEqualExpressionInstructionAST bang_selfDivEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_selfDivEqualExpressionInstructionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_selfDivEqualExpressionInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_selfDivEqualExpressionInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_selfDivEqualExpressionInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ;

