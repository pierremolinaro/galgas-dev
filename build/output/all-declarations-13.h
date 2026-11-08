#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_externTypeGetter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeGetter_5D_ (const GGS__5B_externTypeGetter_5D_ & inSource) ;
  public: GGS__5B_externTypeGetter_5D_ & operator = (const GGS__5B_externTypeGetter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeGetter_5D_ ;
  friend class DownEnumerator__5B_externTypeGetter_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeGetter_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_externTypeGetter_5D_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_externTypeGetter_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_externTypeGetter constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_externTypeGetter & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_externTypeGetter & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_externTypeGetter & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_externTypeGetter & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_externTypeGetter & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_externTypeGetter readSubscript__3F_ (const class GGS_uint & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



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

class GGS_externTypeGetter : public AC_GALGAS_root {
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeGetter extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_externTypeSetter_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeSetter_5D_ (const GGS__5B_externTypeSetter_5D_ & inSource) ;
  public: GGS__5B_externTypeSetter_5D_ & operator = (const GGS__5B_externTypeSetter_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeSetter_5D_ ;
  friend class DownEnumerator__5B_externTypeSetter_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeSetter_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_externTypeSetter_5D_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_externTypeSetter_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_externTypeSetter constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_externTypeSetter & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_externTypeSetter & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_externTypeSetter & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_externTypeSetter & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_externTypeSetter & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_externTypeSetter readSubscript__3F_ (const class GGS_uint & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



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

class GGS_externTypeSetter : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSetterName ;
  public: inline GGS_lstring readProperty_mSetterName (void) const {
    return mProperty_mSetterName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalParameterList (void) const {
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

  public: inline void setter_setMFormalParameterList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externTypeSetter (const GGS_lstring & in_mSetterName,
                                const GGS_formalParameterListAST & in_mFormalParameterList) ;

//--------------------------------- Copy constructor
  public: GGS_externTypeSetter (const GGS_externTypeSetter & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externTypeSetter & operator = (const GGS_externTypeSetter & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeSetter init_21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_formalParameterListAST & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeSetter extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent >= 0 ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent -= 1 ;
  }

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
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }

//---
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

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

//--------------------------------- Default constructor
  public: GGS__5B_externTypeMethod_5D_ (void) ;

//--------------------------------- Handle copy
  public: GGS__5B_externTypeMethod_5D_ (const GGS__5B_externTypeMethod_5D_ & inSource) ;
  public: GGS__5B_externTypeMethod_5D_ & operator = (const GGS__5B_externTypeMethod_5D_ & inSource) ;

//--------------------------------- Direct access
  public: void removeAll (void) ;
  public: inline uint32_t count (void) const { return uint32_t (mSharedArray.count ()) ; }

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;

  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
  friend class UpEnumerator__5B_externTypeMethod_5D_ ;
  friend class DownEnumerator__5B_externTypeMethod_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__5B_externTypeMethod_5D_ init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__5B_externTypeMethod_5D_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS__5B_externTypeMethod_5D_ inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- ++= operator, collection value
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

  public: void setter_insertAtIndex (class GGS_externTypeMethod constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_externTypeMethod & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_externTypeMethod & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAll (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_externTypeMethod & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_externTypeMethod & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_externTypeMethod & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_externTypeMethod readSubscript__3F_ (const class GGS_uint & in0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;



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

class GGS_externTypeMethod : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: inline GGS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GGS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GGS_formalParameterListAST readProperty_mFormalParameterList (void) const {
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

  public: inline void setter_setMFormalParameterList (const GGS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externTypeMethod (const GGS_lstring & in_mMethodName,
                                const GGS_formalParameterListAST & in_mFormalParameterList,
                                const GGS_location & in_mDeclarationLocation) ;

//--------------------------------- Copy constructor
  public: GGS_externTypeMethod (const GGS_externTypeMethod & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externTypeMethod & operator = (const GGS_externTypeMethod & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externTypeMethod init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                        const class GGS_formalParameterListAST & inOperand1,
                                                        const class GGS_location & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeMethod extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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
                                                       class Compiler * inCompiler
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeDeclarationForGeneration extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externTypeDeclarationForGeneration_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externTypeDeclarationForGeneration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externTypeDeclarationForGeneration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2E_weak ;

