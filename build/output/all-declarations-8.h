#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @wrapperDirectoryMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_wrapperFileMap mProperty_mRegularFileMap ;
  public: inline GGS_wrapperFileMap readProperty_mRegularFileMap (void) const {
    return mProperty_mRegularFileMap ;
  }

  public: GGS_wrapperDirectoryMap mProperty_mDirectoryMap ;
  public: inline GGS_wrapperDirectoryMap readProperty_mDirectoryMap (void) const {
    return mProperty_mDirectoryMap ;
  }

  public: GGS_uint mProperty_mWrapperDirectoryIndex ;
  public: inline GGS_uint readProperty_mWrapperDirectoryIndex (void) const {
    return mProperty_mWrapperDirectoryIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegularFileMap (const GGS_wrapperFileMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegularFileMap = inValue ;
  }

  public: inline void setter_setMDirectoryMap (const GGS_wrapperDirectoryMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDirectoryMap = inValue ;
  }

  public: inline void setter_setMWrapperDirectoryIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWrapperDirectoryIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_wrapperDirectoryMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_wrapperFileMap & in_mRegularFileMap,
                                              const GGS_wrapperDirectoryMap & in_mDirectoryMap,
                                              const GGS_uint & in_mWrapperDirectoryIndex) ;

//--------------------------------- Copy constructor
  public: GGS_wrapperDirectoryMap_2E_element (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_wrapperDirectoryMap_2E_element & operator = (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_wrapperDirectoryMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_wrapperFileMap & inOperand1,
                                                                          const class GGS_wrapperDirectoryMap & inOperand2,
                                                                          const class GGS_uint & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: wrapperDirectoryMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_wrapperDirectoryMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_wrapperDirectoryMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_wrapperDirectoryMap_2E_element_3F_ (const GGS_wrapperDirectoryMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_wrapperDirectoryMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_wrapperDirectoryMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_wrapperDirectoryMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [filewrapperTemplateForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const class GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ & operator = (const DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_filewrapperTemplateForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_filewrapperTemplateForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const class GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ & operator = (const UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_filewrapperTemplateForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_filewrapperTemplateForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_filewrapperTemplateForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_filewrapperTemplateForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_filewrapperTemplateForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_filewrapperTemplateForGeneration_5D_ (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inSource) ;
  public: GGS__5B_filewrapperTemplateForGeneration_5D_ & operator = (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_filewrapperTemplateForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_filewrapperTemplateForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_filewrapperTemplateForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_filewrapperTemplateForGeneration_5D_ add_operation (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_filewrapperTemplateForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_filewrapperTemplateForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_filewrapperTemplateForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_filewrapperTemplateForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_filewrapperTemplateForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_filewrapperTemplateForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_filewrapperTemplateForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_filewrapperTemplateForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_filewrapperTemplateForGeneration readSubcript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ ;
  friend class DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_filewrapperTemplateForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateInstructionForGeneration] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionForGeneration_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionForGeneration_5D_ (const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionForGeneration_5D_ (const DownEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionForGeneration_5D_ & operator = (const DownEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionForGeneration current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionForGeneration_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionForGeneration_5D_ (const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionForGeneration_5D_ (const UpEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionForGeneration_5D_ & operator = (const UpEnumerator__5B_templateInstructionForGeneration_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionForGeneration current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionForGeneration current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionForGeneration_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionForGeneration> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionForGeneration_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionForGeneration_5D_ (const GGS__5B_templateInstructionForGeneration_5D_ & inSource) ;
  public: GGS__5B_templateInstructionForGeneration_5D_ & operator = (const GGS__5B_templateInstructionForGeneration_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_templateInstructionForGeneration_5D_ init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionForGeneration_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionForGeneration & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionForGeneration_5D_ add_operation (const GGS__5B_templateInstructionForGeneration_5D_ & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionForGeneration constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionForGeneration constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionForGeneration & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionForGeneration & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionForGeneration & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateInstructionForGeneration constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionForGeneration getter_first (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionForGeneration getter_last (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionForGeneration_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                             const class GGS_uint & constinOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionForGeneration readSubcript__3F_ (const class GGS_uint & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionForGeneration_5D_ ;
  friend class DownEnumerator__5B_templateInstructionForGeneration_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionForGeneration_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateForGeneration struct
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateForGeneration final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mFilewrapperTemplateName ;
  public: inline GGS_string readProperty_mFilewrapperTemplateName (void) const {
    return mProperty_mFilewrapperTemplateName ;
  }

  public: GGS__5B_formalInputParameterForGeneration_5D_ mProperty_mFilewrapperTemplateFormalInputParameters ;
  public: inline GGS__5B_formalInputParameterForGeneration_5D_ readProperty_mFilewrapperTemplateFormalInputParameters (void) const {
    return mProperty_mFilewrapperTemplateFormalInputParameters ;
  }

  public: GGS__5B_templateInstructionForGeneration_5D_ mProperty_mTemplateInstructionListForGeneration ;
  public: inline GGS__5B_templateInstructionForGeneration_5D_ readProperty_mTemplateInstructionListForGeneration (void) const {
    return mProperty_mTemplateInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateForGeneration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFilewrapperTemplateName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateName = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplateFormalInputParameters (const GGS__5B_formalInputParameterForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplateFormalInputParameters = inValue ;
  }

  public: inline void setter_setMTemplateInstructionListForGeneration (const GGS__5B_templateInstructionForGeneration_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateInstructionListForGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateForGeneration (const GGS_string & in_mFilewrapperTemplateName,
                                                const GGS__5B_formalInputParameterForGeneration_5D_ & in_mFilewrapperTemplateFormalInputParameters,
                                                const GGS__5B_templateInstructionForGeneration_5D_ & in_mTemplateInstructionListForGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperTemplateForGeneration (const GGS_filewrapperTemplateForGeneration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperTemplateForGeneration & operator = (const GGS_filewrapperTemplateForGeneration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateForGeneration init_21__21__21_ (const class GGS_string & inOperand0,
                                                                        const class GGS__5B_formalInputParameterForGeneration_5D_ & inOperand1,
                                                                        const class GGS__5B_templateInstructionForGeneration_5D_ & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [templateInstructionAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_templateInstructionAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_templateInstructionAST_5D_ (const class GGS__5B_templateInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_templateInstructionAST_5D_ (const DownEnumerator__5B_templateInstructionAST_5D_ &) = delete ;
  private: DownEnumerator__5B_templateInstructionAST_5D_ & operator = (const DownEnumerator__5B_templateInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_templateInstructionAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_templateInstructionAST_5D_ (const class GGS__5B_templateInstructionAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_templateInstructionAST_5D_ (const UpEnumerator__5B_templateInstructionAST_5D_ &) = delete ;
  private: UpEnumerator__5B_templateInstructionAST_5D_ & operator = (const UpEnumerator__5B_templateInstructionAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_templateInstructionAST current (LOCATION_ARGS) const ;
  public: class GGS_templateInstructionAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_templateInstructionAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_templateInstructionAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_templateInstructionAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_templateInstructionAST_5D_ (const GGS__5B_templateInstructionAST_5D_ & inSource) ;
  public: GGS__5B_templateInstructionAST_5D_ & operator = (const GGS__5B_templateInstructionAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_templateInstructionAST_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_templateInstructionAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_templateInstructionAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_templateInstructionAST_5D_ add_operation (const GGS__5B_templateInstructionAST_5D_ & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_templateInstructionAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_templateInstructionAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_templateInstructionAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_templateInstructionAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_templateInstructionAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_templateInstructionAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_templateInstructionAST getter_first (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_templateInstructionAST getter_last (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_templateInstructionAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                   const class GGS_uint & constinOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_templateInstructionAST readSubcript__3F_ (const class GGS_uint & in0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_templateInstructionAST_5D_ ;
  friend class DownEnumerator__5B_templateInstructionAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_templateInstructionAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionAST (const class cPtr_templateInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionAST : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionAST_init (Compiler * inCompiler) ;


//--- Extension proc templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_templateAnalysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS__5B_templateInstructionForGeneration_5D_ & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionAST (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_templateInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_templateInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForGeneration : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension proc templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GGS_string & arg_ioGeneratedCode,
           class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg__ioTemporaryVariableIndex,
           class GGS_stringset & arg__ioUnusedVariableCppNameSet,
           class GGS_bool & arg__ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperDeclarationAST (const class cPtr_filewrapperDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsInternal (void) const ;

  public: class GGS_string readProperty_mSourceFileAbsolutePath (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GGS_lstring readProperty_mFilewrapperPath (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mFilewrapperTextFileExtensionList (void) const ;

  public: class GGS__5B_lstring_5D_ readProperty_mFilewrapperBinaryFileExtensionList (void) const ;

  public: class GGS__5B_filewrapperTemplateAST_5D_ readProperty_mFilewrapperTemplateList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_string & inOperand2,
                                                                                                 const class GGS_lstring & inOperand3,
                                                                                                 const class GGS_lstring & inOperand4,
                                                                                                 const class GGS__5B_lstring_5D_ & inOperand5,
                                                                                                 const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                                 const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand7,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS__5B_lstring_5D_ & inOperand5,
                                                                                           const class GGS__5B_lstring_5D_ & inOperand6,
                                                                                           const class GGS__5B_filewrapperTemplateAST_5D_ & inOperand7,
                                                                                           Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsInternal ;
  public: GGS_string mProperty_mSourceFileAbsolutePath ;
  public: GGS_lstring mProperty_mFilewrapperName ;
  public: GGS_lstring mProperty_mFilewrapperPath ;
  public: GGS__5B_lstring_5D_ mProperty_mFilewrapperTextFileExtensionList ;
  public: GGS__5B_lstring_5D_ mProperty_mFilewrapperBinaryFileExtensionList ;
  public: GGS__5B_filewrapperTemplateAST_5D_ mProperty_mFilewrapperTemplateList ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                          const GGS_bool & in_mIsInternal,
                                          const GGS_string & in_mSourceFileAbsolutePath,
                                          const GGS_lstring & in_mFilewrapperName,
                                          const GGS_lstring & in_mFilewrapperPath,
                                          const GGS__5B_lstring_5D_ & in_mFilewrapperTextFileExtensionList,
                                          const GGS__5B_lstring_5D_ & in_mFilewrapperBinaryFileExtensionList,
                                          const GGS__5B_filewrapperTemplateAST_5D_ & in_mFilewrapperTemplateList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperDeclarationAST_2E_weak (const class GGS_filewrapperDeclarationAST & inSource) ;

  public: GGS_filewrapperDeclarationAST_2E_weak & operator = (const class GGS_filewrapperDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperDeclarationAST_2E_weak init_nil (void) {
    GGS_filewrapperDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperDeclarationAST bang_filewrapperDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperTypeForGeneration (const class cPtr_filewrapperTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS__5B_filewrapperTemplateForGeneration_5D_ readProperty_filewrapperTemplateListForGeneration (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTypeForGeneration init_21_infoMessage_21__21_ (const class GGS_string & inOperand0,
                                                                               const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                               const class GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperTypeForGeneration_init_21_infoMessage_21__21_ (const class GGS_string & inOperand0,
                                                                         const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                         const class GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS__5B_filewrapperTemplateForGeneration_5D_ mProperty_filewrapperTemplateListForGeneration ;


//--- Default constructor
  public: cPtr_filewrapperTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperTypeForGeneration (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS__5B_filewrapperTemplateForGeneration_5D_ & in_filewrapperTemplateListForGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_filewrapperTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_filewrapperTypeForGeneration_2E_weak (const class GGS_filewrapperTypeForGeneration & inSource) ;

  public: GGS_filewrapperTypeForGeneration_2E_weak & operator = (const class GGS_filewrapperTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_filewrapperTypeForGeneration_2E_weak init_nil (void) {
    GGS_filewrapperTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_filewrapperTypeForGeneration bang_filewrapperTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_filewrapperTypeForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'filewrapperGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_filewrapperGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @filewrapperGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperGenerationTemplate final : public AC_GALGAS_root {
//--------------------------------- Properties
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_filewrapperGenerationTemplate (void) ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperGenerationTemplate init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_string class_func_filewrapperTemplateImplementation (const class GGS_string & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                const class GGS__5B_formalInputParameterForGeneration_5D_ & inOperand2,
                                                                                const class GGS_stringset & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_string & inOperand5,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_filewrapperTypeHeader_31_ (const class GGS_string & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_filewrapperTypeSpecificImplementation (const class GGS_string & inOperand0,
                                                                                    const class GGS_string & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperDeclarationForGeneration : public GGS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GGS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_filewrapperDeclarationForGeneration (const class cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mFilewrapperName (void) const ;

  public: class GGS_string readProperty_mFilewrapperAbsolutePath (void) const ;

  public: class GGS_wrapperFileMap readProperty_mFilewrapperFileMap (void) const ;

  public: class GGS_wrapperDirectoryMap readProperty_mFilewrapperDirectoryMap (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperDeclarationForGeneration init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                             const class GGS_bool & inOperand1,
                                                                                                                                             const class GGS_string & inOperand2,
                                                                                                                                             const class GGS_string & inOperand3,
                                                                                                                                             const class GGS_string & inOperand4,
                                                                                                                                             const class GGS_wrapperFileMap & inOperand5,
                                                                                                                                             const class GGS_wrapperDirectoryMap & inOperand6,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperDeclarationForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                                       const class GGS_bool & inOperand1,
                                                                                                                                       const class GGS_string & inOperand2,
                                                                                                                                       const class GGS_string & inOperand3,
                                                                                                                                       const class GGS_string & inOperand4,
                                                                                                                                       const class GGS_wrapperFileMap & inOperand5,
                                                                                                                                       const class GGS_wrapperDirectoryMap & inOperand6,
                                                                                                                                       Compiler * inCompiler) ;


//--- Extension func headerKind
  public: virtual class GGS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mFilewrapperName ;
  public: GGS_string mProperty_mFilewrapperAbsolutePath ;
  public: GGS_wrapperFileMap mProperty_mFilewrapperFileMap ;
  public: GGS_wrapperDirectoryMap mProperty_mFilewrapperDirectoryMap ;


//--- Default constructor
  public: cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                    const GGS_bool & in_generateHeader,
                                                    const GGS_string & in_implementationCppFileName,
                                                    const GGS_string & in_mFilewrapperName,
                                                    const GGS_string & in_mFilewrapperAbsolutePath,
                                                    const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                    const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_filewrapperTemplateMap final {

  public: DownEnumerator_filewrapperTemplateMap (const class GGS_filewrapperTemplateMap & inMap) ;

  public: ~ DownEnumerator_filewrapperTemplateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ current_mTemplateSignature (LOCATION_ARGS) const ;

  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_filewrapperTemplateMap (const DownEnumerator_filewrapperTemplateMap &) = delete ;
  private: DownEnumerator_filewrapperTemplateMap & operator = (const DownEnumerator_filewrapperTemplateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_filewrapperTemplateMap final {
  public: UpEnumerator_filewrapperTemplateMap (const class GGS_filewrapperTemplateMap & inMap)  ;

  public: ~ UpEnumerator_filewrapperTemplateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS__5B_functionSignatureElement_5D_ current_mTemplateSignature (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFilewrapperTemplatePath (LOCATION_ARGS) const ;
  public: class GGS_filewrapperTemplateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_filewrapperTemplateMap (const UpEnumerator_filewrapperTemplateMap &) = delete ;
  private: UpEnumerator_filewrapperTemplateMap & operator = (const UpEnumerator_filewrapperTemplateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_filewrapperTemplateMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_filewrapperTemplateMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_filewrapperTemplateMap (void) ;

//--- Handle copy
  public: GGS_filewrapperTemplateMap (const GGS_filewrapperTemplateMap & inSource) ;
  public: GGS_filewrapperTemplateMap & operator = (const GGS_filewrapperTemplateMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_filewrapperTemplateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_filewrapperTemplateMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_filewrapperTemplateMap class_func_mapWithMapToOverride (const class GGS_filewrapperTemplateMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ constinArgument1,
                                 class GGS_lstring constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMFilewrapperTemplatePathForKey (class GGS_lstring constinArgument0,
                                                         class GGS_string constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMTemplateSignatureForKey (class GGS__5B_functionSignatureElement_5D_ constinArgument0,
                                                   class GGS_string constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS__5B_functionSignatureElement_5D_ & outArgument1,
                                 class GGS_lstring & outArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mFilewrapperTemplatePathForKey (const class GGS_string & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_functionSignatureElement_5D_ getter_mTemplateSignatureForKey (const class GGS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_filewrapperTemplateMap getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_filewrapperTemplateMap_2E_element_3F_ readSubcript__3F_ (const class GGS_string & in0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_filewrapperTemplateMap ;
  friend class DownEnumerator_filewrapperTemplateMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @filewrapperTemplateMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS__5B_functionSignatureElement_5D_ mProperty_mTemplateSignature ;
  public: inline GGS__5B_functionSignatureElement_5D_ readProperty_mTemplateSignature (void) const {
    return mProperty_mTemplateSignature ;
  }

  public: GGS_lstring mProperty_mFilewrapperTemplatePath ;
  public: inline GGS_lstring readProperty_mFilewrapperTemplatePath (void) const {
    return mProperty_mFilewrapperTemplatePath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTemplateSignature (const GGS__5B_functionSignatureElement_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateSignature = inValue ;
  }

  public: inline void setter_setMFilewrapperTemplatePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperTemplatePath = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_filewrapperTemplateMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS__5B_functionSignatureElement_5D_ & in_mTemplateSignature,
                                                 const GGS_lstring & in_mFilewrapperTemplatePath) ;

//--------------------------------- Copy constructor
  public: GGS_filewrapperTemplateMap_2E_element (const GGS_filewrapperTemplateMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_filewrapperTemplateMap_2E_element & operator = (const GGS_filewrapperTemplateMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_filewrapperTemplateMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS__5B_functionSignatureElement_5D_ & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapperTemplateMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_filewrapperTemplateMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_filewrapperTemplateMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_filewrapperTemplateMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_filewrapperTemplateMap_2E_element_3F_ (const GGS_filewrapperTemplateMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_filewrapperTemplateMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_filewrapperTemplateMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [sortedArraySortDescriptorAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ (const class GGS__5B_sortedArraySortDescriptorAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ (const DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ &) = delete ;
  private: DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ & operator = (const DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedArraySortDescriptorAST current (LOCATION_ARGS) const ;
  public: class GGS_sortedArraySortDescriptorAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_sortedArraySortDescriptorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ (const class GGS__5B_sortedArraySortDescriptorAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ (const UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ &) = delete ;
  private: UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ & operator = (const UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedArraySortDescriptorAST current (LOCATION_ARGS) const ;
  public: class GGS_sortedArraySortDescriptorAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_sortedArraySortDescriptorAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_sortedArraySortDescriptorAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_sortedArraySortDescriptorAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_sortedArraySortDescriptorAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_sortedArraySortDescriptorAST_5D_ (const GGS__5B_sortedArraySortDescriptorAST_5D_ & inSource) ;
  public: GGS__5B_sortedArraySortDescriptorAST_5D_ & operator = (const GGS__5B_sortedArraySortDescriptorAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_sortedArraySortDescriptorAST_5D_ init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_sortedArraySortDescriptorAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_sortedArraySortDescriptorAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_sortedArraySortDescriptorAST_5D_ add_operation (const GGS__5B_sortedArraySortDescriptorAST_5D_ & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_sortedArraySortDescriptorAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_sortedArraySortDescriptorAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_sortedArraySortDescriptorAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_sortedArraySortDescriptorAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_sortedArraySortDescriptorAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_sortedArraySortDescriptorAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_sortedArraySortDescriptorAST getter_first (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortedArraySortDescriptorAST getter_last (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sortedArraySortDescriptorAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sortedArraySortDescriptorAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                         const class GGS_uint & constinOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_sortedArraySortDescriptorAST readSubcript__3F_ (const class GGS_uint & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_sortedArraySortDescriptorAST_5D_ ;
  friend class DownEnumerator__5B_sortedArraySortDescriptorAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_sortedArraySortDescriptorAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArraySortDescriptorAST struct
//--------------------------------------------------------------------------------------------------

class GGS_sortedArraySortDescriptorAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSortedAttributeName ;
  public: inline GGS_lstring readProperty_mSortedAttributeName (void) const {
    return mProperty_mSortedAttributeName ;
  }

  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedArraySortDescriptorAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSortedAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortedAttributeName = inValue ;
  }

  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedArraySortDescriptorAST (const GGS_lstring & in_mSortedAttributeName,
                                            const GGS_bool & in_mAscending) ;

//--------------------------------- Copy constructor
  public: GGS_sortedArraySortDescriptorAST (const GGS_sortedArraySortDescriptorAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortedArraySortDescriptorAST & operator = (const GGS_sortedArraySortDescriptorAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedArraySortDescriptorAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArraySortDescriptorAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [sortedArraySortProperty] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_sortedArraySortProperty_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_sortedArraySortProperty_5D_ (const class GGS__5B_sortedArraySortProperty_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_sortedArraySortProperty_5D_ (const DownEnumerator__5B_sortedArraySortProperty_5D_ &) = delete ;
  private: DownEnumerator__5B_sortedArraySortProperty_5D_ & operator = (const DownEnumerator__5B_sortedArraySortProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedArraySortProperty current (LOCATION_ARGS) const ;
  public: class GGS_sortedArraySortProperty current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_sortedArraySortProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_sortedArraySortProperty_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_sortedArraySortProperty_5D_ (const class GGS__5B_sortedArraySortProperty_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_sortedArraySortProperty_5D_ (const UpEnumerator__5B_sortedArraySortProperty_5D_ &) = delete ;
  private: UpEnumerator__5B_sortedArraySortProperty_5D_ & operator = (const UpEnumerator__5B_sortedArraySortProperty_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_sortedArraySortProperty current (LOCATION_ARGS) const ;
  public: class GGS_sortedArraySortProperty current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_sortedArraySortProperty> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_sortedArraySortProperty_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_sortedArraySortProperty> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_sortedArraySortProperty_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_sortedArraySortProperty_5D_ (const GGS__5B_sortedArraySortProperty_5D_ & inSource) ;
  public: GGS__5B_sortedArraySortProperty_5D_ & operator = (const GGS__5B_sortedArraySortProperty_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_sortedArraySortProperty_5D_ init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_sortedArraySortProperty_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_sortedArraySortProperty & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_sortedArraySortProperty_5D_ add_operation (const GGS__5B_sortedArraySortProperty_5D_ & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_sortedArraySortProperty constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_sortedArraySortProperty constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_sortedArraySortProperty & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_sortedArraySortProperty & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_sortedArraySortProperty & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_sortedArraySortProperty constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_sortedArraySortProperty getter_first (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_sortedArraySortProperty getter_last (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sortedArraySortProperty_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_sortedArraySortProperty_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                    const class GGS_uint & constinOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_sortedArraySortProperty readSubcript__3F_ (const class GGS_uint & in0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_sortedArraySortProperty_5D_ ;
  friend class DownEnumerator__5B_sortedArraySortProperty_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_sortedArraySortProperty_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArraySortProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_sortedArraySortProperty final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_ascending ;
  public: inline GGS_bool readProperty_ascending (void) const {
    return mProperty_ascending ;
  }

  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_type ;
  public: inline GGS_unifiedTypeMapEntry readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedArraySortProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_ascending = inValue ;
  }

  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedArraySortProperty (const GGS_bool & in_ascending,
                                       const GGS_string & in_name,
                                       const GGS_unifiedTypeMapEntry & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_sortedArraySortProperty (const GGS_sortedArraySortProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sortedArraySortProperty & operator = (const GGS_sortedArraySortProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedArraySortProperty init_21__21__21_ (const class GGS_bool & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArraySortProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedArrayTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_sortedArrayTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedArrayTypeDeclarationAST (const class cPtr_sortedArrayTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_sortedArrayTypeName (void) const ;

  public: class GGS_lstring readProperty_elementTypeName (void) const ;

  public: class GGS__5B_sortedArraySortDescriptorAST_5D_ readProperty_sortDescriptorList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedArrayTypeDeclarationAST init_21_isPredefined_21_sortedArrayTypeName_21_elementTypeName_21_sortDescriptorList (const class GGS_bool & inOperand0,
                                                                                                                                         const class GGS_lstring & inOperand1,
                                                                                                                                         const class GGS_lstring & inOperand2,
                                                                                                                                         const class GGS__5B_sortedArraySortDescriptorAST_5D_ & inOperand3,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedArrayTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArrayTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sortedArrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sortedArrayTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedArrayTypeDeclarationAST_init_21_isPredefined_21_sortedArrayTypeName_21_elementTypeName_21_sortDescriptorList (const class GGS_bool & inOperand0,
                                                                                                                                   const class GGS_lstring & inOperand1,
                                                                                                                                   const class GGS_lstring & inOperand2,
                                                                                                                                   const class GGS__5B_sortedArraySortDescriptorAST_5D_ & inOperand3,
                                                                                                                                   Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg__ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_sortedArrayTypeName ;
  public: GGS_lstring mProperty_elementTypeName ;
  public: GGS__5B_sortedArraySortDescriptorAST_5D_ mProperty_sortDescriptorList ;


//--- Default constructor
  public: cPtr_sortedArrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedArrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                              const GGS_lstring & in_sortedArrayTypeName,
                                              const GGS_lstring & in_elementTypeName,
                                              const GGS__5B_sortedArraySortDescriptorAST_5D_ & in_sortDescriptorList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArrayTypeDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedArrayTypeDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sortedArrayTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sortedArrayTypeDeclarationAST_2E_weak (const class GGS_sortedArrayTypeDeclarationAST & inSource) ;

  public: GGS_sortedArrayTypeDeclarationAST_2E_weak & operator = (const class GGS_sortedArrayTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sortedArrayTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_sortedArrayTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sortedArrayTypeDeclarationAST bang_sortedArrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sortedArrayTypeDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_sortedArrayTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedArrayTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArrayTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedArrayTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_sortedArrayTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedArrayTypeForGeneration (const class cPtr_sortedArrayTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_elementType (void) const ;

  public: class GGS__5B_sortedArraySortProperty_5D_ readProperty_typedSortPropertyList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedArrayTypeForGeneration init_21_infoMessage_21__21__21_ (const class GGS_string & inOperand0,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                   const class GGS__5B_sortedArraySortProperty_5D_ & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedArrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArrayTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sortedArrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_sortedArrayTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedArrayTypeForGeneration_init_21_infoMessage_21__21__21_ (const class GGS_string & inOperand0,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                             const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                             const class GGS__5B_sortedArraySortProperty_5D_ & inOperand3,
                                                                             Compiler * inCompiler) ;


//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_elementType ;
  public: GGS__5B_sortedArraySortProperty_5D_ mProperty_typedSortPropertyList ;


//--- Default constructor
  public: cPtr_sortedArrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedArrayTypeForGeneration (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS_unifiedTypeMapEntry & in_elementType,
                                             const GGS__5B_sortedArraySortProperty_5D_ & in_typedSortPropertyList,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedArrayTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sortedArrayTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sortedArrayTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sortedArrayTypeForGeneration_2E_weak (const class GGS_sortedArrayTypeForGeneration & inSource) ;

  public: GGS_sortedArrayTypeForGeneration_2E_weak & operator = (const class GGS_sortedArrayTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sortedArrayTypeForGeneration_2E_weak init_nil (void) {
    GGS_sortedArrayTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sortedArrayTypeForGeneration bang_sortedArrayTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sortedArrayTypeForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_sortedArrayTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedArrayTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArrayTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'sortedArrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_sortedArrayTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @sortedArrayTypeGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_sortedArrayTypeGenerationTemplate final : public AC_GALGAS_root {
//--------------------------------- Properties
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_sortedArrayTypeGenerationTemplate (void) ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedArrayTypeGenerationTemplate init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_string class_func_arrayTypeHeader_31_ (const class GGS_string & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS_string & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_arrayTypeSpecificImplementation (const class GGS_string & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_string & inOperand2,
                                                                              const class GGS_bool & inOperand3,
                                                                              const class GGS__5B_sortedArraySortProperty_5D_ & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedArrayTypeGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_classDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_classDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classDeclarationAST (const class cPtr_classDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_bool readProperty_mIsFinal (void) const ;

  public: class GGS_lstring readProperty_mClassTypeName (void) const ;

  public: class GGS_lstring readProperty_mSuperClassName (void) const ;

  public: class GGS_bool readProperty_mGenerateInSeparateFile (void) const ;

  public: class GGS__5B_propertyInCollectionAST_5D_ readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_lstring & inOperand4,
                                                                                           const class GGS_bool & inOperand5,
                                                                                           const class GGS__5B_propertyInCollectionAST_5D_ & inOperand6,
                                                                                           const class GGS_bool & inOperand7,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_classDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_lstring & inOperand3,
                                                                                     const class GGS_lstring & inOperand4,
                                                                                     const class GGS_bool & inOperand5,
                                                                                     const class GGS__5B_propertyInCollectionAST_5D_ & inOperand6,
                                                                                     const class GGS_bool & inOperand7,
                                                                                     Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_bool mProperty_mIsFinal ;
  public: GGS_lstring mProperty_mClassTypeName ;
  public: GGS_lstring mProperty_mSuperClassName ;
  public: GGS_bool mProperty_mGenerateInSeparateFile ;
  public: GGS__5B_propertyInCollectionAST_5D_ mProperty_mPropertyList ;
  public: GGS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_bool & in_mIsAbstract,
                                    const GGS_bool & in_mIsFinal,
                                    const GGS_lstring & in_mClassTypeName,
                                    const GGS_lstring & in_mSuperClassName,
                                    const GGS_bool & in_mGenerateInSeparateFile,
                                    const GGS__5B_propertyInCollectionAST_5D_ & in_mPropertyList,
                                    const GGS_bool & in_clonable,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classDeclarationAST_2E_weak (const class GGS_classDeclarationAST & inSource) ;

  public: GGS_classDeclarationAST_2E_weak & operator = (const class GGS_classDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classDeclarationAST_2E_weak init_nil (void) {
    GGS_classDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classDeclarationAST bang_classDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_classDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_classTypeForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_classTypeForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_classTypeForGeneration (const class cPtr_classTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsAbstract (void) const ;

  public: class GGS_unifiedTypeMapEntry readProperty_mSuperClass (void) const ;

  public: class GGS__5B_typedProperty_5D_ readProperty_mAllTypedAttributeList (void) const ;

  public: class GGS__5B_typedProperty_5D_ readProperty_mCurrentTypedAttributeList (void) const ;

  public: class GGS_bool readProperty_generateHeaderInSeparateFile (void) const ;

  public: class GGS_bool readProperty_initializerNeedsCompilerVariable (void) const ;

  public: class GGS_string readProperty_propertyInitializationCode (void) const ;

  public: class GGS__5B_typedProperty_5D_ readProperty_synthetizedInitializerArgumentList (void) const ;

  public: class GGS__5B_typedProperty_5D_ readProperty_inheritedSynthetizedInitializerArgumentList (void) const ;

  public: class GGS_initializerMap readProperty_initializerMap (void) const ;

  public: class GGS_bool readProperty_clonable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classTypeForGeneration init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                                 const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                 const class GGS_bool & inOperand2,
                                                                                                                 const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                                 const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                                                                 const class GGS__5B_typedProperty_5D_ & inOperand5,
                                                                                                                 const class GGS_bool & inOperand6,
                                                                                                                 const class GGS_bool & inOperand7,
                                                                                                                 const class GGS_string & inOperand8,
                                                                                                                 const class GGS__5B_typedProperty_5D_ & inOperand9,
                                                                                                                 const class GGS__5B_typedProperty_5D_ & inOperand10,
                                                                                                                 const class GGS_initializerMap & inOperand11,
                                                                                                                 const class GGS_bool & inOperand12,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classTypeForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @classTypeForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void classTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                           const class GGS_bool & inOperand2,
                                                                                                           const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand5,
                                                                                                           const class GGS_bool & inOperand6,
                                                                                                           const class GGS_bool & inOperand7,
                                                                                                           const class GGS_string & inOperand8,
                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand9,
                                                                                                           const class GGS__5B_typedProperty_5D_ & inOperand10,
                                                                                                           const class GGS_initializerMap & inOperand11,
                                                                                                           const class GGS_bool & inOperand12,
                                                                                                           Compiler * inCompiler) ;


//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendDeclaration2
  public: virtual void method_appendDeclaration_32_ (const class GGS_string arg__inOutputDirectory,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GGS_unifiedTypeMap arg__inUnifiedTypeMap,
           class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mIsAbstract ;
  public: GGS_unifiedTypeMapEntry mProperty_mSuperClass ;
  public: GGS__5B_typedProperty_5D_ mProperty_mAllTypedAttributeList ;
  public: GGS__5B_typedProperty_5D_ mProperty_mCurrentTypedAttributeList ;
  public: GGS_bool mProperty_generateHeaderInSeparateFile ;
  public: GGS_bool mProperty_initializerNeedsCompilerVariable ;
  public: GGS_string mProperty_propertyInitializationCode ;
  public: GGS__5B_typedProperty_5D_ mProperty_synthetizedInitializerArgumentList ;
  public: GGS__5B_typedProperty_5D_ mProperty_inheritedSynthetizedInitializerArgumentList ;
  public: GGS_initializerMap mProperty_initializerMap ;
  public: GGS_bool mProperty_clonable ;


//--- Default constructor
  public: cPtr_classTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_classTypeForGeneration (const GGS_string & in_infoMessage,
                                       const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GGS_bool & in_mIsAbstract,
                                       const GGS_unifiedTypeMapEntry & in_mSuperClass,
                                       const GGS__5B_typedProperty_5D_ & in_mAllTypedAttributeList,
                                       const GGS__5B_typedProperty_5D_ & in_mCurrentTypedAttributeList,
                                       const GGS_bool & in_generateHeaderInSeparateFile,
                                       const GGS_bool & in_initializerNeedsCompilerVariable,
                                       const GGS_string & in_propertyInitializationCode,
                                       const GGS__5B_typedProperty_5D_ & in_synthetizedInitializerArgumentList,
                                       const GGS__5B_typedProperty_5D_ & in_inheritedSynthetizedInitializerArgumentList,
                                       const GGS_initializerMap & in_initializerMap,
                                       const GGS_bool & in_clonable,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @classTypeForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_classTypeForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_classTypeForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_classTypeForGeneration_2E_weak (const class GGS_classTypeForGeneration & inSource) ;

  public: GGS_classTypeForGeneration_2E_weak & operator = (const class GGS_classTypeForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_classTypeForGeneration_2E_weak init_nil (void) {
    GGS_classTypeForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_classTypeForGeneration bang_classTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_classTypeForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_classTypeForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_classTypeForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classTypeForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'classGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

extern const DirectoryWrapper gWrapperDirectory_0_classGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
// Phase 1: filewrapper @classGenerationTemplate
//--------------------------------------------------------------------------------------------------

class GGS_classGenerationTemplate final : public AC_GALGAS_root {
//--------------------------------- Properties
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override { return mIsValid ; }
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_classGenerationTemplate (void) ;


//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classGenerationTemplate init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_string class_func_referenceClassTypeHeader_31_ (const class GGS_string & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_string & inOperand2,
                                                                           const class GGS_bool & inOperand3,
                                                                           const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_referenceClassTypeHeader_32_part_31_ (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS__5B_typedProperty_5D_ & inOperand3,
                                                                                   const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                                   const class GGS_bool & inOperand5,
                                                                                   const class GGS_getterMap & inOperand6,
                                                                                   const class GGS_instanceMethodMap & inOperand7,
                                                                                   const class GGS_initializerMap & inOperand8,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_referenceClassTypeHeader_32_part_32_ (const class GGS_string & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_string & inOperand2,
                                                                                   const class GGS__5B_typedProperty_5D_ & inOperand3,
                                                                                   const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                                   const class GGS_bool & inOperand5,
                                                                                   const class GGS__5B_typedProperty_5D_ & inOperand6,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_string class_func_referenceClassTypeSpecificImplementation (const class GGS_string & inOperand0,
                                                                                       const class GGS_string & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS__5B_typedProperty_5D_ & inOperand3,
                                                                                       const class GGS__5B_typedProperty_5D_ & inOperand4,
                                                                                       const class GGS__5B_typedProperty_5D_ & inOperand5,
                                                                                       const class GGS_bool & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       const class GGS_string & inOperand8,
                                                                                       const class GGS_bool & inOperand9,
                                                                                       const class GGS__5B_typedProperty_5D_ & inOperand10,
                                                                                       const class GGS__5B_typedProperty_5D_ & inOperand11,
                                                                                       const class GGS_initializerMap & inOperand12,
                                                                                       const class GGS_bool & inOperand13,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classGenerationTemplate ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassGetterDeclaration (const class GGS_lstring & constinArgument0,
                                                          const class GGS__5B_functionSignatureElement_5D_ & constinArgument1,
                                                          const class GGS_bool & constinArgument2,
                                                          const class GGS_unifiedTypeMapEntry & constinArgument3,
                                                          const class GGS_methodQualifier & constinArgument4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_generateClassInstanceMethodDeclaration (const class GGS_lstring & constinArgument0,
                                                                  const class GGS__5B_formalParameterSignatureElement_5D_ & constinArgument1,
                                                                  const class GGS_bool & constinArgument2,
                                                                  const class GGS_methodQualifier & constinArgument3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [typeNameFormalParameterName] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_typeNameFormalParameterName_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_typeNameFormalParameterName_5D_ (const class GGS__5B_typeNameFormalParameterName_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_typeNameFormalParameterName_5D_ (const DownEnumerator__5B_typeNameFormalParameterName_5D_ &) = delete ;
  private: DownEnumerator__5B_typeNameFormalParameterName_5D_ & operator = (const DownEnumerator__5B_typeNameFormalParameterName_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typeNameFormalParameterName current (LOCATION_ARGS) const ;
  public: class GGS_typeNameFormalParameterName current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_typeNameFormalParameterName> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_typeNameFormalParameterName_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_typeNameFormalParameterName_5D_ (const class GGS__5B_typeNameFormalParameterName_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_typeNameFormalParameterName_5D_ (const UpEnumerator__5B_typeNameFormalParameterName_5D_ &) = delete ;
  private: UpEnumerator__5B_typeNameFormalParameterName_5D_ & operator = (const UpEnumerator__5B_typeNameFormalParameterName_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_typeNameFormalParameterName current (LOCATION_ARGS) const ;
  public: class GGS_typeNameFormalParameterName current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_typeNameFormalParameterName> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_typeNameFormalParameterName_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_typeNameFormalParameterName> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_typeNameFormalParameterName_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_typeNameFormalParameterName_5D_ (const GGS__5B_typeNameFormalParameterName_5D_ & inSource) ;
  public: GGS__5B_typeNameFormalParameterName_5D_ & operator = (const GGS__5B_typeNameFormalParameterName_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_typeNameFormalParameterName_5D_ init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_typeNameFormalParameterName_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_typeNameFormalParameterName & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_typeNameFormalParameterName_5D_ add_operation (const GGS__5B_typeNameFormalParameterName_5D_ & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_typeNameFormalParameterName constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_typeNameFormalParameterName constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_typeNameFormalParameterName & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_typeNameFormalParameterName & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_typeNameFormalParameterName & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_typeNameFormalParameterName constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_typeNameFormalParameterName getter_first (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_typeNameFormalParameterName getter_last (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typeNameFormalParameterName_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typeNameFormalParameterName_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                        const class GGS_uint & constinOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_typeNameFormalParameterName readSubcript__3F_ (const class GGS_uint & in0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_typeNameFormalParameterName_5D_ ;
  friend class DownEnumerator__5B_typeNameFormalParameterName_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_typeNameFormalParameterName_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeNameFormalParameterName struct
//--------------------------------------------------------------------------------------------------

class GGS_typeNameFormalParameterName final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_lstring mProperty_mFormalParameterTypeName ;
  public: inline GGS_lstring readProperty_mFormalParameterTypeName (void) const {
    return mProperty_mFormalParameterTypeName ;
  }

  public: GGS_lstring mProperty_mFormalParameterName ;
  public: inline GGS_lstring readProperty_mFormalParameterName (void) const {
    return mProperty_mFormalParameterName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeNameFormalParameterName (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalParameterTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterTypeName = inValue ;
  }

  public: inline void setter_setMFormalParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeNameFormalParameterName (const GGS_lstring & in_mFormalSelector,
                                           const GGS_lstring & in_mFormalParameterTypeName,
                                           const GGS_lstring & in_mFormalParameterName) ;

//--------------------------------- Copy constructor
  public: GGS_typeNameFormalParameterName (const GGS_typeNameFormalParameterName & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeNameFormalParameterName & operator = (const GGS_typeNameFormalParameterName & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeNameFormalParameterName init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeNameFormalParameterName ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [[typeNameFormalParameterName]] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ final {
//--- Constructor
  public: DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ (const class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ (const DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ &) = delete ;
  private: DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ & operator = (const DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_typeNameFormalParameterName_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_typeNameFormalParameterName_5D_ current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS__5B_typeNameFormalParameterName_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ final {
//--- Constructor
  public: UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ (const class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ (const UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ &) = delete ;
  private: UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ & operator = (const UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS__5B_typeNameFormalParameterName_5D_ current (LOCATION_ARGS) const ;
  public: class GGS__5B_typeNameFormalParameterName_5D_ current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS__5B_typeNameFormalParameterName_5D_> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS__5B_typeNameFormalParameterName_5D_> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B__5B_typeNameFormalParameterName_5D__5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B__5B_typeNameFormalParameterName_5D__5D_ (const GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inSource) ;
  public: GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & operator = (const GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B__5B_typeNameFormalParameterName_5D__5D_ init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B__5B_typeNameFormalParameterName_5D__5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS__5B_typeNameFormalParameterName_5D_ & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B__5B_typeNameFormalParameterName_5D__5D_ add_operation (const GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS__5B_typeNameFormalParameterName_5D_ constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS__5B_typeNameFormalParameterName_5D_ constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS__5B_typeNameFormalParameterName_5D_ & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS__5B_typeNameFormalParameterName_5D_ & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS__5B_typeNameFormalParameterName_5D_ & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS__5B_typeNameFormalParameterName_5D_ constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS__5B_typeNameFormalParameterName_5D_ getter_first (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_typeNameFormalParameterName_5D_ getter_last (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                                                const class GGS_uint & constinOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS__5B_typeNameFormalParameterName_5D_ readSubcript__3F_ (const class GGS_uint & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ ;
  friend class DownEnumerator__5B__5B_typeNameFormalParameterName_5D__5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__5B_typeNameFormalParameterName_5D__5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [externTypeGetter] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_externTypeGetter_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_externTypeGetter_5D_ (const class GGS__5B_externTypeGetter_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_externTypeGetter_5D_ (const DownEnumerator__5B_externTypeGetter_5D_ &) = delete ;
  private: DownEnumerator__5B_externTypeGetter_5D_ & operator = (const DownEnumerator__5B_externTypeGetter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeGetter current (LOCATION_ARGS) const ;
  public: class GGS_externTypeGetter current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_externTypeGetter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_externTypeGetter_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_externTypeGetter_5D_ (const class GGS__5B_externTypeGetter_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_externTypeGetter_5D_ (const UpEnumerator__5B_externTypeGetter_5D_ &) = delete ;
  private: UpEnumerator__5B_externTypeGetter_5D_ & operator = (const UpEnumerator__5B_externTypeGetter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeGetter current (LOCATION_ARGS) const ;
  public: class GGS_externTypeGetter current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_externTypeGetter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_externTypeGetter_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_externTypeGetter> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_externTypeGetter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeGetter_5D_ (const GGS__5B_externTypeGetter_5D_ & inSource) ;
  public: GGS__5B_externTypeGetter_5D_ & operator = (const GGS__5B_externTypeGetter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeGetter_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_externTypeGetter_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_externTypeGetter & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_externTypeGetter_5D_ add_operation (const GGS__5B_externTypeGetter_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_externTypeGetter constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_externTypeGetter constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_externTypeGetter & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_externTypeGetter & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_externTypeGetter & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_externTypeGetter constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_externTypeGetter getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_externTypeGetter getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeGetter_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeGetter_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                             const class GGS_uint & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_externTypeGetter readSubcript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeGetter_5D_ ;
  friend class DownEnumerator__5B_externTypeGetter_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_externTypeGetter_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeGetter struct
//--------------------------------------------------------------------------------------------------

class GGS_externTypeGetter final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mGetterName ;
  public: inline GGS_lstring readProperty_mGetterName (void) const {
    return mProperty_mGetterName ;
  }

  public: GGS_lstring mProperty_mResultTypeName ;
  public: inline GGS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GGS__5B_typeNameFormalParameterName_5D_ mProperty_mParameterList ;
  public: inline GGS__5B_typeNameFormalParameterName_5D_ readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externTypeGetter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGetterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterName = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS__5B_typeNameFormalParameterName_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externTypeGetter (const GGS_lstring & in_mGetterName,
                                const GGS_lstring & in_mResultTypeName,
                                const GGS__5B_typeNameFormalParameterName_5D_ & in_mParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_externTypeGetter (const GGS_externTypeGetter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externTypeGetter & operator = (const GGS_externTypeGetter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeGetter init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_lstring & inOperand1,
                                                        const class GGS__5B_typeNameFormalParameterName_5D_ & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeGetter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [externTypeSetter] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_externTypeSetter_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_externTypeSetter_5D_ (const class GGS__5B_externTypeSetter_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_externTypeSetter_5D_ (const DownEnumerator__5B_externTypeSetter_5D_ &) = delete ;
  private: DownEnumerator__5B_externTypeSetter_5D_ & operator = (const DownEnumerator__5B_externTypeSetter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeSetter current (LOCATION_ARGS) const ;
  public: class GGS_externTypeSetter current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_externTypeSetter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_externTypeSetter_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_externTypeSetter_5D_ (const class GGS__5B_externTypeSetter_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_externTypeSetter_5D_ (const UpEnumerator__5B_externTypeSetter_5D_ &) = delete ;
  private: UpEnumerator__5B_externTypeSetter_5D_ & operator = (const UpEnumerator__5B_externTypeSetter_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeSetter current (LOCATION_ARGS) const ;
  public: class GGS_externTypeSetter current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_externTypeSetter> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_externTypeSetter_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_externTypeSetter> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_externTypeSetter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeSetter_5D_ (const GGS__5B_externTypeSetter_5D_ & inSource) ;
  public: GGS__5B_externTypeSetter_5D_ & operator = (const GGS__5B_externTypeSetter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeSetter_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_externTypeSetter_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_externTypeSetter & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_externTypeSetter_5D_ add_operation (const GGS__5B_externTypeSetter_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_externTypeSetter constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_externTypeSetter constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_externTypeSetter & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_externTypeSetter & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_externTypeSetter & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_externTypeSetter constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_externTypeSetter getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_externTypeSetter getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeSetter_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeSetter_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                             const class GGS_uint & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_externTypeSetter readSubcript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeSetter_5D_ ;
  friend class DownEnumerator__5B_externTypeSetter_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_externTypeSetter_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeSetter struct
//--------------------------------------------------------------------------------------------------

class GGS_externTypeSetter final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSetterName ;
  public: inline GGS_lstring readProperty_mSetterName (void) const {
    return mProperty_mSetterName ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externTypeSetter (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSetterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externTypeSetter (const GGS_lstring & in_mSetterName,
                                const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_externTypeSetter (const GGS_externTypeSetter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externTypeSetter & operator = (const GGS_externTypeSetter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeSetter init_21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeSetter ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [externTypeMethod] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_externTypeMethod_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_externTypeMethod_5D_ (const class GGS__5B_externTypeMethod_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_externTypeMethod_5D_ (const DownEnumerator__5B_externTypeMethod_5D_ &) = delete ;
  private: DownEnumerator__5B_externTypeMethod_5D_ & operator = (const DownEnumerator__5B_externTypeMethod_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeMethod current (LOCATION_ARGS) const ;
  public: class GGS_externTypeMethod current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_externTypeMethod> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_externTypeMethod_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_externTypeMethod_5D_ (const class GGS__5B_externTypeMethod_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_externTypeMethod_5D_ (const UpEnumerator__5B_externTypeMethod_5D_ &) = delete ;
  private: UpEnumerator__5B_externTypeMethod_5D_ & operator = (const UpEnumerator__5B_externTypeMethod_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_externTypeMethod current (LOCATION_ARGS) const ;
  public: class GGS_externTypeMethod current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_externTypeMethod> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_externTypeMethod_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_externTypeMethod> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_externTypeMethod_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeMethod_5D_ (const GGS__5B_externTypeMethod_5D_ & inSource) ;
  public: GGS__5B_externTypeMethod_5D_ & operator = (const GGS__5B_externTypeMethod_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeMethod_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_externTypeMethod_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_externTypeMethod & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_externTypeMethod_5D_ add_operation (const GGS__5B_externTypeMethod_5D_ & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_externTypeMethod constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_externTypeMethod constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_externTypeMethod & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_externTypeMethod & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_externTypeMethod & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_externTypeMethod constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_externTypeMethod getter_first (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_externTypeMethod getter_last (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeMethod_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_externTypeMethod_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                             const class GGS_uint & constinOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_externTypeMethod readSubcript__3F_ (const class GGS_uint & in0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeMethod_5D_ ;
  friend class DownEnumerator__5B_externTypeMethod_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_externTypeMethod_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeMethod struct
//--------------------------------------------------------------------------------------------------

class GGS_externTypeMethod final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: inline GGS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GGS__5B_formalParameterAST_5D_ mProperty_mFormalParameterList ;
  public: inline GGS__5B_formalParameterAST_5D_ readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externTypeMethod (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GGS__5B_formalParameterAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externTypeMethod (const GGS_lstring & in_mMethodName,
                                const GGS__5B_formalParameterAST_5D_ & in_mFormalParameterList,
                                const GGS_location & in_mDeclarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_externTypeMethod (const GGS_externTypeMethod & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externTypeMethod & operator = (const GGS_externTypeMethod & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeMethod init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS__5B_formalParameterAST_5D_ & inOperand1,
                                                        const class GGS_location & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeMethod ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[typeNameFormalParameterName] initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS__5B_typeNameFormalParameterName_5D_ & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_externTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_externTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externTypeDeclarationAST (const class cPtr_externTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mExternTypeName (void) const ;

  public: class GGS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GGS_string readProperty_mCppClassCode (void) const ;

  public: class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ readProperty_externTypeInitializerList (void) const ;

  public: class GGS__5B_externTypeGetter_5D_ readProperty_mExternTypeGetterList (void) const ;

  public: class GGS__5B_externTypeSetter_5D_ readProperty_mExternTypeSetterList (void) const ;

  public: class GGS__5B_externTypeMethod_5D_ readProperty_mExternTypeMethodList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_string & inOperand2,
                                                                                                const class GGS_string & inOperand3,
                                                                                                const class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inOperand4,
                                                                                                const class GGS__5B_externTypeGetter_5D_ & inOperand5,
                                                                                                const class GGS__5B_externTypeSetter_5D_ & inOperand6,
                                                                                                const class GGS__5B_externTypeMethod_5D_ & inOperand7,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_string & inOperand2,
                                                                                          const class GGS_string & inOperand3,
                                                                                          const class GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & inOperand4,
                                                                                          const class GGS__5B_externTypeGetter_5D_ & inOperand5,
                                                                                          const class GGS__5B_externTypeSetter_5D_ & inOperand6,
                                                                                          const class GGS__5B_externTypeMethod_5D_ & inOperand7,
                                                                                          Compiler * inCompiler) ;


//--- Extension func keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS__5B_semanticDeclarationAST_5D_ & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg__ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg__inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg__inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg__inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg__inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg__ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS__5B_lstring_5D_ & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg__inSemanticContext,
           class GGS_unifiedTypeMap & arg__ioTypeMap,
           const class GGS_predefinedTypes arg__inPredefinedTypes,
           class GGS__5B_semanticDeclarationForGeneration_5D_ & arg__ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mExternTypeName ;
  public: GGS_string mProperty_mCppPreDeclarationCode ;
  public: GGS_string mProperty_mCppClassCode ;
  public: GGS__5B__5B_typeNameFormalParameterName_5D__5D_ mProperty_externTypeInitializerList ;
  public: GGS__5B_externTypeGetter_5D_ mProperty_mExternTypeGetterList ;
  public: GGS__5B_externTypeSetter_5D_ mProperty_mExternTypeSetterList ;
  public: GGS__5B_externTypeMethod_5D_ mProperty_mExternTypeMethodList ;


//--- Default constructor
  public: cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                         const GGS_lstring & in_mExternTypeName,
                                         const GGS_string & in_mCppPreDeclarationCode,
                                         const GGS_string & in_mCppClassCode,
                                         const GGS__5B__5B_typeNameFormalParameterName_5D__5D_ & in_externTypeInitializerList,
                                         const GGS__5B_externTypeGetter_5D_ & in_mExternTypeGetterList,
                                         const GGS__5B_externTypeSetter_5D_ & in_mExternTypeSetterList,
                                         const GGS__5B_externTypeMethod_5D_ & in_mExternTypeMethodList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externTypeDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externTypeDeclarationAST_2E_weak (const class GGS_externTypeDeclarationAST & inSource) ;

  public: GGS_externTypeDeclarationAST_2E_weak & operator = (const class GGS_externTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_externTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externTypeDeclarationAST bang_externTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externTypeDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

class GGS_externTypeDeclarationForGeneration : public GGS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GGS_externTypeDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externTypeDeclarationForGeneration (const class cPtr_externTypeDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mExternTypeName (void) const ;

  public: class GGS_string readProperty_mCppPreDeclarationCode (void) const ;

  public: class GGS_string readProperty_mCppClassCode (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeDeclarationForGeneration init_21_infoMessage_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                             const class GGS_string & inOperand2,
                                                                                             const class GGS_string & inOperand3,
                                                                                             const class GGS_string & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externTypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationForGeneration : public cPtr_semanticTypeForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externTypeDeclarationForGeneration_init_21_infoMessage_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                       const class GGS_string & inOperand2,
                                                                                       const class GGS_string & inOperand3,
                                                                                       const class GGS_string & inOperand4,
                                                                                       Compiler * inCompiler) ;


//--- Extension proc appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GGS_stringset & arg__ioInclusionSet,
           class GGS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mExternTypeName ;
  public: GGS_string mProperty_mCppPreDeclarationCode ;
  public: GGS_string mProperty_mCppClassCode ;


//--- Default constructor
  public: cPtr_externTypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externTypeDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                   const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                   const GGS_string & in_mExternTypeName,
                                                   const GGS_string & in_mCppPreDeclarationCode,
                                                   const GGS_string & in_mCppClassCode,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externTypeDeclarationForGeneration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externTypeDeclarationForGeneration_2E_weak : public GGS_semanticTypeForGeneration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externTypeDeclarationForGeneration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externTypeDeclarationForGeneration_2E_weak (const class GGS_externTypeDeclarationForGeneration & inSource) ;

  public: GGS_externTypeDeclarationForGeneration_2E_weak & operator = (const class GGS_externTypeDeclarationForGeneration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externTypeDeclarationForGeneration_2E_weak init_nil (void) {
    GGS_externTypeDeclarationForGeneration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externTypeDeclarationForGeneration bang_externTypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externTypeDeclarationForGeneration unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[functionSignatureElement] initializerSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_initializerSignature (const class GGS__5B_functionSignatureElement_5D_ & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[functionSignatureElement] subcriptSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_subcriptSignature (const class GGS__5B_functionSignatureElement_5D_ & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_fileprivateAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_fileprivateAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_fileprivateAccess (const GGS_AccessControl_2E_fileprivateAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_fileprivateAccess & operator = (const GGS_AccessControl_2E_fileprivateAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_fileprivateAccess init_21_ (const class GGS_location & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.fileprivateAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_fileprivateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_fileprivateAccess_3F_ (const GGS_AccessControl_2E_fileprivateAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_fileprivateAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_fileprivateAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_fileprivateSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateSetAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_declarationLocation ;
  public: inline GGS_location readProperty_declarationLocation (void) const {
    return mProperty_declarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess (const GGS_location & in_declarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_fileprivateSetAccess & operator = (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_fileprivateSetAccess init_21_ (const class GGS_location & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.fileprivateSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_fileprivateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_fileprivateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_fileprivateSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_fileprivateSetAccess_3F_ (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_fileprivateSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_fileprivateSetAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_privateAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_privateAccess (const GGS_AccessControl_2E_privateAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_privateAccess & operator = (const GGS_AccessControl_2E_privateAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_privateAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.privateAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_privateAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_privateAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_privateAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_privateSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateSetAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_privateSetAccess (const GGS_AccessControl_2E_privateSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_privateSetAccess & operator = (const GGS_AccessControl_2E_privateSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_privateSetAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.privateSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_privateSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_privateSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_privateSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_privateSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_privateSetAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_protectedAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_protectedAccess (const GGS_AccessControl_2E_protectedAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_protectedAccess & operator = (const GGS_AccessControl_2E_protectedAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_protectedAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.protectedAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_protectedAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_protectedAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_protectedAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @AccessControl_2E_protectedSetAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedSetAccess final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_declaringType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_declaringType (void) const {
    return mProperty_declaringType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedSetAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDeclaringType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_declaringType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & in_declaringType) ;

//--------------------------------- Copy constructor
  public: GGS_AccessControl_2E_protectedSetAccess (const GGS_AccessControl_2E_protectedSetAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_AccessControl_2E_protectedSetAccess & operator = (const GGS_AccessControl_2E_protectedSetAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_AccessControl_2E_protectedSetAccess init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: AccessControl.protectedSetAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl_2E_protectedSetAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_AccessControl_2E_protectedSetAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_AccessControl_2E_protectedSetAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_AccessControl_2E_protectedSetAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_AccessControl_2E_protectedSetAccess unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantIndexMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS__5B_associatedValueDescriptor_5D_ mProperty_mAssociatedTypeList ;
  public: inline GGS__5B_associatedValueDescriptor_5D_ readProperty_mAssociatedTypeList (void) const {
    return mProperty_mAssociatedTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMAssociatedTypeList (const GGS__5B_associatedValueDescriptor_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedTypeList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantIndexMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_uint & in_mIndex,
                                           const GGS__5B_associatedValueDescriptor_5D_ & in_mAssociatedTypeList) ;

//--------------------------------- Copy constructor
  public: GGS_constantIndexMap_2E_element (const GGS_constantIndexMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantIndexMap_2E_element & operator = (const GGS_constantIndexMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_uint & inOperand1,
                                                                   const class GGS__5B_associatedValueDescriptor_5D_ & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: constantIndexMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_constantIndexMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_constantIndexMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_constantIndexMap_2E_element_3F_ (const GGS_constantIndexMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_constantIndexMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_constantIndexMap_2E_element unwrappedValue (void) const {
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
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constantIndexMap_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (class cPtr_lexicalExpressionAST * inObject,
                                                 class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalExpressionAST_2E_weak (const class GGS_lexicalExpressionAST & inSource) ;

  public: GGS_lexicalExpressionAST_2E_weak & operator = (const class GGS_lexicalExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalExpressionAST_2E_weak init_nil (void) {
    GGS_lexicalExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalExpressionAST bang_lexicalExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (class cPtr_lexicalInstructionAST * inObject,
                                                  class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  class GGS_lexicalTagMap & io__5F_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (class cPtr_abstractLexicalRuleAST * inObject,
                                           class GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLexicalRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLexicalRuleAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractLexicalRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractLexicalRuleAST_2E_weak (const class GGS_abstractLexicalRuleAST & inSource) ;

  public: GGS_abstractLexicalRuleAST_2E_weak & operator = (const class GGS_abstractLexicalRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractLexicalRuleAST_2E_weak init_nil (void) {
    GGS_abstractLexicalRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractLexicalRuleAST bang_abstractLexicalRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractLexicalRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_abstractLexicalRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLexicalRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@[abstractLexicalRuleAST] useLoopLocalVar' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_useLoopLocalVar (const class GGS__5B_abstractLexicalRuleAST_5D_ & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalImplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalImplicitRuleAST init_21_ (const class GGS_lstring & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalImplicitRuleAST_init_21_ (const class GGS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension func generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mListName ;


//--- Default constructor
  public: cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalImplicitRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalImplicitRuleAST_2E_weak : public GGS_abstractLexicalRuleAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalImplicitRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalImplicitRuleAST_2E_weak (const class GGS_lexicalImplicitRuleAST & inSource) ;

  public: GGS_lexicalImplicitRuleAST_2E_weak & operator = (const class GGS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalImplicitRuleAST_2E_weak init_nil (void) {
    GGS_lexicalImplicitRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalImplicitRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalImplicitRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalImplicitRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST : public GGS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GGS__5B_lexicalInstructionAST_5D_ readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalExplicitRuleAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS__5B_lexicalInstructionAST_5D_ & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExplicitRuleAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS__5B_lexicalInstructionAST_5D_ & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension func generateLexicalRuleCode
  public: virtual class GGS_string getter_generateLexicalRuleCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaCode
  public: virtual class GGS_string getter_generateSwiftCocoaCode (const class GGS_string inScannerClassName,
           const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func lexicalRuleUsesLoopLocalVar
  public: virtual class GGS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalRule
  public: virtual void method_checkLexicalRule (class GGS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GGS__5B_lexicalInstructionAST_5D_ mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GGS__5B_lexicalInstructionAST_5D_ & in_mInstructionList,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalExplicitRuleAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalExplicitRuleAST_2E_weak : public GGS_abstractLexicalRuleAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalExplicitRuleAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalExplicitRuleAST_2E_weak (const class GGS_lexicalExplicitRuleAST & inSource) ;

  public: GGS_lexicalExplicitRuleAST_2E_weak & operator = (const class GGS_lexicalExplicitRuleAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalExplicitRuleAST_2E_weak init_nil (void) {
    GGS_lexicalExplicitRuleAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalExplicitRuleAST bang_lexicalExplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalExplicitRuleAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalExplicitRuleAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalExplicitRuleAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalOrExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalOrExpressionAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalOrExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GGS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalOrExpressionAST init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                          const class GGS_lexicalExpressionAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalOrExpressionAST_init_21__21_ (const class GGS_lexicalExpressionAST & inOperand0,
                                                    const class GGS_lexicalExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GGS_lexicalExpressionAST mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                       const GGS_lexicalExpressionAST & in_mRightOperand,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalOrExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalOrExpressionAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalOrExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalOrExpressionAST_2E_weak (const class GGS_lexicalOrExpressionAST & inSource) ;

  public: GGS_lexicalOrExpressionAST_2E_weak & operator = (const class GGS_lexicalOrExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalOrExpressionAST_2E_weak init_nil (void) {
    GGS_lexicalOrExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalOrExpressionAST bang_lexicalOrExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalOrExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalOrExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalOrExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterSetMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterSetMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterSetMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mCharacterSetName ;


//--- Default constructor
  public: cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterSetMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterSetMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterSetMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterSetMatchAST_2E_weak (const class GGS_lexicalCharacterSetMatchAST & inSource) ;

  public: GGS_lexicalCharacterSetMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterSetMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterSetMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterSetMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterSetMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterSetMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterMatchAST init_21_ (const class GGS_lchar & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterMatchAST_init_21_ (const class GGS_lchar & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GGS_lchar & in_mCharacter,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterMatchAST_2E_weak (const class GGS_lexicalCharacterMatchAST & inSource) ;

  public: GGS_lexicalCharacterMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterIntervalMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mLowerBound (void) const ;

  public: class GGS_lchar readProperty_mUpperBound (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterIntervalMatchAST init_21__21_ (const class GGS_lchar & inOperand0,
                                                                    const class GGS_lchar & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterIntervalMatchAST_init_21__21_ (const class GGS_lchar & inOperand0,
                                                              const class GGS_lchar & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mLowerBound ;
  public: GGS_lchar mProperty_mUpperBound ;


//--- Default constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GGS_lchar & in_mLowerBound,
                                                 const GGS_lchar & in_mUpperBound,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterIntervalMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterIntervalMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak (const class GGS_lexicalCharacterIntervalMatchAST & inSource) ;

  public: GGS_lexicalCharacterIntervalMatchAST_2E_weak & operator = (const class GGS_lexicalCharacterIntervalMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterIntervalMatchAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterIntervalMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterIntervalMatchAST bang_lexicalCharacterIntervalMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterIntervalMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterIntervalMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterIntervalMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringMatchAST init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringMatchAST_init_21_ (const class GGS_lstring & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;


//--- Default constructor
  public: cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStringMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStringMatchAST_2E_weak (const class GGS_lexicalStringMatchAST & inSource) ;

  public: GGS_lexicalStringMatchAST_2E_weak & operator = (const class GGS_lexicalStringMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStringMatchAST_2E_weak init_nil (void) {
    GGS_lexicalStringMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStringMatchAST bang_lexicalStringMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStringMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStringMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringNotMatchAST : public GGS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mString (void) const ;

  public: class GGS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalStringNotMatchAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalStringNotMatchAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_lstring & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension func generateConditionCode
  public: virtual class GGS_string getter_generateConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaConditionCode
  public: virtual class GGS_string getter_generateSwiftCocoaConditionCode (const class GGS_lexiqueAnalysisContext _inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mString ;
  public: GGS_lstring mProperty_mErrorMessage ;


//--- Default constructor
  public: cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                         const GGS_lstring & in_mErrorMessage,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalStringNotMatchAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalStringNotMatchAST_2E_weak : public GGS_lexicalExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalStringNotMatchAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalStringNotMatchAST_2E_weak (const class GGS_lexicalStringNotMatchAST & inSource) ;

  public: GGS_lexicalStringNotMatchAST_2E_weak & operator = (const class GGS_lexicalStringNotMatchAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalStringNotMatchAST_2E_weak init_nil (void) {
    GGS_lexicalStringNotMatchAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalStringNotMatchAST bang_lexicalStringNotMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalStringNotMatchAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalStringNotMatchAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalStringNotMatchAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendDefaultActionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendDefaultActionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalSendDefaultActionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSendDefaultActionAST_2E_weak (const class GGS_lexicalSendDefaultActionAST & inSource) ;

  public: GGS_lexicalSendDefaultActionAST_2E_weak & operator = (const class GGS_lexicalSendDefaultActionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSendDefaultActionAST_2E_weak init_nil (void) {
    GGS_lexicalSendDefaultActionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSendDefaultActionAST bang_lexicalSendDefaultActionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSendDefaultActionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSendDefaultActionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendDefaultActionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendTerminalByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalSendTerminalByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalSendTerminalByDefaultAST (const class cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultSentTerminal (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalSendTerminalByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalSendTerminalByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalSendTerminalByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension func generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultSentTerminal ;


//--- Default constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalSendTerminalByDefaultAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalSendTerminalByDefaultAST_2E_weak : public GGS_lexicalSendDefaultActionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak (const class GGS_lexicalSendTerminalByDefaultAST & inSource) ;

  public: GGS_lexicalSendTerminalByDefaultAST_2E_weak & operator = (const class GGS_lexicalSendTerminalByDefaultAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalSendTerminalByDefaultAST_2E_weak init_nil (void) {
    GGS_lexicalSendTerminalByDefaultAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalSendTerminalByDefaultAST bang_lexicalSendTerminalByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalSendTerminalByDefaultAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalSendTerminalByDefaultAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalSendTerminalByDefaultAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorByDefaultAST : public GGS_lexicalSendDefaultActionAST {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorByDefaultAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalErrorByDefaultAST (const class cPtr_lexicalErrorByDefaultAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDefaultErrorMessageName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalErrorByDefaultAST init_21_ (const class GGS_lstring & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalErrorByDefaultAST : public cPtr_lexicalSendDefaultActionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalErrorByDefaultAST_init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension func generateDefaultSendCode
  public: virtual class GGS_string getter_generateDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaDefaultSendCode
  public: virtual class GGS_string getter_generateSwiftCocoaDefaultSendCode (const class GGS_string inScannerClassName,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalDefaultAction
  public: virtual void method_checkLexicalDefaultAction (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDefaultErrorMessageName ;


//--- Default constructor
  public: cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalErrorByDefaultAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalErrorByDefaultAST_2E_weak : public GGS_lexicalSendDefaultActionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalErrorByDefaultAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalErrorByDefaultAST_2E_weak (const class GGS_lexicalErrorByDefaultAST & inSource) ;

  public: GGS_lexicalErrorByDefaultAST_2E_weak & operator = (const class GGS_lexicalErrorByDefaultAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalErrorByDefaultAST_2E_weak init_nil (void) {
    GGS_lexicalErrorByDefaultAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalErrorByDefaultAST bang_lexicalErrorByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalErrorByDefaultAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalErrorByDefaultAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalErrorByDefaultAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const class GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           class GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                           const class GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & operator = (const class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalRoutineOrFunctionFormalInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalAttributeInputArgumentAST (const class cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAttributeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalAttributeInputArgumentAST init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalAttributeInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalAttributeInputArgumentAST_init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAttributeName ;


//--- Default constructor
  public: cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalAttributeInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalAttributeInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalAttributeInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalAttributeInputArgumentAST_2E_weak (const class GGS_lexicalAttributeInputArgumentAST & inSource) ;

  public: GGS_lexicalAttributeInputArgumentAST_2E_weak & operator = (const class GGS_lexicalAttributeInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalAttributeInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalAttributeInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalAttributeInputArgumentAST bang_lexicalAttributeInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalAttributeInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalAttributeInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalAttributeInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCharacterInputArgumentAST (const class cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCharacterInputArgumentAST init_21_ (const class GGS_lchar & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterInputArgumentAST_init_21_ (const class GGS_lchar & inOperand0,
                                                          Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterInputArgumentAST (const GGS_lchar & in_mCharacter,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCharacterInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCharacterInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCharacterInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCharacterInputArgumentAST_2E_weak (const class GGS_lexicalCharacterInputArgumentAST & inSource) ;

  public: GGS_lexicalCharacterInputArgumentAST_2E_weak & operator = (const class GGS_lexicalCharacterInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCharacterInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalCharacterInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCharacterInputArgumentAST bang_lexicalCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCharacterInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCharacterInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCharacterInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalUnsignedInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalUnsignedInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalUnsignedInputArgumentAST (const class cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mUnsigned (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalUnsignedInputArgumentAST init_21_ (const class GGS_lbigint & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalUnsignedInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalUnsignedInputArgumentAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                         Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mUnsigned ;


//--- Default constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalUnsignedInputArgumentAST (const GGS_lbigint & in_mUnsigned,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalUnsignedInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalUnsignedInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak (const class GGS_lexicalUnsignedInputArgumentAST & inSource) ;

  public: GGS_lexicalUnsignedInputArgumentAST_2E_weak & operator = (const class GGS_lexicalUnsignedInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalUnsignedInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalUnsignedInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalUnsignedInputArgumentAST bang_lexicalUnsignedInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalUnsignedInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalUnsignedInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalUnsignedInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCurrentCharacterInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalCurrentCharacterInputArgumentAST (const class cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalCurrentCharacterInputArgumentAST init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCurrentCharacterInputArgumentAST_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (const GGS_location & in_mLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalCurrentCharacterInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (const class GGS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

  public: GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & operator = (const class GGS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalCurrentCharacterInputArgumentAST bang_lexicalCurrentCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalCurrentCharacterInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_lexicalFunctionInputArgumentAST (const class cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFunctionName (void) const ;

  public: class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ readProperty_mFunctionActualArgumentList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalFunctionInputArgumentAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalFunctionInputArgumentAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension func generateRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func generateSwiftCocoaRoutineOrFunctionArgument
  public: virtual class GGS_string getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc checkLexicalFunctionCallArgument
  public: virtual void method_checkLexicalFunctionCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc checkLexicalRoutineCallArgument
  public: virtual void method_checkLexicalRoutineCallArgument (class GGS_lexiqueAnalysisContext & arg__ioLexiqueAnalysisContext,
           const class GGS_lexicalTypeEnum arg__inLexicalRoutineFormalArgumentType,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ mProperty_mFunctionActualArgumentList ;


//--- Default constructor
  public: cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                const GGS__5B_lexicalRoutineOrFunctionFormalInputArgumentAST_5D_ & in_mFunctionActualArgumentList,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalFunctionInputArgumentAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_lexicalFunctionInputArgumentAST_2E_weak : public GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_lexicalFunctionInputArgumentAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_lexicalFunctionInputArgumentAST_2E_weak (const class GGS_lexicalFunctionInputArgumentAST & inSource) ;

  public: GGS_lexicalFunctionInputArgumentAST_2E_weak & operator = (const class GGS_lexicalFunctionInputArgumentAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_lexicalFunctionInputArgumentAST_2E_weak init_nil (void) {
    GGS_lexicalFunctionInputArgumentAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_lexicalFunctionInputArgumentAST bang_lexicalFunctionInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_lexicalFunctionInputArgumentAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalFunctionInputArgumentAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_lexicalFunctionInputArgumentAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalArgumentModeAST lexicalFormalModeName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_lexicalFormalModeName (const class GGS_lexicalArgumentModeAST & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_cocoaPointerInFormalArgument (const class GGS_lexicalArgumentModeAST & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTypeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_lexicalTypeMap final {

  public: DownEnumerator_lexicalTypeMap (const class GGS_lexicalTypeMap & inMap) ;

  public: ~ DownEnumerator_lexicalTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_lexicalTypeMap (const DownEnumerator_lexicalTypeMap &) = delete ;
  private: DownEnumerator_lexicalTypeMap & operator = (const DownEnumerator_lexicalTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_lexicalTypeMap final {
  public: UpEnumerator_lexicalTypeMap (const class GGS_lexicalTypeMap & inMap)  ;

  public: ~ UpEnumerator_lexicalTypeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GGS_lexicalTypeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_lexicalTypeMap (const UpEnumerator_lexicalTypeMap &) = delete ;
  private: UpEnumerator_lexicalTypeMap & operator = (const UpEnumerator_lexicalTypeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap final : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_lexicalTypeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_lexicalTypeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_lexicalTypeMap (void) ;

//--- Handle copy
  public: GGS_lexicalTypeMap (const GGS_lexicalTypeMap & inSource) ;
  public: GGS_lexicalTypeMap & operator = (const GGS_lexicalTypeMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_lexicalTypeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_lexicalTypeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTypeMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;
//--------------------------------- GALGAS class functions
  public: static class GGS_lexicalTypeMap class_func_mapWithMapToOverride (const class GGS_lexicalTypeMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMLexicalTypeForKey (class GGS_lexicalTypeEnum constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_lexicalTypeEnum & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_contains (const class GGS_string & constinOperand0
                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_lstring_5D_ getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lexicalTypeMap getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_lexicalTypeMap_2E_element_3F_ readSubcript__3F_ (const class GGS_string & in0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_lexicalTypeMap ;
  friend class DownEnumerator_lexicalTypeMap ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @lexicalTypeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap_2E_element final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GGS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_lexicalTypeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GGS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_lexicalTypeMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_lexicalTypeEnum & in_mLexicalType) ;

//--------------------------------- Copy constructor
  public: GGS_lexicalTypeMap_2E_element (const GGS_lexicalTypeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_lexicalTypeMap_2E_element & operator = (const GGS_lexicalTypeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_lexicalTypeMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_lexicalTypeEnum & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: lexicalTypeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_lexicalTypeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_lexicalTypeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_lexicalTypeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_lexicalTypeMap_2E_element_3F_ (const GGS_lexicalTypeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_lexicalTypeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_lexicalTypeMap_2E_element unwrappedValue (void) const {
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

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: [syntaxComponentAST] array
//--------------------------------------------------------------------------------------------------

class DownEnumerator__5B_syntaxComponentAST_5D_ final {
//--- Constructor
  public: DownEnumerator__5B_syntaxComponentAST_5D_ (const class GGS__5B_syntaxComponentAST_5D_ & inOperand) ;

//--- No copy
  private: DownEnumerator__5B_syntaxComponentAST_5D_ (const DownEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;
  private: DownEnumerator__5B_syntaxComponentAST_5D_ & operator = (const DownEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent >= 0 ; }

//---
  public: inline void gotoNextObject (void) { mCurrent -= 1 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_syntaxComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxComponentAST current_entry (LOCATION_ARGS) const ; // Pour instruction for dans template

//---- Properties
  private: const GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__5B_syntaxComponentAST_5D_ final {
//--- Constructor
  public: UpEnumerator__5B_syntaxComponentAST_5D_ (const class GGS__5B_syntaxComponentAST_5D_ & inOperand) ;

//--- No copy
  private: UpEnumerator__5B_syntaxComponentAST_5D_ (const UpEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;
  private: UpEnumerator__5B_syntaxComponentAST_5D_ & operator = (const UpEnumerator__5B_syntaxComponentAST_5D_ &) = delete ;

//---
  public: inline bool hasCurrentObject (void) const { return mCurrent < mSharedArray.count () ; }

//---
  public: inline void gotoNextObject (void) { mCurrent += 1 ; }

//---
  public: inline void rewind (void) { mCurrent = 0 ; }
  public: inline int32_t index (void) { return mCurrent ; }

//--- Current element access
  public: class GGS_syntaxComponentAST current (LOCATION_ARGS) const ;
  public: class GGS_syntaxComponentAST current_entry (LOCATION_ARGS) const ;

//---- Properties
  private: const GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: int32_t mCurrent ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS__5B_syntaxComponentAST_5D_ final : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GenericArray <GGS_syntaxComponentAST> mSharedArray ;
  private: bool mIsValid ;

//--------------------------------- Default constructor
  public: GGS__5B_syntaxComponentAST_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_syntaxComponentAST_5D_ (const GGS__5B_syntaxComponentAST_5D_ & inSource) ;
  public: GGS__5B_syntaxComponentAST_5D_ & operator = (const GGS__5B_syntaxComponentAST_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override { return mIsValid ; }

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_syntaxComponentAST_5D_ init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- += operator
  public: void plusAssignOperation (const GGS__5B_syntaxComponentAST_5D_ inOperand,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator
  public: void plusPlusAssignOperation (const GGS_syntaxComponentAST & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS__5B_syntaxComponentAST_5D_ add_operation (const GGS__5B_syntaxComponentAST_5D_ & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_syntaxComponentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insert (class GGS_syntaxComponentAST constinArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_remove (class GGS_syntaxComponentAST & outArgument0,
                              class GGS_uint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeFirst (class GGS_syntaxComponentAST & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void setter_removeLast (class GGS_syntaxComponentAST & outArgument0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void setter_set (class GGS_syntaxComponentAST constinArgument0,
                           class GGS_uint constinArgument1,
                           Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentAST getter_first (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_syntaxComponentAST getter_last (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxComponentAST_5D_ getter_removingFirst (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS__5B_syntaxComponentAST_5D_ getter_sublist (const class GGS_uint & constinOperand0,
                                                               const class GGS_uint & constinOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subcripts
  public: class GGS_syntaxComponentAST readSubcript__3F_ (const class GGS_uint & in0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator__5B_syntaxComponentAST_5D_ ;
  friend class DownEnumerator__5B_syntaxComponentAST_5D_ ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_syntaxComponentAST_5D_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syntaxComponentAST struct
//--------------------------------------------------------------------------------------------------

class GGS_syntaxComponentAST final : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSyntaxComponentName ;
  public: inline GGS_lstring readProperty_mSyntaxComponentName (void) const {
    return mProperty_mSyntaxComponentName ;
  }

  public: GGS_lstring mProperty_mImportedLexiqueFilePath ;
  public: inline GGS_lstring readProperty_mImportedLexiqueFilePath (void) const {
    return mProperty_mImportedLexiqueFilePath ;
  }

  public: GGS__5B_nonterminalDeclarationAST_5D_ mProperty_mNonterminalDeclarationList ;
  public: inline GGS__5B_nonterminalDeclarationAST_5D_ readProperty_mNonterminalDeclarationList (void) const {
    return mProperty_mNonterminalDeclarationList ;
  }

  public: GGS__5B_syntaxRuleAST_5D_ mProperty_mRuleList ;
  public: inline GGS__5B_syntaxRuleAST_5D_ readProperty_mRuleList (void) const {
    return mProperty_mRuleList ;
  }

  public: GGS_bool mProperty_mHasTranslateFeature ;
  public: inline GGS_bool readProperty_mHasTranslateFeature (void) const {
    return mProperty_mHasTranslateFeature ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syntaxComponentAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSyntaxComponentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentName = inValue ;
  }

  public: inline void setter_setMImportedLexiqueFilePath (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedLexiqueFilePath = inValue ;
  }

  public: inline void setter_setMNonterminalDeclarationList (const GGS__5B_nonterminalDeclarationAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalDeclarationList = inValue ;
  }

  public: inline void setter_setMRuleList (const GGS__5B_syntaxRuleAST_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleList = inValue ;
  }

  public: inline void setter_setMHasTranslateFeature (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasTranslateFeature = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syntaxComponentAST (const GGS_lstring & in_mSyntaxComponentName,
                                  const GGS_lstring & in_mImportedLexiqueFilePath,
                                  const GGS__5B_nonterminalDeclarationAST_5D_ & in_mNonterminalDeclarationList,
                                  const GGS__5B_syntaxRuleAST_5D_ & in_mRuleList,
                                  const GGS_bool & in_mHasTranslateFeature) ;

//--------------------------------- Copy constructor
  public: GGS_syntaxComponentAST (const GGS_syntaxComponentAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syntaxComponentAST & operator = (const GGS_syntaxComponentAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxComponentAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS__5B_nonterminalDeclarationAST_5D_ & inOperand2,
                                                                  const class GGS__5B_syntaxRuleAST_5D_ & inOperand3,
                                                                  const class GGS_bool & inOperand4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;
//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subcripts


//--------------------------------- Write subcripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentAST ;

