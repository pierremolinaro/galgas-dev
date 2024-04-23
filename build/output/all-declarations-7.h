#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@functionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_functionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mFunctionSignature ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: GALGAS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_functionMap (const GALGAS_functionMap_2D_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_functionMap (const GALGAS_lstring & inKey,
                                   const GALGAS_functionSignature & in_mFunctionSignature,
                                   const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                   const GALGAS_bool & in_mIsInternal
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mFunctionSignature ;
  public: inline GALGAS_functionSignature readProperty_mFunctionSignature (void) const {
    return mProperty_mFunctionSignature ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mResultType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GALGAS_bool mProperty_mIsInternal ;
  public: inline GALGAS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFunctionSignature (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionSignature = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMIsInternal (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_functionMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_functionMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_functionSignature & in_mFunctionSignature,
                                         const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                         const GALGAS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_functionSignature & inOperand1,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_functionSignature & inOperand1,
                                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                     const class GALGAS_bool & inOperand3,
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
 
} ; // End of GALGAS_functionMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: functionMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_functionMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_functionMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_functionMap_2D_element_3F_ (const GALGAS_functionMap_2D_element & inValue) ;
  public: static GALGAS_functionMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_functionMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_functionMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperFileMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperFileMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_wrapperFileMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_wrapperFileMap (const GALGAS_wrapperFileMap & inSource) ;
  public: GALGAS_wrapperFileMap & operator = (const GALGAS_wrapperFileMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperFileMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperFileMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperFileMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_wrapperFileMap class_func_mapWithMapToOverride (const class GALGAS_wrapperFileMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uint & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_wrapperFileMap add_operation (const GALGAS_wrapperFileMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_uint constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbsoluteFilePathForKey (class GALGAS_string constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsTextFileForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperFileIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uint & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbsoluteFilePathForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTextFileForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperFileIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_uint & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperFileMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_wrapperFileMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperFileMap ;
 
} ; // End of GALGAS_wrapperFileMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperFileMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperFileMap (const GALGAS_wrapperFileMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mAbsoluteFilePath (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsTextFile (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperFileIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_wrapperFileMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperFileMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperFileMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mAbsoluteFilePath ;
  public: GALGAS_bool mProperty_mIsTextFile ;
  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: GALGAS_uint mProperty_mWrapperFileIndex ;

//--- Constructors
  public: cMapElement_wrapperFileMap (const GALGAS_wrapperFileMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperFileMap (const GALGAS_lstring & inKey,
                                      const GALGAS_string & in_mAbsoluteFilePath,
                                      const GALGAS_bool & in_mIsTextFile,
                                      const GALGAS_uint & in_mWrapperDirectoryIndex,
                                      const GALGAS_uint & in_mWrapperFileIndex
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperFileMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperFileMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mAbsoluteFilePath ;
  public: inline GALGAS_string readProperty_mAbsoluteFilePath (void) const {
    return mProperty_mAbsoluteFilePath ;
  }

  public: GALGAS_bool mProperty_mIsTextFile ;
  public: inline GALGAS_bool readProperty_mIsTextFile (void) const {
    return mProperty_mIsTextFile ;
  }

  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GALGAS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

  public: GALGAS_uint mProperty_mWrapperFileIndex ;
  public: inline GALGAS_uint readProperty_mWrapperFileIndex (void) const {
    return mProperty_mWrapperFileIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAbsoluteFilePath (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAbsoluteFilePath = inValue ;
  }

  public: inline void setter_setMIsTextFile (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTextFile = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

  public: inline void setter_setMWrapperFileIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperFileIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_wrapperFileMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_wrapperFileMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_string & in_mAbsoluteFilePath,
                                            const GALGAS_bool & in_mIsTextFile,
                                            const GALGAS_uint & in_mWrapperDirectoryIndex,
                                            const GALGAS_uint & in_mWrapperFileIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperFileMap_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_uint & inOperand3,
                                                                            const class GALGAS_uint & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperFileMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperFileMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_uint & inOperand3,
                                                                        const class GALGAS_uint & inOperand4,
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
 
} ; // End of GALGAS_wrapperFileMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: wrapperFileMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperFileMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_wrapperFileMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperFileMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_wrapperFileMap_2D_element_3F_ (const GALGAS_wrapperFileMap_2D_element & inValue) ;
  public: static GALGAS_wrapperFileMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_wrapperFileMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_wrapperFileMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_wrapperFileMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperFileMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_wrapperDirectoryMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperDirectoryMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_wrapperDirectoryMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inSource) ;
  public: GALGAS_wrapperDirectoryMap & operator = (const GALGAS_wrapperDirectoryMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperDirectoryMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperDirectoryMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperDirectoryMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_wrapperDirectoryMap class_func_mapWithMapToOverride (const class GALGAS_wrapperDirectoryMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_wrapperFileMap & inOperand1,
                                                     const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_wrapperDirectoryMap add_operation (const GALGAS_wrapperDirectoryMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_wrapperFileMap constinArgument1,
                                                  class GALGAS_wrapperDirectoryMap constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegularFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWrapperDirectoryIndexForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_wrapperFileMap & outArgument1,
                                                  class GALGAS_wrapperDirectoryMap & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mRegularFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mWrapperDirectoryIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_wrapperFileMap & outOperand1,
                                                    class GALGAS_wrapperDirectoryMap & outOperand2,
                                                    class GALGAS_uint & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperDirectoryMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_wrapperDirectoryMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperDirectoryMap ;
 
} ; // End of GALGAS_wrapperDirectoryMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperDirectoryMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperFileMap current_mRegularFileMap (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperDirectoryMap current_mDirectoryMap (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mWrapperDirectoryIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_wrapperDirectoryMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperDirectoryMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperDirectoryMap : public cMapElement {
//--- Map attributes
  public: GALGAS_wrapperFileMap mProperty_mRegularFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;

//--- Constructors
  public: cMapElement_wrapperDirectoryMap (const GALGAS_wrapperDirectoryMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperDirectoryMap (const GALGAS_lstring & inKey,
                                           const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                           const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                           const GALGAS_uint & in_mWrapperDirectoryIndex
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperDirectoryMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperDirectoryMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_wrapperFileMap mProperty_mRegularFileMap ;
  public: inline GALGAS_wrapperFileMap readProperty_mRegularFileMap (void) const {
    return mProperty_mRegularFileMap ;
  }

  public: GALGAS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: inline GALGAS_wrapperDirectoryMap readProperty_mDirectoryMap (void) const {
    return mProperty_mDirectoryMap ;
  }

  public: GALGAS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GALGAS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegularFileMap (const GALGAS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularFileMap = inValue ;
  }

  public: inline void setter_setMDirectoryMap (const GALGAS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDirectoryMap = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_wrapperDirectoryMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_wrapperDirectoryMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_wrapperFileMap & in_mRegularFileMap,
                                                 const GALGAS_wrapperDirectoryMap & in_mDirectoryMap,
                                                 const GALGAS_uint & in_mWrapperDirectoryIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperDirectoryMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_wrapperFileMap & inOperand1,
                                                                             const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                             const class GALGAS_uint & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperDirectoryMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperDirectoryMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_wrapperFileMap & inOperand1,
                                                                             const class GALGAS_wrapperDirectoryMap & inOperand2,
                                                                             const class GALGAS_uint & inOperand3,
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
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: wrapperDirectoryMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperDirectoryMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_wrapperDirectoryMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperDirectoryMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_wrapperDirectoryMap_2D_element_3F_ (const GALGAS_wrapperDirectoryMap_2D_element & inValue) ;
  public: static GALGAS_wrapperDirectoryMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_wrapperDirectoryMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_wrapperDirectoryMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_wrapperDirectoryMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_filewrapperTemplateMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inSource) ;
  public: GALGAS_filewrapperTemplateMap & operator = (const GALGAS_filewrapperTemplateMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateMap extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperTemplateMap class_func_mapWithMapToOverride (const class GALGAS_filewrapperTemplateMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateMap add_operation (const GALGAS_filewrapperTemplateMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_lstring constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplatePathForKey (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperTemplatePathForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mTemplateSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_functionSignature & outOperand1,
                                                    class GALGAS_lstring & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_filewrapperTemplateMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_filewrapperTemplateMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateMap ;
 
} ; // End of GALGAS_filewrapperTemplateMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateMap : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mTemplateSignature (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperTemplateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperTemplateMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperTemplateMap : public cMapElement {
//--- Map attributes
  public: GALGAS_functionSignature mProperty_mTemplateSignature ;
  public: GALGAS_lstring mProperty_mFilewrapperTemplatePath ;

//--- Constructors
  public: cMapElement_filewrapperTemplateMap (const GALGAS_filewrapperTemplateMap_2D_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperTemplateMap (const GALGAS_lstring & inKey,
                                              const GALGAS_functionSignature & in_mTemplateSignature,
                                              const GALGAS_lstring & in_mFilewrapperTemplatePath
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_functionSignature mProperty_mTemplateSignature ;
  public: inline GALGAS_functionSignature readProperty_mTemplateSignature (void) const {
    return mProperty_mTemplateSignature ;
  }

  public: GALGAS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GALGAS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTemplateSignature (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateSignature = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperTemplateMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperTemplateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_functionSignature & in_mTemplateSignature,
                                                    const GALGAS_lstring & in_mFilewrapperTemplatePath) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_functionSignature & inOperand1,
                                                                            const class GALGAS_lstring & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_functionSignature & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
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
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: filewrapperTemplateMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_filewrapperTemplateMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_filewrapperTemplateMap_2D_element_3F_ (const GALGAS_filewrapperTemplateMap_2D_element & inValue) ;
  public: static GALGAS_filewrapperTemplateMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_filewrapperTemplateMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_filewrapperTemplateMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@filewrapperMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: GALGAS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: GALGAS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: GALGAS_bool mProperty_mIsInternal ;

//--- Constructors
  public: cMapElement_filewrapperMap (const GALGAS_filewrapperMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_filewrapperMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lstring & in_mFilewrapperPath,
                                      const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                      const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                      const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                      const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                      const GALGAS_bool & in_mIsInternal
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mFilewrapperPath ;
  public: inline GALGAS_lstring readProperty_mFilewrapperPath (void) const {
    return mProperty_mFilewrapperPath ;
  }

  public: GALGAS_lstringlist mProperty_mFilewrapperExtensionList ;
  public: inline GALGAS_lstringlist readProperty_mFilewrapperExtensionList (void) const {
    return mProperty_mFilewrapperExtensionList ;
  }

  public: GALGAS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: inline GALGAS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const {
    return mProperty_mFilewrapperFileMap ;
  }

  public: GALGAS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;
  public: inline GALGAS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const {
    return mProperty_mFilewrapperDirectoryMap ;
  }

  public: GALGAS_filewrapperTemplateMap mProperty_mFilewrapperTemplateMap ;
  public: inline GALGAS_filewrapperTemplateMap readProperty_mFilewrapperTemplateMap (void) const {
    return mProperty_mFilewrapperTemplateMap ;
  }

  public: GALGAS_bool mProperty_mIsInternal ;
  public: inline GALGAS_bool readProperty_mIsInternal (void) const {
    return mProperty_mIsInternal ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFilewrapperPath (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperPath = inValue ;
  }

  public: inline void setter_setMFilewrapperExtensionList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperExtensionList = inValue ;
  }

  public: inline void setter_setMFilewrapperFileMap (const GALGAS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperFileMap = inValue ;
  }

  public: inline void setter_setMFilewrapperDirectoryMap (const GALGAS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperDirectoryMap = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateMap (const GALGAS_filewrapperTemplateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateMap = inValue ;
  }

  public: inline void setter_setMIsInternal (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsInternal = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lstring & in_mFilewrapperPath,
                                            const GALGAS_lstringlist & in_mFilewrapperExtensionList,
                                            const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                            const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                            const GALGAS_filewrapperTemplateMap & in_mFilewrapperTemplateMap,
                                            const GALGAS_bool & in_mIsInternal) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperMap_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstringlist & inOperand2,
                                                                                    const class GALGAS_wrapperFileMap & inOperand3,
                                                                                    const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                                    const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                                    const class GALGAS_bool & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                        const class GALGAS_wrapperFileMap & inOperand3,
                                                                        const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                                        const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                                        const class GALGAS_bool & inOperand6,
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
 
} ; // End of GALGAS_filewrapperMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: filewrapperMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_filewrapperMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_filewrapperMap_2D_element_3F_ (const GALGAS_filewrapperMap_2D_element & inValue) ;
  public: static GALGAS_filewrapperMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_filewrapperMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_filewrapperMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@optionComponentMapForSemanticAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsPredefined ;
  public: GALGAS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringListOptionMap ;

//--- Constructors
  public: cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inValue
                                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_optionComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                             const GALGAS_bool & in_mIsPredefined,
                                                             const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                             const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                             const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                             const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentMapForSemanticAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsPredefined ;
  public: inline GALGAS_bool readProperty_mIsPredefined (void) const {
    return mProperty_mIsPredefined ;
  }

  public: GALGAS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: inline GALGAS_commandLineOptionMap readProperty_mBoolOptionMap (void) const {
    return mProperty_mBoolOptionMap ;
  }

  public: GALGAS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: inline GALGAS_commandLineOptionMap readProperty_mUIntOptionMap (void) const {
    return mProperty_mUIntOptionMap ;
  }

  public: GALGAS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: inline GALGAS_commandLineOptionMap readProperty_mStringOptionMap (void) const {
    return mProperty_mStringOptionMap ;
  }

  public: GALGAS_commandLineOptionMap mProperty_mStringListOptionMap ;
  public: inline GALGAS_commandLineOptionMap readProperty_mStringListOptionMap (void) const {
    return mProperty_mStringListOptionMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsPredefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPredefined = inValue ;
  }

  public: inline void setter_setMBoolOptionMap (const GALGAS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolOptionMap = inValue ;
  }

  public: inline void setter_setMUIntOptionMap (const GALGAS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntOptionMap = inValue ;
  }

  public: inline void setter_setMStringOptionMap (const GALGAS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringOptionMap = inValue ;
  }

  public: inline void setter_setMStringListOptionMap (const GALGAS_commandLineOptionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringListOptionMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_optionComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_optionComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_bool & in_mIsPredefined,
                                                                   const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                   const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                   const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                   const GALGAS_commandLineOptionMap & in_mStringListOptionMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionComponentMapForSemanticAnalysis_2D_element init_21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1,
                                                                                                       const class GALGAS_commandLineOptionMap & inOperand2,
                                                                                                       const class GALGAS_commandLineOptionMap & inOperand3,
                                                                                                       const class GALGAS_commandLineOptionMap & inOperand4,
                                                                                                       const class GALGAS_commandLineOptionMap & inOperand5,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionComponentMapForSemanticAnalysis_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_bool & inOperand1,
                                                                                               const class GALGAS_commandLineOptionMap & inOperand2,
                                                                                               const class GALGAS_commandLineOptionMap & inOperand3,
                                                                                               const class GALGAS_commandLineOptionMap & inOperand4,
                                                                                               const class GALGAS_commandLineOptionMap & inOperand5,
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
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: optionComponentMapForSemanticAnalysis-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_optionComponentMapForSemanticAnalysis_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ (const GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inValue) ;
  public: static GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_optionComponentMapForSemanticAnalysis_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexiqueComponentMapForSemanticAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexiqueComponentMapForSemanticAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_bool mProperty_mIsTemplate ;
  public: GALGAS_terminalMap mProperty_mTerminalMap ;
  public: GALGAS_indexingListAST mProperty_mIndexingListAST ;
  public: GALGAS_terminalDeclarationListAST mProperty_mTerminalListAST ;
  public: GALGAS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: GALGAS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: GALGAS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;

//--- Constructors
  public: cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_bool & in_mIsTemplate,
                                                              const GALGAS_terminalMap & in_mTerminalMap,
                                                              const GALGAS_indexingListAST & in_mIndexingListAST,
                                                              const GALGAS_terminalDeclarationListAST & in_mTerminalListAST,
                                                              const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                              const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                              const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentMapForSemanticAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bool mProperty_mIsTemplate ;
  public: inline GALGAS_bool readProperty_mIsTemplate (void) const {
    return mProperty_mIsTemplate ;
  }

  public: GALGAS_terminalMap mProperty_mTerminalMap ;
  public: inline GALGAS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GALGAS_indexingListAST mProperty_mIndexingListAST ;
  public: inline GALGAS_indexingListAST readProperty_mIndexingListAST (void) const {
    return mProperty_mIndexingListAST ;
  }

  public: GALGAS_terminalDeclarationListAST mProperty_mTerminalListAST ;
  public: inline GALGAS_terminalDeclarationListAST readProperty_mTerminalListAST (void) const {
    return mProperty_mTerminalListAST ;
  }

  public: GALGAS_lexicalAttributeListAST mProperty_mLexicalAttributeListAST ;
  public: inline GALGAS_lexicalAttributeListAST readProperty_mLexicalAttributeListAST (void) const {
    return mProperty_mLexicalAttributeListAST ;
  }

  public: GALGAS_lexicalStyleListAST mProperty_mLexicalStyleListAST ;
  public: inline GALGAS_lexicalStyleListAST readProperty_mLexicalStyleListAST (void) const {
    return mProperty_mLexicalStyleListAST ;
  }

  public: GALGAS_lexicalListDeclarationListAST mProperty_mLexicalListDeclarationListAST ;
  public: inline GALGAS_lexicalListDeclarationListAST readProperty_mLexicalListDeclarationListAST (void) const {
    return mProperty_mLexicalListDeclarationListAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsTemplate (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsTemplate = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GALGAS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMIndexingListAST (const GALGAS_indexingListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexingListAST = inValue ;
  }

  public: inline void setter_setMTerminalListAST (const GALGAS_terminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalListAST = inValue ;
  }

  public: inline void setter_setMLexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeListAST = inValue ;
  }

  public: inline void setter_setMLexicalStyleListAST (const GALGAS_lexicalStyleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalStyleListAST = inValue ;
  }

  public: inline void setter_setMLexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalListDeclarationListAST = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_bool & in_mIsTemplate,
                                                                    const GALGAS_terminalMap & in_mTerminalMap,
                                                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                    const GALGAS_terminalDeclarationListAST & in_mTerminalListAST,
                                                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element init_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                                const class GALGAS_terminalMap & inOperand2,
                                                                                                                const class GALGAS_indexingListAST & inOperand3,
                                                                                                                const class GALGAS_terminalDeclarationListAST & inOperand4,
                                                                                                                const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                                                                const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                                                                const class GALGAS_lexicalListDeclarationListAST & inOperand7,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                const class GALGAS_terminalMap & inOperand2,
                                                                                                const class GALGAS_indexingListAST & inOperand3,
                                                                                                const class GALGAS_terminalDeclarationListAST & inOperand4,
                                                                                                const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                                                                const class GALGAS_lexicalStyleListAST & inOperand6,
                                                                                                const class GALGAS_lexicalListDeclarationListAST & inOperand7,
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
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: lexiqueComponentMapForSemanticAnalysis-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ (const GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inValue) ;
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@syntaxComponentMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_syntaxComponentMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mLexiqueName ;
  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructors
  public: cMapElement_syntaxComponentMap (const GALGAS_syntaxComponentMap_2D_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_syntaxComponentMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lstring & in_mLexiqueName,
                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                          const GALGAS_bool & in_mHasTranslateFeature
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mLexiqueName ;
  public: inline GALGAS_lstring readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public: inline GALGAS_nonterminalDeclarationListAST readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public: inline GALGAS_syntaxRuleListAST readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GALGAS_bool mProperty_mHasTranslateFeature ;
  public: inline GALGAS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GALGAS_nonterminalDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GALGAS_syntaxRuleListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syntaxComponentMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syntaxComponentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lstring & in_mLexiqueName,
                                                const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                const GALGAS_bool & in_mHasTranslateFeature) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxComponentMap_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                                const class GALGAS_bool & inOperand4,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxComponentMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                            const class GALGAS_syntaxRuleListAST & inOperand3,
                                                                            const class GALGAS_bool & inOperand4,
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
 
} ; // End of GALGAS_syntaxComponentMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: syntaxComponentMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_syntaxComponentMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_syntaxComponentMap_2D_element_3F_ (const GALGAS_syntaxComponentMap_2D_element & inValue) ;
  public: static GALGAS_syntaxComponentMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_syntaxComponentMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_syntaxComponentMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxComponentMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerMapForType map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerMapForType (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionInitializerMapForType (const GALGAS_extensionInitializerMapForType & inSource) ;
  public: GALGAS_extensionInitializerMapForType & operator = (const GALGAS_extensionInitializerMapForType & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionInitializerMapForType init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerMapForType extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionInitializerMapForType class_func_mapWithMapToOverride (const class GALGAS_extensionInitializerMapForType & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalInputParameterListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionInitializerMapForType add_operation (const GALGAS_extensionInitializerMapForType & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalInputParameterListAST constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GALGAS_formalInputParameterListAST constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionInitializerMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionInitializerMapForType_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalInputParameterListAST & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionInitializerMapForType * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionInitializerMapForType_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionInitializerMapForType ;
 
} ; // End of GALGAS_extensionInitializerMapForType class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionInitializerMapForType : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionInitializerMapForType (const GALGAS_extensionInitializerMapForType & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalInputParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionInitializerMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionInitializerMapForType' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionInitializerMapForType : public cMapElement {
//--- Map attributes
  public: GALGAS_formalInputParameterListAST mProperty_mFormalParameterList ;

//--- Constructors
  public: cMapElement_extensionInitializerMapForType (const GALGAS_extensionInitializerMapForType_2D_element & inValue
                                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionInitializerMapForType (const GALGAS_lstring & inKey,
                                                      const GALGAS_formalInputParameterListAST & in_mFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerMapForType_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalInputParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalInputParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerMapForType_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionInitializerMapForType_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionInitializerMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_formalInputParameterListAST & in_mFormalParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionInitializerMapForType_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalInputParameterListAST & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerMapForType_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_formalInputParameterListAST & inOperand1,
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
 
} ; // End of GALGAS_extensionInitializerMapForType_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionInitializerMapForType-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerMapForType_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionInitializerMapForType_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerMapForType_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionInitializerMapForType_2D_element_3F_ (const GALGAS_extensionInitializerMapForType_2D_element & inValue) ;
  public: static GALGAS_extensionInitializerMapForType_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionInitializerMapForType_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionInitializerMapForType_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionInitializerMapForType_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerMapForType_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerForBuildingContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionInitializerForBuildingContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_extensionInitializerForBuildingContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionInitializerForBuildingContext (const GALGAS_extensionInitializerForBuildingContext & inSource) ;
  public: GALGAS_extensionInitializerForBuildingContext & operator = (const GALGAS_extensionInitializerForBuildingContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionInitializerForBuildingContext init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionInitializerForBuildingContext class_func_mapWithMapToOverride (const class GALGAS_extensionInitializerForBuildingContext & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_extensionInitializerMapForType & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionInitializerForBuildingContext add_operation (const GALGAS_extensionInitializerForBuildingContext & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionInitializerMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionInitializerMapForTypeForKey (class GALGAS_extensionInitializerMapForType constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionInitializerMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionInitializerMapForType getter_mExtensionInitializerMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionInitializerForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_extensionInitializerMapForType & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionInitializerForBuildingContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionInitializerForBuildingContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionInitializerForBuildingContext ;
 
} ; // End of GALGAS_extensionInitializerForBuildingContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionInitializerForBuildingContext : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionInitializerForBuildingContext (const GALGAS_extensionInitializerForBuildingContext & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_extensionInitializerMapForType current_mExtensionInitializerMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionInitializerForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionInitializerForBuildingContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionInitializerForBuildingContext : public cMapElement {
//--- Map attributes
  public: GALGAS_extensionInitializerMapForType mProperty_mExtensionInitializerMapForType ;

//--- Constructors
  public: cMapElement_extensionInitializerForBuildingContext (const GALGAS_extensionInitializerForBuildingContext_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionInitializerForBuildingContext (const GALGAS_lstring & inKey,
                                                              const GALGAS_extensionInitializerMapForType & in_mExtensionInitializerMapForType
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionInitializerForBuildingContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_extensionInitializerMapForType mProperty_mExtensionInitializerMapForType ;
  public: inline GALGAS_extensionInitializerMapForType readProperty_mExtensionInitializerMapForType (void) const {
    return mProperty_mExtensionInitializerMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerForBuildingContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionInitializerMapForType (const GALGAS_extensionInitializerMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionInitializerMapForType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionInitializerForBuildingContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionInitializerForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_extensionInitializerMapForType & in_mExtensionInitializerMapForType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionInitializerForBuildingContext_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_extensionInitializerMapForType & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionInitializerForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionInitializerForBuildingContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_extensionInitializerMapForType & inOperand1,
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
 
} ; // End of GALGAS_extensionInitializerForBuildingContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionInitializerForBuildingContext-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionInitializerForBuildingContext_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ (const GALGAS_extensionInitializerForBuildingContext_2D_element & inValue) ;
  public: static GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionInitializerForBuildingContext_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionInitializerForBuildingContext_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForType map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForType (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inSource) ;
  public: GALGAS_extensionMethodMapForType & operator = (const GALGAS_extensionMethodMapForType & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodMapForType init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForType extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionMethodMapForType class_func_mapWithMapToOverride (const class GALGAS_extensionMethodMapForType & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_methodQualifier & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionMethodMapForType add_operation (const GALGAS_extensionMethodMapForType & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListAST constinArgument1,
                                                  class GALGAS_methodQualifier constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GALGAS_formalParameterListAST constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterListAST & outOperand1,
                                                    class GALGAS_methodQualifier & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForType * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionMethodMapForType_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionMethodMapForType ;
 
} ; // End of GALGAS_extensionMethodMapForType class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionMethodMapForType : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMethodMapForType (const GALGAS_extensionMethodMapForType & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionMethodMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMethodMapForType' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForType : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;

//--- Constructors
  public: cMapElement_extensionMethodMapForType (const GALGAS_extensionMethodMapForType_2D_element & inValue
                                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionMethodMapForType (const GALGAS_lstring & inKey,
                                                 const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                 const GALGAS_methodQualifier & in_mQualifier
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForType_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForType_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionMethodMapForType_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionMethodMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                       const GALGAS_methodQualifier & in_mQualifier) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodMapForType_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1,
                                                                               const class GALGAS_methodQualifier & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodMapForType_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_formalParameterListAST & inOperand1,
                                                                                   const class GALGAS_methodQualifier & inOperand2,
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
 
} ; // End of GALGAS_extensionMethodMapForType_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionMethodMapForType-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForType_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionMethodMapForType_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForType_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionMethodMapForType_2D_element_3F_ (const GALGAS_extensionMethodMapForType_2D_element & inValue) ;
  public: static GALGAS_extensionMethodMapForType_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionMethodMapForType_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionMethodMapForType_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodMapForType_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForType_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForBuildingContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inSource) ;
  public: GALGAS_extensionMethodMapForBuildingContext & operator = (const GALGAS_extensionMethodMapForBuildingContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodMapForBuildingContext init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionMethodMapForBuildingContext class_func_mapWithMapToOverride (const class GALGAS_extensionMethodMapForBuildingContext & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_extensionMethodMapForType & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionMethodMapForBuildingContext add_operation (const GALGAS_extensionMethodMapForBuildingContext & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionMethodMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodMapForTypeForKey (class GALGAS_extensionMethodMapForType constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionMethodMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForType getter_mExtensionMethodMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_extensionMethodMapForType & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMethodMapForBuildingContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionMethodMapForBuildingContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionMethodMapForBuildingContext ;
 
} ; // End of GALGAS_extensionMethodMapForBuildingContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionMethodMapForBuildingContext : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_extensionMethodMapForType current_mExtensionMethodMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionMethodMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMethodMapForBuildingContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionMethodMapForBuildingContext : public cMapElement {
//--- Map attributes
  public: GALGAS_extensionMethodMapForType mProperty_mExtensionMethodMapForType ;

//--- Constructors
  public: cMapElement_extensionMethodMapForBuildingContext (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionMethodMapForBuildingContext (const GALGAS_lstring & inKey,
                                                            const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodMapForBuildingContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_extensionMethodMapForType mProperty_mExtensionMethodMapForType ;
  public: inline GALGAS_extensionMethodMapForType readProperty_mExtensionMethodMapForType (void) const {
    return mProperty_mExtensionMethodMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForBuildingContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionMethodMapForType (const GALGAS_extensionMethodMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionMethodMapForType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionMethodMapForBuildingContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionMethodMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_extensionMethodMapForType & in_mExtensionMethodMapForType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionMethodMapForBuildingContext_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_extensionMethodMapForType & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionMethodMapForBuildingContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_extensionMethodMapForType & inOperand1,
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
 
} ; // End of GALGAS_extensionMethodMapForBuildingContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionMethodMapForBuildingContext-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionMethodMapForBuildingContext_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ (const GALGAS_extensionMethodMapForBuildingContext_2D_element & inValue) ;
  public: static GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionMethodMapForBuildingContext_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForBuildingContext_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForType map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForType (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inSource) ;
  public: GALGAS_extensionSetterMapForType & operator = (const GALGAS_extensionSetterMapForType & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterMapForType init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForType extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionSetterMapForType class_func_mapWithMapToOverride (const class GALGAS_extensionSetterMapForType & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionSetterMapForType add_operation (const GALGAS_extensionSetterMapForType & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListAST constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListForKey (class GALGAS_formalParameterListAST constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForType_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterListAST & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForType * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionSetterMapForType_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionSetterMapForType ;
 
} ; // End of GALGAS_extensionSetterMapForType class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionSetterMapForType : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionSetterMapForType (const GALGAS_extensionSetterMapForType & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionSetterMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionSetterMapForType' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForType : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;

//--- Constructors
  public: cMapElement_extensionSetterMapForType (const GALGAS_extensionSetterMapForType_2D_element & inValue
                                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionSetterMapForType (const GALGAS_lstring & inKey,
                                                 const GALGAS_formalParameterListAST & in_mFormalParameterList
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForType_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForType_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionSetterMapForType_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionSetterMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterMapForType_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_formalParameterListAST & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterMapForType_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_formalParameterListAST & inOperand1,
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
 
} ; // End of GALGAS_extensionSetterMapForType_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionSetterMapForType-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForType_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionSetterMapForType_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForType_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionSetterMapForType_2D_element_3F_ (const GALGAS_extensionSetterMapForType_2D_element & inValue) ;
  public: static GALGAS_extensionSetterMapForType_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionSetterMapForType_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionSetterMapForType_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterMapForType_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForType_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForBuildingContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inSource) ;
  public: GALGAS_extensionSetterMapForBuildingContext & operator = (const GALGAS_extensionSetterMapForBuildingContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterMapForBuildingContext init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionSetterMapForBuildingContext class_func_mapWithMapToOverride (const class GALGAS_extensionSetterMapForBuildingContext & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_extensionSetterMapForType & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionSetterMapForBuildingContext add_operation (const GALGAS_extensionSetterMapForBuildingContext & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionSetterMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterMapForTypeForKey (class GALGAS_extensionSetterMapForType constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionSetterMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForType getter_mExtensionSetterMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_extensionSetterMapForType & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionSetterMapForBuildingContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionSetterMapForBuildingContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionSetterMapForBuildingContext ;
 
} ; // End of GALGAS_extensionSetterMapForBuildingContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionSetterMapForBuildingContext : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_extensionSetterMapForType current_mExtensionSetterMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionSetterMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionSetterMapForBuildingContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionSetterMapForBuildingContext : public cMapElement {
//--- Map attributes
  public: GALGAS_extensionSetterMapForType mProperty_mExtensionSetterMapForType ;

//--- Constructors
  public: cMapElement_extensionSetterMapForBuildingContext (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionSetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                            const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterMapForBuildingContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_extensionSetterMapForType mProperty_mExtensionSetterMapForType ;
  public: inline GALGAS_extensionSetterMapForType readProperty_mExtensionSetterMapForType (void) const {
    return mProperty_mExtensionSetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionSetterMapForType (const GALGAS_extensionSetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionSetterMapForType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionSetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionSetterMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_extensionSetterMapForType & in_mExtensionSetterMapForType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionSetterMapForBuildingContext_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_extensionSetterMapForType & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionSetterMapForBuildingContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_extensionSetterMapForType & inOperand1,
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
 
} ; // End of GALGAS_extensionSetterMapForBuildingContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionSetterMapForBuildingContext-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionSetterMapForBuildingContext_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ (const GALGAS_extensionSetterMapForBuildingContext_2D_element & inValue) ;
  public: static GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionSetterMapForBuildingContext_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForBuildingContext_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForType map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForType ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForType : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForType (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inSource) ;
  public: GALGAS_extensionGetterMapForType & operator = (const GALGAS_extensionGetterMapForType & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterMapForType init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForType extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterMapForType class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionGetterMapForType class_func_mapWithMapToOverride (const class GALGAS_extensionGetterMapForType & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_formalInputParameterListAST & inOperand2,
                                                     const class GALGAS_methodQualifier & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionGetterMapForType add_operation (const GALGAS_extensionGetterMapForType & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_formalInputParameterListAST constinArgument2,
                                                  class GALGAS_methodQualifier constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInputFormalParameterListForKey (class GALGAS_formalInputParameterListAST constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMQualifierForKey (class GALGAS_methodQualifier constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListAST getter_mInputFormalParameterListForKey (const class GALGAS_string & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodQualifier getter_mQualifierForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType getter_overriddenMap (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_formalInputParameterListAST & outOperand2,
                                                    class GALGAS_methodQualifier & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForType * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionGetterMapForType_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionGetterMapForType ;
 
} ; // End of GALGAS_extensionGetterMapForType class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionGetterMapForType : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionGetterMapForType (const GALGAS_extensionGetterMapForType & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_formalInputParameterListAST current_mInputFormalParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_methodQualifier current_mQualifier (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionGetterMapForType_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionGetterMapForType' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForType : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: GALGAS_formalInputParameterListAST mProperty_mInputFormalParameterList ;
  public: GALGAS_methodQualifier mProperty_mQualifier ;

//--- Constructors
  public: cMapElement_extensionGetterMapForType (const GALGAS_extensionGetterMapForType_2D_element & inValue
                                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionGetterMapForType (const GALGAS_lstring & inKey,
                                                 const GALGAS_lstring & in_mResultTypeName,
                                                 const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                 const GALGAS_methodQualifier & in_mQualifier
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForType_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForType_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: inline GALGAS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GALGAS_formalInputParameterListAST mProperty_mInputFormalParameterList ;
  public: inline GALGAS_formalInputParameterListAST readProperty_mInputFormalParameterList (void) const {
    return mProperty_mInputFormalParameterList ;
  }

  public: GALGAS_methodQualifier mProperty_mQualifier ;
  public: inline GALGAS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForType_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMInputFormalParameterList (const GALGAS_formalInputParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInputFormalParameterList = inValue ;
  }

  public: inline void setter_setMQualifier (const GALGAS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionGetterMapForType_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionGetterMapForType_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_lstring & in_mResultTypeName,
                                                       const GALGAS_formalInputParameterListAST & in_mInputFormalParameterList,
                                                       const GALGAS_methodQualifier & in_mQualifier) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterMapForType_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                   const class GALGAS_methodQualifier & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForType_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterMapForType_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_formalInputParameterListAST & inOperand2,
                                                                                   const class GALGAS_methodQualifier & inOperand3,
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
 
} ; // End of GALGAS_extensionGetterMapForType_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionGetterMapForType-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForType_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionGetterMapForType_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForType_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionGetterMapForType_2D_element_3F_ (const GALGAS_extensionGetterMapForType_2D_element & inValue) ;
  public: static GALGAS_extensionGetterMapForType_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionGetterMapForType_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionGetterMapForType_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterMapForType_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForType_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForBuildingContext map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForBuildingContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForBuildingContext (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inSource) ;
  public: GALGAS_extensionGetterMapForBuildingContext & operator = (const GALGAS_extensionGetterMapForBuildingContext & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterMapForBuildingContext init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForBuildingContext extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterMapForBuildingContext class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionGetterMapForBuildingContext class_func_mapWithMapToOverride (const class GALGAS_extensionGetterMapForBuildingContext & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_extensionGetterMapForType & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extensionGetterMapForBuildingContext add_operation (const GALGAS_extensionGetterMapForBuildingContext & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionGetterMapForType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterMapForTypeForKey (class GALGAS_extensionGetterMapForType constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_extensionGetterMapForType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForType getter_mExtensionGetterMapForTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForBuildingContext getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_extensionGetterMapForType & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionGetterMapForBuildingContext * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extensionGetterMapForBuildingContext_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extensionGetterMapForBuildingContext ;
 
} ; // End of GALGAS_extensionGetterMapForBuildingContext class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extensionGetterMapForBuildingContext : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_extensionGetterMapForType current_mExtensionGetterMapForType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionGetterMapForBuildingContext_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionGetterMapForBuildingContext' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_extensionGetterMapForBuildingContext : public cMapElement {
//--- Map attributes
  public: GALGAS_extensionGetterMapForType mProperty_mExtensionGetterMapForType ;

//--- Constructors
  public: cMapElement_extensionGetterMapForBuildingContext (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inValue
                                                            COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_extensionGetterMapForBuildingContext (const GALGAS_lstring & inKey,
                                                            const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterMapForBuildingContext_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForBuildingContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_extensionGetterMapForType mProperty_mExtensionGetterMapForType ;
  public: inline GALGAS_extensionGetterMapForType readProperty_mExtensionGetterMapForType (void) const {
    return mProperty_mExtensionGetterMapForType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtensionGetterMapForType (const GALGAS_extensionGetterMapForType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionGetterMapForType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extensionGetterMapForBuildingContext_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionGetterMapForBuildingContext_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_extensionGetterMapForType & in_mExtensionGetterMapForType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extensionGetterMapForBuildingContext_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_extensionGetterMapForType & inOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterMapForBuildingContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extensionGetterMapForBuildingContext_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_extensionGetterMapForType & inOperand1,
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
 
} ; // End of GALGAS_extensionGetterMapForBuildingContext_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: extensionGetterMapForBuildingContext-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_extensionGetterMapForBuildingContext_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ (const GALGAS_extensionGetterMapForBuildingContext_2D_element & inValue) ;
  public: static GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_extensionGetterMapForBuildingContext_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForBuildingContext_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_keyRepresentation (const class cPtr_semanticDeclarationAST * inObject,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (class cPtr_semanticDeclarationAST * inObject,
                                                            const class GALGAS_extensionInitializerForBuildingContext constin_inExtensionInitializerMapForBuildingContext,
                                                            const class GALGAS_extensionMethodMapForBuildingContext constin_inExtensionMethodMapForBuildingContext,
                                                            const class GALGAS_extensionGetterMapForBuildingContext constin_inExtensionGetterMapForBuildingContext,
                                                            const class GALGAS_extensionSetterMapForBuildingContext constin_inExtensionSetterMapForBuildingContext,
                                                            class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                            class GALGAS_semanticContext & io_ioSemanticContext,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperExtensionMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperExtensionMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperExtensionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_wrapperExtensionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inSource) ;
  public: GALGAS_wrapperExtensionMap & operator = (const GALGAS_wrapperExtensionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperExtensionMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperExtensionMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperExtensionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_wrapperExtensionMap class_func_mapWithMapToOverride (const class GALGAS_wrapperExtensionMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_wrapperExtensionMap add_operation (const GALGAS_wrapperExtensionMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperExtensionMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperExtensionMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_wrapperExtensionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_wrapperExtensionMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_wrapperExtensionMap ;
 
} ; // End of GALGAS_wrapperExtensionMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_wrapperExtensionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_wrapperExtensionMap (const GALGAS_wrapperExtensionMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_wrapperExtensionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@wrapperExtensionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_wrapperExtensionMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_wrapperExtensionMap (const GALGAS_wrapperExtensionMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_wrapperExtensionMap (const GALGAS_lstring & inKey
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @wrapperExtensionMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperExtensionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperExtensionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_wrapperExtensionMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_wrapperExtensionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_wrapperExtensionMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_wrapperExtensionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_wrapperExtensionMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_wrapperExtensionMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: wrapperExtensionMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_wrapperExtensionMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_wrapperExtensionMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_wrapperExtensionMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_wrapperExtensionMap_2D_element_3F_ (const GALGAS_wrapperExtensionMap_2D_element & inValue) ;
  public: static GALGAS_wrapperExtensionMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_wrapperExtensionMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_wrapperExtensionMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_wrapperExtensionMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_wrapperExtensionMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTypePrecedenceGraph graph
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypePrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticTypePrecedenceGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_semanticDeclarationAST inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_semanticDeclarationListAST & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_semanticDeclarationListAST & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_semanticDeclarationListAST & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                              const class GALGAS_stringset & constinOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticTypePrecedenceGraph class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (class cPtr_semanticDeclarationAST * inObject,
                                                  class GALGAS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  class GALGAS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  class GALGAS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  class GALGAS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  class GALGAS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  class GALGAS_semanticDeclarationListAST & io_ioExtensionOverrideDefinitionList,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addAssociatedElement (class cPtr_semanticDeclarationAST * inObject,
                                               class GALGAS_galgasDeclarationAST & io_ioDeclarations,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticExpressionForGeneration_2D_weak (const class GALGAS_semanticExpressionForGeneration & inSource) ;

  public: GALGAS_semanticExpressionForGeneration_2D_weak & operator = (const class GALGAS_semanticExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticExpressionForGeneration bang_semanticExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_semanticExpressionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticExpressionForGeneration & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticExpressionListForGeneration init (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticExpressionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_semanticExpressionListForGeneration class_func_listWithValue (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticExpressionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration add_operation (const GALGAS_semanticExpressionListForGeneration & inOperand,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_semanticExpressionListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticExpressionListForGeneration ;
 
} ; // End of GALGAS_semanticExpressionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticExpressionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticExpressionListForGeneration (const GALGAS_semanticExpressionListForGeneration & inEnumeratedObject,
                                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_semanticExpressionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticExpressionListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticExpressionListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & in_mExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticExpressionListForGeneration_2D_element init_21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticExpressionListForGeneration_2D_element class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
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
 
} ; // End of GALGAS_semanticExpressionListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_castInExpressionForGeneration (const class cPtr_castInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mTypeName (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mCastType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_castInExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_castInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_castInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @castInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_castInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void castInExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mTypeName ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mCastType ;


//--- Default constructor
  public: cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GALGAS_string & in_mTypeName,
                                              const GALGAS_unifiedTypeMapEntry & in_mCastType
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_castInExpressionForGeneration_2D_weak (const class GALGAS_castInExpressionForGeneration & inSource) ;

  public: GALGAS_castInExpressionForGeneration_2D_weak & operator = (const class GALGAS_castInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_castInExpressionForGeneration bang_castInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_castInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_castInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_castInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_actualParameterForGeneration (const class cPtr_actualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterForGeneration init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_actualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualParameterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @actualParameterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_actualParameterForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void actualParameterForGeneration_init_21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringlist & arg_ioJokerParametersToReleaseList,
           class GALGAS_stringlist & arg_ioOutputVariableList,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;


//--- Default constructor
  public: cPtr_actualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_actualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType
                                             COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_actualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_actualParameterForGeneration_2D_weak (const class GALGAS_actualParameterForGeneration & inSource) ;

  public: GALGAS_actualParameterForGeneration_2D_weak & operator = (const class GALGAS_actualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_actualParameterForGeneration bang_actualParameterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_actualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualParameterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generateActualParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateActualParameter (class cPtr_actualParameterForGeneration * inObject,
                                                  class GALGAS_stringset & io_ioInclusionSet,
                                                  class GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  class GALGAS_string & io_ioImplementation,
                                                  class GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  class GALGAS_stringlist & io_ioOutputVariableList,
                                                  class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  class GALGAS_string & out_outCppName,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterForGeneration generatePoisonedVariables'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generatePoisonedVariables (class cPtr_actualParameterForGeneration * inObject,
                                                    class GALGAS_string & io_ioImplementation,
                                                    class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputActualParameterForGeneration (const class cPtr_outputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mOutputActualParameterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputActualParameterForGeneration init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputActualParameterForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputActualParameterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputActualParameterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputActualParameterForGeneration_init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringlist & arg_ioJokerParametersToReleaseList,
           class GALGAS_stringlist & arg_ioOutputVariableList,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mOutputActualParameterExpression ;


//--- Default constructor
  public: cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                   const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputActualParameterForGeneration_2D_weak (const class GALGAS_outputActualParameterForGeneration & inSource) ;

  public: GALGAS_outputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_outputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputActualParameterForGeneration bang_outputActualParameterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputActualParameterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputActualParameterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_outputInputActualParameterForGeneration (const class cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mOutputInputVariableCppName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_unifiedTypeMapEntryList readProperty_mTypeList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_outputInputActualParameterForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2,
                                                                                      const class GALGAS_unifiedTypeMapEntryList & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputActualParameterForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2,
                                                                                      const class GALGAS_unifiedTypeMapEntryList & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputInputActualParameterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void outputInputActualParameterForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_lstringlist & inOperand2,
                                                                             const class GALGAS_unifiedTypeMapEntryList & inOperand3,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringlist & arg_ioJokerParametersToReleaseList,
           class GALGAS_stringlist & arg_ioOutputVariableList,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mOutputInputVariableCppName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_unifiedTypeMapEntryList mProperty_mTypeList ;


//--- Default constructor
  public: cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                        const GALGAS_string & in_mOutputInputVariableCppName,
                                                        const GALGAS_lstringlist & in_mStructAttributeList,
                                                        const GALGAS_unifiedTypeMapEntryList & in_mTypeList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputActualParameterForGeneration_2D_weak (const class GALGAS_outputInputActualParameterForGeneration & inSource) ;

  public: GALGAS_outputInputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_outputInputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputActualParameterForGeneration bang_outputInputActualParameterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_outputInputActualParameterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualParameterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_inputActualParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputActualParameterForGeneration (const class cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mInputActualCppName (void) const ;

  public: class GALGAS__32_stringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputActualParameterForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS__32_stringlist & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualParameterForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS__32_stringlist & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualParameterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputActualParameterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputActualParameterForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GALGAS_string & inOperand1,
                                                                   const class GALGAS__32_stringlist & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringlist & arg_ioJokerParametersToReleaseList,
           class GALGAS_stringlist & arg_ioOutputVariableList,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mInputActualCppName ;
  public: GALGAS__32_stringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                  const GALGAS_string & in_mInputActualCppName,
                                                  const GALGAS__32_stringlist & in_mPoisonedVarNameList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualParameterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualParameterForGeneration_2D_weak (const class GALGAS_inputActualParameterForGeneration & inSource) ;

  public: GALGAS_inputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_inputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualParameterForGeneration bang_inputActualParameterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputActualParameterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputActualParameterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerParameterForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputJokerParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_inputJokerParameterForGeneration (const class cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mInputActualCppName (void) const ;

  public: class GALGAS__32_stringlist readProperty_mPoisonedVarNameList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_inputJokerParameterForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS__32_stringlist & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputJokerParameterForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS__32_stringlist & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inputJokerParameterForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inputJokerParameterForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GALGAS_string & inOperand1,
                                                                  const class GALGAS__32_stringlist & inOperand2,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateActualParameter
  public: virtual void method_generateActualParameter (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringlist & arg_ioJokerParametersToReleaseList,
           class GALGAS_stringlist & arg_ioOutputVariableList,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppName,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generatePoisonedVariables
  public: virtual void method_generatePoisonedVariables (class GALGAS_string & arg_ioImplementation,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mInputActualCppName ;
  public: GALGAS__32_stringlist mProperty_mPoisonedVarNameList ;


//--- Default constructor
  public: cPtr_inputJokerParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GALGAS_string & in_mInputActualCppName,
                                                 const GALGAS__32_stringlist & in_mPoisonedVarNameList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @inputJokerParameterForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_inputJokerParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputJokerParameterForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputJokerParameterForGeneration_2D_weak (const class GALGAS_inputJokerParameterForGeneration & inSource) ;

  public: GALGAS_inputJokerParameterForGeneration_2D_weak & operator = (const class GALGAS_inputJokerParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputJokerParameterForGeneration bang_inputJokerParameterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_inputJokerParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_inputJokerParameterForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualParameterListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualParameterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_actualParameterForGeneration mProperty_mActualParameter ;
  public: inline GALGAS_actualParameterForGeneration readProperty_mActualParameter (void) const {
    return mProperty_mActualParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_actualParameterListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualParameter (const GALGAS_actualParameterForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualParameter = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_actualParameterListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_actualParameterListForGeneration_2D_element (const GALGAS_actualParameterForGeneration & in_mActualParameter) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualParameterListForGeneration_2D_element init_21_ (const class GALGAS_actualParameterForGeneration & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualParameterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualParameterListForGeneration_2D_element class_func_new (const class GALGAS_actualParameterForGeneration & inOperand0,
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
 
} ; // End of GALGAS_actualParameterListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticInstructionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticInstructionForGeneration_2D_weak (const class GALGAS_semanticInstructionForGeneration & inSource) ;

  public: GALGAS_semanticInstructionForGeneration_2D_weak & operator = (const class GALGAS_semanticInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticInstructionForGeneration bang_semanticInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticInstructionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInstruction (class cPtr_semanticInstructionForGeneration * inObject,
                                              class GALGAS_stringset & io_ioInclusionSet,
                                              class GALGAS_uint & io_ioTemporaryVariableIndex,
                                              class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                              const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                              class GALGAS_string & io_ioGeneratedCode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticBlockInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticBlockInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_semanticBlockInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticBlockInstructionForGeneration (const class cPtr_semanticBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticBlockInstructionForGeneration init_21_ (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticBlockInstructionForGeneration class_func_new (const class GALGAS_semanticInstructionListForGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticBlockInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticBlockInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticBlockInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticBlockInstructionForGeneration_init_21_ (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                               Compiler * inCompiler) ;


//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GALGAS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GALGAS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_semanticBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticBlockInstructionForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticBlockInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticBlockInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_semanticBlockInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticBlockInstructionForGeneration_2D_weak (const class GALGAS_semanticBlockInstructionForGeneration & inSource) ;

  public: GALGAS_semanticBlockInstructionForGeneration_2D_weak & operator = (const class GALGAS_semanticBlockInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticBlockInstructionForGeneration bang_semanticBlockInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticBlockInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticBlockInstructionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticBlockInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticBlockInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSemanticInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listOfSemanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_listOfSemanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_listOfSemanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listOfSemanticInstructionListForGeneration init (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSemanticInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listOfSemanticInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_listOfSemanticInstructionListForGeneration class_func_listWithValue (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                   const class GALGAS_location & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_listOfSemanticInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                     const class GALGAS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_listOfSemanticInstructionListForGeneration add_operation (const GALGAS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                               class GALGAS_location constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                      class GALGAS_location constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                class GALGAS_location & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                                      class GALGAS_location & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionListAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticInstructionListForGeneration & outArgument0,
                                             class GALGAS_location & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_listOfSemanticInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_listOfSemanticInstructionListForGeneration ;
 
} ; // End of GALGAS_listOfSemanticInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_listOfSemanticInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_listOfSemanticInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listOfSemanticInstructionListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_listOfSemanticInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInstructionList ;
  public: inline GALGAS_location readProperty_mEndOfInstructionList (void) const {
    return mProperty_mEndOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInstructionList (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                        const GALGAS_location & in_mEndOfInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_listOfSemanticInstructionListForGeneration_2D_element init_21__21_ (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                            const class GALGAS_location & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_listOfSemanticInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_listOfSemanticInstructionListForGeneration_2D_element class_func_new (const class GALGAS_semanticInstructionListForGeneration & inOperand0,
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
 
} ; // End of GALGAS_listOfSemanticInstructionListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticDeclarationForGeneration (const class cPtr_semanticDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationForGeneration init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter appendPrimitiveTypeDeclaration
  public: virtual class GALGAS_string getter_appendPrimitiveTypeDeclaration (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter appendTypeGenericImplementation
  public: virtual class GALGAS_string getter_appendTypeGenericImplementation (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter getImplementationCppFileName
  public: virtual class GALGAS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GALGAS_string arg_inOutputDirectory,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendPrimitiveTypePreDeclaration
  public: virtual void method_appendPrimitiveTypePreDeclaration (class GALGAS_string & arg_ioHeader,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificFiles
  public: virtual void method_appendSpecificFiles (const class GALGAS_string arg_inProductDirectory,
           class GALGAS_stringset & arg_ioAllProductFileSet,
           class GALGAS_stringlist & arg_ioCocoaProductFileList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticDeclarationForGeneration_2D_weak (const class GALGAS_semanticDeclarationForGeneration & inSource) ;

  public: GALGAS_semanticDeclarationForGeneration_2D_weak & operator = (const class GALGAS_semanticDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticDeclarationForGeneration bang_semanticDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (class cPtr_semanticDeclarationForGeneration * inObject,
                                                            class GALGAS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_getImplementationCppFileName (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_hasCppHeaderFile (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isPredefined (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_headerKind callExtensionGetter_headerKind (const class cPtr_semanticDeclarationForGeneration * inObject,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_infoMessage,
                                                 const class GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationListForGeneration init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_semanticDeclarationListForGeneration class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_semanticDeclarationForGeneration & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_semanticDeclarationListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_semanticDeclarationForGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_semanticDeclarationListForGeneration add_operation (const GALGAS_semanticDeclarationListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_semanticDeclarationForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_semanticDeclarationForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInfoMessageAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GALGAS_semanticDeclarationForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_semanticDeclarationForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_infoMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationForGeneration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticDeclarationListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_semanticDeclarationListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticDeclarationListForGeneration ;
 
} ; // End of GALGAS_semanticDeclarationListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticDeclarationListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticDeclarationListForGeneration (const GALGAS_semanticDeclarationListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_infoMessage (LOCATION_ARGS) const ;
  public: class GALGAS_semanticDeclarationForGeneration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_semanticDeclarationListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_infoMessage ;
  public: inline GALGAS_string readProperty_infoMessage (void) const {
    return mProperty_infoMessage ;
  }

  public: GALGAS_semanticDeclarationForGeneration mProperty_mDeclaration ;
  public: inline GALGAS_semanticDeclarationForGeneration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInfoMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_infoMessage = inValue ;
  }

  public: inline void setter_setMDeclaration (const GALGAS_semanticDeclarationForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticDeclarationListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticDeclarationListForGeneration_2D_element (const GALGAS_string & in_infoMessage,
                                                                  const GALGAS_semanticDeclarationForGeneration & in_mDeclaration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationListForGeneration_2D_element init_21_infoMessage_21_ (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_semanticDeclarationForGeneration & inOperand1,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationListForGeneration_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS_semanticDeclarationForGeneration & inOperand1,
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
 
} ; // End of GALGAS_semanticDeclarationListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @signatureForGrammarAnalysis list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_signatureForGrammarAnalysis : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_signatureForGrammarAnalysis (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                 const class GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_signatureForGrammarAnalysis init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_signatureForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_signatureForGrammarAnalysis class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_signatureForGrammarAnalysis class_func_listWithValue (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_signatureForGrammarAnalysis inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_signatureForGrammarAnalysis add_operation (const GALGAS_signatureForGrammarAnalysis & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                                                               class GALGAS_uint constinArgument1,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (class GALGAS_lstring constinArgument0,
                                                                                    class GALGAS_uint constinArgument1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_formalArgumentPassingModeAST & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_signatureForGrammarAnalysis_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_signatureForGrammarAnalysis ;
 
} ; // End of GALGAS_signatureForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_signatureForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_signatureForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @signatureForGrammarAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_signatureForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingModeForGrammarAnalysis (void) const {
    return mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }

  public: GALGAS_lstring mProperty_mGalgasTypeNameForGrammarAnalysis ;
  public: inline GALGAS_lstring readProperty_mGalgasTypeNameForGrammarAnalysis (void) const {
    return mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_signatureForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingModeForGrammarAnalysis (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inValue ;
  }

  public: inline void setter_setMGalgasTypeNameForGrammarAnalysis (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGalgasTypeNameForGrammarAnalysis = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_signatureForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_signatureForGrammarAnalysis_2D_element (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                         const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_signatureForGrammarAnalysis_2D_element init_21__21_ (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_signatureForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_signatureForGrammarAnalysis_2D_element class_func_new (const class GALGAS_formalArgumentPassingModeAST & inOperand0,
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
 
} ; // End of GALGAS_signatureForGrammarAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & operator = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis init (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand0
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_signatureForGrammarAnalysis & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis add_operation (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_signatureForGrammarAnalysis constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParametersListForKey (class GALGAS_signatureForGrammarAnalysis constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_signatureForGrammarAnalysis & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_signatureForGrammarAnalysis getter_mFormalParametersListForKey (const class GALGAS_string & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_signatureForGrammarAnalysis & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                        const GALGAS_string & inKey
                                                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_signatureForGrammarAnalysis current_mFormalParametersList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalSymbolLabelMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;

//--- Constructors
  public: cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inValue
                                                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                   const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalSymbolLabelMapForGrammarAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_signatureForGrammarAnalysis mProperty_mFormalParametersList ;
  public: inline GALGAS_signatureForGrammarAnalysis readProperty_mFormalParametersList (void) const {
    return mProperty_mFormalParametersList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalParametersList (const GALGAS_signatureForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParametersList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_signatureForGrammarAnalysis & inOperand1,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_signatureForGrammarAnalysis & inOperand1,
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
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: nonterminalSymbolLabelMapForGrammarAnalysis-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element & inValue) ;
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis & operator = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis class_func_mapWithMapToOverride (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolMapForGrammarAnalysis add_operation (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalIndexForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalSymbolParametersMapForKey (class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalIndexForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis getter_mNonterminalSymbolParametersMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonTerminalSymbolMapForGrammarAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalSymbolMapForGrammarAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalIndex (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonTerminalSymbolMapForGrammarAnalysis' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonTerminalSymbolMapForGrammarAnalysis : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;

//--- Constructors
  public: cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                              const GALGAS_uint & in_mNonTerminalIndex,
                                                              const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalSymbolMapForGrammarAnalysis_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mNonTerminalIndex ;
  public: inline GALGAS_uint readProperty_mNonTerminalIndex (void) const {
    return mProperty_mNonTerminalIndex ;
  }

  public: GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis mProperty_mNonterminalSymbolParametersMap ;
  public: inline GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis readProperty_mNonterminalSymbolParametersMap (void) const {
    return mProperty_mNonterminalSymbolParametersMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMNonTerminalIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalIndex = inValue ;
  }

  public: inline void setter_setMNonterminalSymbolParametersMap (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalSymbolParametersMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_uint & in_mNonTerminalIndex,
                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_uint & inOperand1,
                                                                                            const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_uint & inOperand1,
                                                                                                const class GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2,
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
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: nonTerminalSymbolMapForGrammarAnalysis-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element & inValue) ;
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalToAddList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalToAddList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_nonTerminalToAddList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mSyntaxComponentName,
                                                 const class GALGAS_uint & in_mNonTerminalToAddCount
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalToAddList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalToAddList extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalToAddList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_nonTerminalToAddList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_nonTerminalToAddList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList add_operation (const GALGAS_nonTerminalToAddList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddCountAtIndex (class GALGAS_uint constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentNameAtIndex (class GALGAS_string constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonTerminalToAddCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonTerminalToAddList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonTerminalToAddList ;
 
} ; // End of GALGAS_nonTerminalToAddList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonTerminalToAddList : public cGenericAbstractEnumerator {
  public: cEnumerator_nonTerminalToAddList (const GALGAS_nonTerminalToAddList & inEnumeratedObject,
                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mSyntaxComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mNonTerminalToAddCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonTerminalToAddList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonTerminalToAddList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonTerminalToAddList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: inline GALGAS_string readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GALGAS_uint mProperty_mNonTerminalToAddCount ;
  public: inline GALGAS_uint readProperty_mNonTerminalToAddCount (void) const {
    return mProperty_mNonTerminalToAddCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMNonTerminalToAddCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonTerminalToAddCount = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonTerminalToAddList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & in_mSyntaxComponentName,
                                                  const GALGAS_uint & in_mNonTerminalToAddCount) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonTerminalToAddList_2D_element init_21__21_ (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonTerminalToAddList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonTerminalToAddList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1,
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
 
} ; // End of GALGAS_nonTerminalToAddList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckAssignementList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckAssignementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckAssignementList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTypeName,
                                                 const class GALGAS_string & in_mTargetVarCppName,
                                                 const class GALGAS_string & in_mSourceLexicalAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_terminalCheckAssignementList init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckAssignementList extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalCheckAssignementList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalCheckAssignementList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalCheckAssignementList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList add_operation (const GALGAS_terminalCheckAssignementList & inOperand,
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

  public: VIRTUAL_IN_DEBUG void setter_setMSourceLexicalAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetVarCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_string constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_terminalCheckAssignementList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_terminalCheckAssignementList ;
 
} ; // End of GALGAS_terminalCheckAssignementList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalCheckAssignementList : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTargetVarCppName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSourceLexicalAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalCheckAssignementList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckAssignementList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckAssignementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTypeName ;
  public: inline GALGAS_string readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_string mProperty_mTargetVarCppName ;
  public: inline GALGAS_string readProperty_mTargetVarCppName (void) const {
    return mProperty_mTargetVarCppName ;
  }

  public: GALGAS_string mProperty_mSourceLexicalAttributeName ;
  public: inline GALGAS_string readProperty_mSourceLexicalAttributeName (void) const {
    return mProperty_mSourceLexicalAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMTargetVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetVarCppName = inValue ;
  }

  public: inline void setter_setMSourceLexicalAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceLexicalAttributeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_terminalCheckAssignementList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & in_mTypeName,
                                                          const GALGAS_string & in_mTargetVarCppName,
                                                          const GALGAS_string & in_mSourceLexicalAttributeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_terminalCheckAssignementList_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckAssignementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalCheckAssignementList_2D_element class_func_new (const class GALGAS_string & inOperand0,
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
 
} ; // End of GALGAS_terminalCheckAssignementList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxInstructionForGeneration (const class cPtr_syntaxInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxInstructionForGeneration init_21_ (const class GALGAS_location & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxInstructionForGeneration_init_21_ (const class GALGAS_location & inOperand0,
                                                        Compiler * inCompiler) ;


//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionForGeneration (const GALGAS_location & in_mInstructionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxInstructionForGeneration_2D_weak (const class GALGAS_syntaxInstructionForGeneration & inSource) ;

  public: GALGAS_syntaxInstructionForGeneration_2D_weak & operator = (const class GALGAS_syntaxInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxInstructionForGeneration bang_syntaxInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxInstructionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mFilewrapperTemplateName,
                                                 const class GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                 const class GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateListForGeneration init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperTemplateListForGeneration class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                             const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_filewrapperTemplateListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration add_operation (const GALGAS_filewrapperTemplateListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_formalInputParameterListForGeneration constinArgument1,
                                               class GALGAS_templateInstructionListForGeneration constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_formalInputParameterListForGeneration constinArgument1,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateFormalInputParametersAtIndex (class GALGAS_formalInputParameterListForGeneration constinArgument0,
                                                                                            class GALGAS_uint constinArgument1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateNameAtIndex (class GALGAS_string constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionListForGenerationAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                                        class GALGAS_uint constinArgument1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                              class GALGAS_templateInstructionListForGeneration & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_formalInputParameterListForGeneration & outArgument1,
                                             class GALGAS_templateInstructionListForGeneration & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mFilewrapperTemplateFormalInputParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilewrapperTemplateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mTemplateInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_filewrapperTemplateListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperTemplateListForGeneration ;
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperTemplateListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mFilewrapperTemplateName (LOCATION_ARGS) const ;
  public: class GALGAS_formalInputParameterListForGeneration current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperTemplateListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mFilewrapperTemplateName ;
  public: inline GALGAS_string readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GALGAS_formalInputParameterListForGeneration mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GALGAS_formalInputParameterListForGeneration readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

  public: GALGAS_templateInstructionListForGeneration mProperty_mTemplateInstructionListForGeneration ;
  public: inline GALGAS_templateInstructionListForGeneration readProperty_mTemplateInstructionListForGeneration (void) const {
    return mProperty_mTemplateInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GALGAS_formalInputParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

  public: inline void setter_setMTemplateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateInstructionListForGeneration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                  const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                  const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateListForGeneration_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                          const class GALGAS_templateInstructionListForGeneration & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateListForGeneration_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                              const class GALGAS_templateInstructionListForGeneration & inOperand2,
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
 
} ; // End of GALGAS_filewrapperTemplateListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                const class GALGAS_string constin_inOutputDirectory,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (class cPtr_semanticDeclarationForGeneration * inObject,
                                                       const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       class GALGAS_stringset & io_ioInclusionSet,
                                                       class GALGAS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (class cPtr_semanticDeclarationForGeneration * inObject,
                                              const class GALGAS_string constin_inProductDirectory,
                                              class GALGAS_stringset & io_ioAllProductFileSet,
                                              class GALGAS_stringlist & io_ioCocoaProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (class cPtr_semanticInstructionAST * inObject,
                                                     const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     class GALGAS_localVarManager & io_ioVariableMap,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_bool & in_mNoWarningIfUnused,
                                                 const class GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localConstantList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localConstantList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localConstantList class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_string & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localConstantList add_operation (const GALGAS_localConstantList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNoWarningIfUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNoWarningIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_localConstantList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_localConstantList ;
 
} ; // End of GALGAS_localConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_bool mProperty_mNoWarningIfUnused ;
  public: inline GALGAS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                               const GALGAS_lstring & in_mName,
                                               const GALGAS_bool & in_mNoWarningIfUnused,
                                               const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localConstantList_2D_element init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localConstantList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
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
 
} ; // End of GALGAS_localConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2D_element ;

