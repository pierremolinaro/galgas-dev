#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFileReference,
                                                 const class GALGAS_string & in_mFileName,
                                                 const class GALGAS_string & in_mBuildReference
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_BuildFileList init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_BuildFileList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_BuildFileList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_BuildFileList add_operation (const GALGAS_BuildFileList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_BuildFileList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_BuildFileList : public cGenericAbstractEnumerator {
  public: cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFileReference (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFileName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_BuildFileList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFileReference ;
  public: inline GALGAS_string readProperty_mFileReference (void) const {
    return mProperty_mFileReference ;
  }

  public: GALGAS_string mProperty_mFileName ;
  public: inline GALGAS_string readProperty_mFileName (void) const {
    return mProperty_mFileName ;
  }

  public: GALGAS_string mProperty_mBuildReference ;
  public: inline GALGAS_string readProperty_mBuildReference (void) const {
    return mProperty_mBuildReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFileReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileReference = inValue ;
  }

  public: inline void setter_setMFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFileName = inValue ;
  }

  public: inline void setter_setMBuildReference (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildReference = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_BuildFileList_2D_element (const GALGAS_string & in_mFileReference,
                                           const GALGAS_string & in_mFileName,
                                           const GALGAS_string & in_mBuildReference) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_BuildFileList_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS_string & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_BuildFileList_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_BuildFileList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
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
 
} ; // End of GALGAS_BuildFileList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForEnumerationAST_2E_implicit struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2E_implicit : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_prefix ;
  public: inline GALGAS_string readProperty_prefix (void) const {
    return mProperty_prefix ;
  }

  public: GALGAS_location mProperty_remplacementRange ;
  public: inline GALGAS_location readProperty_remplacementRange (void) const {
    return mProperty_remplacementRange ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2E_implicit (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPrefix (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_prefix = inValue ;
  }

  public: inline void setter_setRemplacementRange (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_remplacementRange = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionForEnumerationAST_2E_implicit (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionForEnumerationAST_2E_implicit (const GALGAS_string & in_prefix,
                                                                   const GALGAS_location & in_remplacementRange) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForEnumerationAST_2E_implicit init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForEnumerationAST_2E_implicit extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForEnumerationAST_2E_implicit class_func_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2E_implicit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_implicit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForEnumerationAST_2E_explicit struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2E_explicit : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_enumeration ;
  public: inline GALGAS_lstringlist readProperty_enumeration (void) const {
    return mProperty_enumeration ;
  }

  public: GALGAS_location mProperty_endOfProperties ;
  public: inline GALGAS_location readProperty_endOfProperties (void) const {
    return mProperty_endOfProperties ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2E_explicit (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumeration (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumeration = inValue ;
  }

  public: inline void setter_setEndOfProperties (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfProperties = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionForEnumerationAST_2E_explicit (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionForEnumerationAST_2E_explicit (const GALGAS_lstringlist & in_enumeration,
                                                                   const GALGAS_location & in_endOfProperties) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForEnumerationAST_2E_explicit init_21__21_ (const class GALGAS_lstringlist & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForEnumerationAST_2E_explicit extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForEnumerationAST_2E_explicit class_func_new (const class GALGAS_lstringlist & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2E_explicit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2E_explicit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_classType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2E_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isReference ;
  public: inline GALGAS_bool readProperty_isReference (void) const {
    return mProperty_isReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsReference (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isReference = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2E_classType (const GALGAS_bool & in_isReference) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2E_classType init_21_ (const class GALGAS_bool & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2E_classType extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2E_classType class_func_new (const class GALGAS_bool & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2E_classType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_weakReferenceType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2E_weakReferenceType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_referenceType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_referenceType (void) const {
    return mProperty_referenceType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReferenceType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2E_weakReferenceType (const GALGAS_unifiedTypeMapEntry & in_referenceType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2E_weakReferenceType init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2E_weakReferenceType extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2E_weakReferenceType class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2E_weakReferenceType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2E_weakReferenceType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_enumType struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_constantIndexMap mProperty_constantMap ;
  public: inline GALGAS_constantIndexMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantMap (const GALGAS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_typeKindEnum_2E_enumType (const GALGAS_constantIndexMap & in_constantMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_typeKindEnum_2E_enumType init_21_ (const class GALGAS_constantIndexMap & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKindEnum_2E_enumType extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKindEnum_2E_enumType class_func_new (const class GALGAS_constantIndexMap & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_typeKindEnum_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKindEnum_2E_enumType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localVarValuation_2E_declared struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localVarValuation_2E_declared : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_usedInSubscope ;
  public: inline GALGAS_bool readProperty_usedInSubscope (void) const {
    return mProperty_usedInSubscope ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localVarValuation_2E_declared (void) ;

//--------------------------------- Property setters
  public: inline void setter_setUsedInSubscope (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_usedInSubscope = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localVarValuation_2E_declared (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localVarValuation_2E_declared (const GALGAS_bool & in_usedInSubscope) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localVarValuation_2E_declared init_21_ (const class GALGAS_bool & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localVarValuation_2E_declared extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localVarValuation_2E_declared class_func_new (const class GALGAS_bool & inOperand0,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localVarValuation_2E_declared & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localVarValuation_2E_declared class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation_2E_declared ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2E_selectOverrideFirstBranch struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2E_selectOverrideFirstBranch : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_currentVarManager mProperty_savedManager ;
  public: inline GALGAS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2E_selectOverrideFirstBranch (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_overrideKind_2E_selectOverrideFirstBranch (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_overrideKind_2E_selectOverrideFirstBranch (const GALGAS_currentVarManager & in_savedManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overrideKind_2E_selectOverrideFirstBranch init_21_ (const class GALGAS_currentVarManager & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideKind_2E_selectOverrideFirstBranch extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideKind_2E_selectOverrideFirstBranch class_func_new (const class GALGAS_currentVarManager & inOperand0,
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
 
} ; // End of GALGAS_overrideKind_2E_selectOverrideFirstBranch class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideFirstBranch ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideKind_2E_selectOverrideNextBranches struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_overrideKind_2E_selectOverrideNextBranches : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_currentVarManager mProperty_savedManager ;
  public: inline GALGAS_currentVarManager readProperty_savedManager (void) const {
    return mProperty_savedManager ;
  }

  public: GALGAS_currentVarManager mProperty_referenceManager ;
  public: inline GALGAS_currentVarManager readProperty_referenceManager (void) const {
    return mProperty_referenceManager ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_overrideKind_2E_selectOverrideNextBranches (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSavedManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_savedManager = inValue ;
  }

  public: inline void setter_setReferenceManager (const GALGAS_currentVarManager & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceManager = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_overrideKind_2E_selectOverrideNextBranches (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_overrideKind_2E_selectOverrideNextBranches (const GALGAS_currentVarManager & in_savedManager,
                                                             const GALGAS_currentVarManager & in_referenceManager) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_overrideKind_2E_selectOverrideNextBranches init_21__21_ (const class GALGAS_currentVarManager & inOperand0,
                                                                                 const class GALGAS_currentVarManager & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideKind_2E_selectOverrideNextBranches extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_overrideKind_2E_selectOverrideNextBranches class_func_new (const class GALGAS_currentVarManager & inOperand0,
                                                                                         const class GALGAS_currentVarManager & inOperand1,
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
 
} ; // End of GALGAS_overrideKind_2E_selectOverrideNextBranches class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind_2E_selectOverrideNextBranches ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntry_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapElementClass_2D_weak mProperty_weakElement ;
  public: inline GALGAS_unifiedTypeMapElementClass_2D_weak readProperty_weakElement (void) const {
    return mProperty_weakElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakElement (const GALGAS_unifiedTypeMapElementClass_2D_weak & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMapEntry_2E_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapEntry_2E_element init_21_ (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntry_2E_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntry_2E_element class_func_new (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntry_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry_2E_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyInCollectionInitializationAST_2E_some struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionInitializationAST_2E_some : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_expression ;
  public: inline GALGAS_semanticExpressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionInitializationAST_2E_some (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyInCollectionInitializationAST_2E_some (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyInCollectionInitializationAST_2E_some (const GALGAS_semanticExpressionAST & in_expression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyInCollectionInitializationAST_2E_some init_21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionInitializationAST_2E_some extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyInCollectionInitializationAST_2E_some class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyInCollectionInitializationAST_2E_some & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyInCollectionInitializationAST_2E_some class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @selfAvailability_2E_available struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_selfAvailability_2E_available : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_type ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GALGAS_selfMutability mProperty_selfMutability ;
  public: inline GALGAS_selfMutability readProperty_selfMutability (void) const {
    return mProperty_selfMutability ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_selfAvailability_2E_available (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setSelfMutability (const GALGAS_selfMutability & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_selfMutability = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_selfAvailability_2E_available (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_selfAvailability_2E_available (const GALGAS_unifiedTypeMapEntry & in_type,
                                                const GALGAS_selfMutability & in_selfMutability) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_selfAvailability_2E_available init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_selfMutability & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_selfAvailability_2E_available extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_selfAvailability_2E_available class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_selfMutability & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_selfAvailability_2E_available & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_selfAvailability_2E_available class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability_2E_available ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItReplace struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementAST_2E_fixItReplace : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_exp ;
  public: inline GALGAS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_errorLocation ;
  public: inline GALGAS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementAST_2E_fixItReplace (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementAST_2E_fixItReplace (const GALGAS_semanticExpressionAST & in_exp,
                                                  const GALGAS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementAST_2E_fixItReplace init_21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementAST_2E_fixItReplace extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementAST_2E_fixItReplace class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_fixitElementAST_2E_fixItReplace class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItReplace ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItInsertAfter struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementAST_2E_fixItInsertAfter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_exp ;
  public: inline GALGAS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_errorLocation ;
  public: inline GALGAS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementAST_2E_fixItInsertAfter (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementAST_2E_fixItInsertAfter (const GALGAS_semanticExpressionAST & in_exp,
                                                      const GALGAS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementAST_2E_fixItInsertAfter init_21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementAST_2E_fixItInsertAfter extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementAST_2E_fixItInsertAfter class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_fixitElementAST_2E_fixItInsertAfter class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertAfter ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitElementAST_2E_fixItInsertBefore struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_fixitElementAST_2E_fixItInsertBefore : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_exp ;
  public: inline GALGAS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_errorLocation ;
  public: inline GALGAS_location readProperty_errorLocation (void) const {
    return mProperty_errorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_errorLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_fixitElementAST_2E_fixItInsertBefore (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitElementAST_2E_fixItInsertBefore (const GALGAS_semanticExpressionAST & in_exp,
                                                       const GALGAS_location & in_errorLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_fixitElementAST_2E_fixItInsertBefore init_21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitElementAST_2E_fixItInsertBefore extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_fixitElementAST_2E_fixItInsertBefore class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_fixitElementAST_2E_fixItInsertBefore class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST_2E_fixItInsertBefore ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionKind_2E_regularExp struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionKind_2E_regularExp : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_exp ;
  public: inline GALGAS_semanticExpressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

  public: GALGAS_location mProperty_endOfExp ;
  public: inline GALGAS_location readProperty_endOfExp (void) const {
    return mProperty_endOfExp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

  public: inline void setter_setEndOfExp (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfExp = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ifExpressionKind_2E_regularExp (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ifExpressionKind_2E_regularExp (const GALGAS_semanticExpressionAST & in_exp,
                                                 const GALGAS_location & in_endOfExp) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifExpressionKind_2E_regularExp init_21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionKind_2E_regularExp extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionKind_2E_regularExp class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_ifExpressionKind_2E_regularExp class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_regularExp ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgument_2E_actualOutput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgument_2E_actualOutput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionAST mProperty_expression ;
  public: inline GALGAS_semanticExpressionAST readProperty_expression (void) const {
    return mProperty_expression ;
  }

  public: GALGAS_location mProperty_location ;
  public: inline GALGAS_location readProperty_location (void) const {
    return mProperty_location ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualOutput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExpression (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_expression = inValue ;
  }

  public: inline void setter_setLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgument_2E_actualOutput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualOutput (const GALGAS_semanticExpressionAST & in_expression,
                                                               const GALGAS_location & in_location) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgument_2E_actualOutput init_21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgument_2E_actualOutput extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgument_2E_actualOutput class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                                           const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_optionalMethodActualArgument_2E_actualOutput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument_2E_actualOutput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgument_2E_actualInputJoker struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgument_2E_actualInputJoker : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_checkSelector ;
  public: inline GALGAS_bool readProperty_checkSelector (void) const {
    return mProperty_checkSelector ;
  }

  public: GALGAS_location mProperty_location ;
  public: inline GALGAS_location readProperty_location (void) const {
    return mProperty_location ;
  }

  public: GALGAS_uint mProperty_idx ;
  public: inline GALGAS_uint readProperty_idx (void) const {
    return mProperty_idx ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualInputJoker (void) ;

//--------------------------------- Property setters
  public: inline void setter_setCheckSelector (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkSelector = inValue ;
  }

  public: inline void setter_setLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_location = inValue ;
  }

  public: inline void setter_setIdx (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_idx = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgument_2E_actualInputJoker (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgument_2E_actualInputJoker (const GALGAS_bool & in_checkSelector,
                                                                   const GALGAS_location & in_location,
                                                                   const GALGAS_uint & in_idx) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgument_2E_actualInputJoker init_21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                           const class GALGAS_location & inOperand1,
                                                                                           const class GALGAS_uint & inOperand2,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgument_2E_actualInputJoker extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgument_2E_actualInputJoker class_func_new (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
                                                                                               const class GALGAS_uint & inOperand2,
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
 
} ; // End of GALGAS_optionalMethodActualArgument_2E_actualInputJoker class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgument_2E_actualInputJoker ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentForGeneration_2E_actualLetInput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_typeName ;
  public: inline GALGAS_string readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_string mProperty_constantName ;
  public: inline GALGAS_string readProperty_constantName (void) const {
    return mProperty_constantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setConstantName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput (const GALGAS_string & in_typeName,
                                                                              const GALGAS_string & in_constantName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput class_func_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1,
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
 
} ; // End of GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration_2E_actualLetInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalMethodActualArgumentForGeneration_2E_actualVarInput struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_typeName ;
  public: inline GALGAS_string readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

  public: GALGAS_string mProperty_variableName ;
  public: inline GALGAS_string readProperty_variableName (void) const {
    return mProperty_variableName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

  public: inline void setter_setVariableName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_variableName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput (const GALGAS_string & in_typeName,
                                                                              const GALGAS_string & in_variableName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput class_func_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1,
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
 
} ; // End of GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalMethodActualArgumentForGeneration_2E_actualVarInput ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControlAST_2E_fileprivateAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControlAST_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_declarationLocation ;
  public: inline GALGAS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControlAST_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControlAST_2E_fileprivateAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControlAST_2E_fileprivateAccess (const GALGAS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControlAST_2E_fileprivateAccess init_21_ (const class GALGAS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControlAST_2E_fileprivateAccess extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControlAST_2E_fileprivateAccess class_func_new (const class GALGAS_location & inOperand0,
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
 
} ; // End of GALGAS_AccessControlAST_2E_fileprivateAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControlAST_2E_fileprivateSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControlAST_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_declarationLocation ;
  public: inline GALGAS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControlAST_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControlAST_2E_fileprivateSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControlAST_2E_fileprivateSetAccess (const GALGAS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControlAST_2E_fileprivateSetAccess init_21_ (const class GALGAS_location & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControlAST_2E_fileprivateSetAccess extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControlAST_2E_fileprivateSetAccess class_func_new (const class GALGAS_location & inOperand0,
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
 
} ; // End of GALGAS_AccessControlAST_2E_fileprivateSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_protectedAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_protectedAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_protectedAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_protectedAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_protectedAccess (const GALGAS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_protectedAccess init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_protectedAccess extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_protectedAccess class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_protectedAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_protectedSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_protectedSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_protectedSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_protectedSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_protectedSetAccess (const GALGAS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_protectedSetAccess init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_protectedSetAccess extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_protectedSetAccess class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_protectedSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_privateAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_privateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_privateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_privateAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_privateAccess (const GALGAS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_privateAccess init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_privateAccess extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_privateAccess class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_privateAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_privateSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_privateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_privateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_privateSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_privateSetAccess (const GALGAS_unifiedTypeMapEntry & in_declaringType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_privateSetAccess init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_privateSetAccess extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_privateSetAccess class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_privateSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_fileprivateAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_fileprivateAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_declarationLocation ;
  public: inline GALGAS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_fileprivateAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_fileprivateAccess (const GALGAS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_fileprivateAccess init_21_ (const class GALGAS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_fileprivateAccess extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_fileprivateAccess class_func_new (const class GALGAS_location & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_fileprivateAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @AccessControl_2E_fileprivateSetAccess struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_AccessControl_2E_fileprivateSetAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_declarationLocation ;
  public: inline GALGAS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_AccessControl_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_AccessControl_2E_fileprivateSetAccess (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_AccessControl_2E_fileprivateSetAccess (const GALGAS_location & in_declarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_AccessControl_2E_fileprivateSetAccess init_21_ (const class GALGAS_location & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_AccessControl_2E_fileprivateSetAccess extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_AccessControl_2E_fileprivateSetAccess class_func_new (const class GALGAS_location & inOperand0,
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
 
} ; // End of GALGAS_AccessControl_2E_fileprivateSetAccess class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE galgasTemplateScanner
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

typedef cTokenFor_galgasScanner_33_ cTokenFor_galgasTemplateScanner ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_galgasTemplateScanner : public Lexique_galgasScanner_33_ {
//--- Constructors
  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_galgasTemplateScanner (void) { }
  #endif
//--- Scanner mode for template scanner
  private: int32_t mMatchedTemplateDelimiterIndex ;

//--- Parse lexical token
  protected: virtual bool parseLexicalToken (void) override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'templateSyntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_templateSyntax {
//--- Virtual destructor
  public: virtual ~ cParser_templateSyntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                 class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_ (class GALGAS_lstringlist & ioArgument0,
                                                             class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_element_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (class GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                          class GALGAS_templateExpressionAST & outArgument1,
                                                                          class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_ (class GALGAS_templateExpressionListAST & outArgument0,
                                                                   class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_output_5F_expression_5F_list_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_primary_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                         class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_factor_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_relation_5F_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_expression_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_ (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_switch_5F_case_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                                       class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_instruction_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_ (class GALGAS_templateInstructionListAST & outArgument0,
                                                                     class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_template_5F_parser_5F_start_5F_symbol_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_ (class GALGAS_templateExpressionAST & outArgument0,
                                           class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_parse (class Lexique_galgasTemplateScanner * inLexique) = 0 ;

  protected: virtual void nt_term_5F_tpl_indexing (class Lexique_galgasTemplateScanner * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_templateSyntax_expression_5F_tpl_i0_ (GALGAS_templateExpressionAST & outArgument0,
                                                             Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_expression_5F_tpl_i0_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GALGAS_templateExpressionAST & outArgument0,
                                                                   Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GALGAS_templateExpressionAST & outArgument0,
                                                                     Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GALGAS_templateExpressionAST & outArgument0,
                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_ (GALGAS_templateExpressionAST & outArgument0,
                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_ (GALGAS_templateExpressionAST & outArgument0,
                                                         Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_ (GALGAS_templateExpressionAST & outArgument0,
                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_ (GALGAS_templateExpressionAST & outArgument0,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GALGAS_templateExpressionListAST & outArgument0,
                                                                                Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GALGAS_templateInstructionListAST & outArgument0,
                                                                                  Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GALGAS_lstringlist & ioArgument0,
                                                                          Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_ (GALGAS_templateInstructionForEnumerationAST & outArgument0,
                                                                                       GALGAS_templateExpressionAST & outArgument1,
                                                                                       Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i31_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_ (GALGAS_templateInstructionListAST & ioArgument0,
                                                                    Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_template_5F_instruction_i33_indexing (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_ (GALGAS_lstringlist & outArgument0,
                                                           GALGAS_switchExtractedValuesListAST & outArgument1,
                                                           Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_parse (Lexique_galgasTemplateScanner * inLexique) ;

  protected: void rule_templateSyntax_switch_5F_case_i34_indexing (Lexique_galgasTemplateScanner * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_templateSyntax_0 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_1 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_2 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_3 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_4 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_5 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_6 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_7 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_8 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_9 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_10 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_11 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_12 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_13 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_14 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_15 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_16 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_17 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_18 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_19 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_20 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_21 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_22 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_23 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_24 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_25 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_26 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_27 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_28 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_29 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_30 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_31 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_32 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_33 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_34 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_35 (Lexique_galgasTemplateScanner *) = 0 ;

  protected: virtual int32_t select_templateSyntax_36 (Lexique_galgasTemplateScanner *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (class GALGAS_templateInstructionListAST & ioArgument0,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

