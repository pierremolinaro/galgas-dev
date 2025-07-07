//--------------------------------------------------------------------------------------------------
//
//  SharedObject : Base class for GALGAS object handling                                       
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2009, ..., 2025 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#pragma once

//--------------------------------------------------------------------------------------------------

#include <type_traits>
#include <utility>

//--------------------------------------------------------------------------------------------------

#include "macroAssert.h"
#include "MF_MemoryControl.h"

//--------------------------------------------------------------------------------------------------

class SharedObject {
//--- Properties for debug
  #ifndef DO_NOT_GENERATE_CHECKINGS
  //--- Object index
    public: const uint32_t mObjectIndex ;
  //--- Creation location
    public: const char * const mCreationFile ;
    public: const int mCreationLine ;
  //--- Link between existing instances
    private: SharedObject * mPtrToPreviousObject ;
    private: SharedObject * mPtrToNextObject ;
  #endif

//--- Retain count
  private: mutable uint64_t mRetainCount = 0 ;

  public: inline bool isUniquelyReferenced (void) const { return mRetainCount == 0 ; }

  public: static inline void retain (const SharedObject * inObject) {
    if (inObject != nullptr) {
      inObject->mRetainCount += 1 ;
    }
  }

  public: static inline void release (const SharedObject * inObject) {
    if (inObject != nullptr) {
      if (inObject->mRetainCount == 0) {
        macroMyDelete (inObject) ;
      }else{
        inObject->mRetainCount -= 1 ;
      }
    }
  }

//--- Default Constructor
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: SharedObject (LOCATION_ARGS) ;
  #else
    protected: SharedObject (LOCATION_ARGS) = default ;
  #endif

//--- Virtual Destructor
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~SharedObject (void) ;
  #else
    protected: virtual ~SharedObject (void) = default ;
  #endif

//--- No copy
  private: SharedObject (const SharedObject &) = delete ;
  private: SharedObject & operator = (const SharedObject &) = delete ;

//--- Handling Pointer checking
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: static void checkAllObjectsHaveBeenReleased (void) ;
  #endif
} ;

//--------------------------------------------------------------------------------------------------
//   macroValidSharedObject                                                                      
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define macroValidSharedObject(OBJECT,TYPE) { \
    macroValidPointer (OBJECT) ; \
    macroAssert (dynamic_cast <const TYPE *> (OBJECT) != nullptr, "'"#OBJECT"' is not an instance of '"#TYPE" *'", 0, 0) ; \
  }
#else
  #define macroValidSharedObject(OBJECT,TYPE)
#endif

//--------------------------------------------------------------------------------------------------
//   macroValidSharedObjectThere                                                                 
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define macroValidSharedObjectThere(OBJECT,TYPE) { \
    macroValidPointerThere (OBJECT) ; \
    macroAssertThere (dynamic_cast <const TYPE *> (OBJECT) != nullptr, "'"#OBJECT"' is not an instance of '"#TYPE" *'", 0, 0) ; \
  }
#else
  #define macroValidSharedObjectThere(OBJECT,TYPE)
#endif

//--------------------------------------------------------------------------------------------------
//   macroNullOrValidSharedObject                                                                
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define macroNullOrValidSharedObject(OBJECT,TYPE) \
    if (nullptr != (OBJECT)) { \
      macroValidPointer (OBJECT) ; \
      macroAssert (dynamic_cast <const TYPE *> (OBJECT) != nullptr, "'"#OBJECT"' is not an instance of '"#TYPE" *'", 0, 0) ; \
    }
#else
  #define macroNullOrValidSharedObject(OBJECT,TYPE)
#endif

//--------------------------------------------------------------------------------------------------
//   macroNullOrValidSharedObjectThere                                                           
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define macroNullOrValidSharedObjectThere(OBJECT,TYPE) \
    if (nullptr != (OBJECT)) { \
      macroValidPointerThere (OBJECT) ; \
      macroAssertThere (dynamic_cast <const TYPE *> (OBJECT) != nullptr, "'"#OBJECT"' is not an instance of '"#TYPE" *'", 0, 0) ; \
    }
#else
  #define macroNullOrValidSharedObjectThere(OBJECT,TYPE)
#endif

//--------------------------------------------------------------------------------------------------
//   macroAssignSharedObject                                                                     
//--------------------------------------------------------------------------------------------------

#define macroAssignSharedObject(TARGET_PTR,SOURCE_PTR) \
  { SharedObject::retain (SOURCE_PTR) ; SharedObject::release (TARGET_PTR) ; TARGET_PTR = SOURCE_PTR ; }

//--------------------------------------------------------------------------------------------------
//   macroAssignSharedObjectThere                                                                
//--------------------------------------------------------------------------------------------------

#define macroAssignSharedObjectThere(TARGET_PTR,SOURCE_PTR) \
  { SharedObject::retain (SOURCE_PTR) ; SharedObject::release (TARGET_PTR) ; TARGET_PTR = SOURCE_PTR ; }

//--------------------------------------------------------------------------------------------------
//   macroDetachSharedObject                                                                     
//--------------------------------------------------------------------------------------------------

#define macroDetachSharedObject(PTR) \
  { SharedObject::release (PTR) ; PTR = nullptr ; }

//--------------------------------------------------------------------------------------------------
//   macroDetachSharedObjectThere                                                                
//--------------------------------------------------------------------------------------------------

#define macroDetachSharedObjectThere(PTR) \
  { SharedObject::release (PTR) ; PTR = nullptr ; }

//--------------------------------------------------------------------------------------------------
//   macroUniqueSharedObject                                                                     
//--------------------------------------------------------------------------------------------------

#define macroUniqueSharedObject(PTR) \
  { macroAssert ((PTR)->isUniquelyReferenced (), "isUniquelyReferenced () is false", 0, 0) ; }

//--------------------------------------------------------------------------------------------------
//   macroUniqueSharedObjectThere                                                                
//--------------------------------------------------------------------------------------------------

#define macroUniqueSharedObjectThere(PTR) \
  { macroAssertThere ((PTR)->isUniquelyReferenced (), "isUniquelyReferenced () is false", 0, 0) ; }

//--------------------------------------------------------------------------------------------------
//MARK: Predeclarations
//--------------------------------------------------------------------------------------------------

template <typename TYPE> class OptionalSharedRef ;

//template <typename TYPE> class WeakSharedRef ;

//template <typename TYPE> class OptionalSharedValue ;

class ProxyHeader ;

//--------------------------------------------------------------------------------------------------
//MARK: class SharedHeader
//--------------------------------------------------------------------------------------------------

class SharedHeader : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedHeader (LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Virtual destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ SharedHeader (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedHeader (const SharedHeader &) = delete ;
  private: SharedHeader & operator = (const SharedHeader &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Private property
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: ProxyHeader * mProxyPtr ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Friends
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  template <typename TYPE> friend class OptionalSharedRef ;
  template <typename TYPE> friend class StrongSharedRef ;
  template <typename TYPE> friend class WeakSharedRef ;
//  template <typename TYPE> friend class OptionalSharedValue ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK: ProxyHeader
//--------------------------------------------------------------------------------------------------

class ProxyHeader : public SharedHeader {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: ProxyHeader (SharedHeader * inObjectPtr COMMA_LOCATION_ARGS) :
  SharedHeader (THERE),
  mObjectPtr (inObjectPtr) {
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Private property
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedHeader * mObjectPtr ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: ProxyHeader (const ProxyHeader &) = delete ;
  private: ProxyHeader & operator = (const ProxyHeader &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Friends
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  template <typename TYPE> friend class WeakSharedRef ;
  template <typename TYPE> friend class OptionalSharedRef ;
  template <typename TYPE> friend class StrongSharedRef ;
  friend class SharedHeader ;
} ;

//--------------------------------------------------------------------------------------------------
//MARK: OptionalSharedRef
//--------------------------------------------------------------------------------------------------

template <typename TYPE> class OptionalSharedRef {
//  static_assert (std::is_base_of <SharedObject, TYPE>::value, "TYPE doit dériver de SharedObject");

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Private property
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: TYPE * mSharedPtr ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Default constructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef (void) : mSharedPtr (nullptr) { }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Virtual destructor
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~ OptionalSharedRef (void) {
    SharedObject::release (mSharedPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Set to nil
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void setToNil (void) {
    SharedObject::release (mSharedPtr) ;
    mSharedPtr = nullptr ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Make
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: template <class... _Args> static OptionalSharedRef <TYPE> make (_Args&&... __args) {
    OptionalSharedRef <TYPE> result ;
    macroMyNew (result.mSharedPtr, TYPE (std::forward<_Args>(__args)...)) ;
    return result ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Insulate
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void insulate (LOCATION_ARGS) {
    if ((mSharedPtr != nullptr) && !mSharedPtr->isUniquelyReferenced ()) {
      TYPE * newPtr = nullptr ;
      macroMyNew (newPtr, TYPE (mSharedPtr COMMA_THERE)) ;
      macroAssignSharedObject (mSharedPtr, newPtr) ;
      macroDetachSharedObject (newPtr) ;
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Accessors
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: inline bool isNotNil (void) const { return mSharedPtr != nullptr ; }
  public: inline bool isNil (void) const { return mSharedPtr == nullptr ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: TYPE * operator -> (void) const { return mSharedPtr ; }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Swap
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void swap (OptionalSharedRef <TYPE> & ioOperand) {
    TYPE * temp = mSharedPtr ;
    mSharedPtr = ioOperand.mSharedPtr ;
    ioOperand.mSharedPtr = temp ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Rotate Left
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: void rotateOwnershipLeft (OptionalSharedRef <TYPE> & ioOperand1,
                                    OptionalSharedRef <TYPE> & ioOperand2) {
    TYPE * temp0 = mSharedPtr ;
    TYPE * temp1 = ioOperand1.mSharedPtr ;
    TYPE * temp2 = ioOperand2.mSharedPtr ;
    mSharedPtr = temp1 ;
    ioOperand1.mSharedPtr = temp2 ;
    ioOperand2.mSharedPtr = temp0 ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from OptionalSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef (const OptionalSharedRef <TYPE> & inSource) :
  mSharedPtr (inSource.mSharedPtr) {
    SharedObject::retain (mSharedPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from OptionalSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: template <typename SOURCE>
  OptionalSharedRef (const OptionalSharedRef <SOURCE> & inSource) :
  mSharedPtr (inSource.mSharedPtr) {
    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
    SharedObject::retain (mSharedPtr) ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from StrongSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: OptionalSharedRef (const StrongSharedRef <TYPE> & inSource) :
//  mSharedPtr (inSource.mSharedPtr) {
//    SharedObject::retain (mSharedPtr COMMA_HERE) ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from StrongSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: template <typename SOURCE> OptionalSharedRef (const StrongSharedRef <SOURCE> & inSource) :
//  mSharedPtr (inSource.mSharedPtr) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    SharedObject::retain (mSharedPtr COMMA_HERE) ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from WeakSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: OptionalSharedRef (const WeakSharedRef <TYPE> & inSource) :
//  mSharedPtr (nullptr) {
//    if (inSource.mSharedProxyHeader != nullptr) {
//      TYPE * object = (TYPE *) inSource.mSharedProxyHeader->mObjectPtr ;
//      if (nullptr != object) {
//        mSharedPtr = object ;
//        object->mRetainCount += 1 ;
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Copy constructor from WeakSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: template <typename SOURCE> OptionalSharedRef (const WeakSharedRef <SOURCE> & inSource) :
//  mSharedPtr (nullptr) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    if (inSource.mSharedProxyHeader != nullptr) {
//      TYPE * object = (TYPE *) inSource.mSharedProxyHeader->mObjectPtr ;
//      if (nullptr != object) {
//        mSharedPtr = object ;
//        object->mRetainCount += 1 ;
//      }
//    }
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from StrongSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: OptionalSharedRef <TYPE> & operator = (const StrongSharedRef <TYPE> & inSource) {
//  //--- Retain source
//    inSource.mSharedPtr->mRetainCount += 1 ;
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = inSource.mSharedPtr ;
//  //---
//    return *this ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from StrongSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: template <typename SOURCE>
//  OptionalSharedRef <TYPE> & operator = (const StrongSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//  //--- Retain source
//    inSource.mSharedPtr->mRetainCount += 1 ;
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = inSource.mSharedPtr ;
//  //---
//    return *this ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from OptionalSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: OptionalSharedRef <TYPE> & operator = (const OptionalSharedRef <TYPE> & inSource) {
    SharedObject::retain (inSource.mSharedPtr) ;
    SharedObject::release (mSharedPtr) ;
    mSharedPtr = inSource.mSharedPtr ;
    return *this ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from OptionalSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: template <typename SOURCE>
  OptionalSharedRef <TYPE> & operator = (const OptionalSharedRef <SOURCE> & inSource) {
    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
    SharedObject::retain (inSource.mSharedPtr) ;
    SharedObject::release (mSharedPtr) ;
    mSharedPtr = inSource.mSharedPtr ;
    return *this ;
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from WeakSharedRef <TYPE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: OptionalSharedRef <TYPE> & operator = (const WeakSharedRef <TYPE> & inSource) {
//    TYPE * ptr = nullptr ;
//    if (inSource.mSharedProxyHeader != nullptr) {
//      ptr = (TYPE *) inSource.mSharedProxyHeader->mObjectPtr ;
//    }
//  //--- Retain source
//    if (ptr != nullptr) {
//      ptr->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = ptr ;
//  //---
//    return *this ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Assignment from WeakSharedRef <SOURCE>
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  public: template <typename SOURCE>
//  OptionalSharedRef <TYPE> & operator = (const WeakSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    TYPE * ptr = nullptr ;
//    if (inSource.mSharedProxyHeader != nullptr) {
//      ptr = (TYPE *) inSource.mSharedProxyHeader->mObjectPtr ;
//    }
//  //--- Retain source
//    if (ptr != nullptr) {
//      ptr->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = ptr ;
//  //---
//    return *this ;
//  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Friends
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  template <typename SOURCE> friend class OptionalSharedRef ;
  template <typename SOURCE> friend class WeakSharedRef ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//MARK: WeakSharedRef
//--------------------------------------------------------------------------------------------------

//template <typename TYPE> class WeakSharedRef {
//
//  static_assert (std::is_base_of <SharedHeader, TYPE>::value, "TYPE doit dériver de SharedHeader");
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Private property
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: ProxyHeader * mSharedProxyHeader ;
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Default constructor
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef (void) : mSharedProxyHeader (nullptr) { }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Virtual destructor
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: virtual ~ WeakSharedRef (void) { setToNil () ; }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Set to nil
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: void setToNil (void) {
//    if (mSharedProxyHeader != nullptr) {
//      if (mSharedProxyHeader->isUniquelyReferenced ()) {
//        if (mSharedProxyHeader->mObjectPtr != nullptr) {
//          mSharedProxyHeader->mObjectPtr->mProxyPtr = nullptr ;
//        }
//        macroMyDelete (mSharedProxyHeader) ;
//      }else{
//        SharedObject::release (mSharedProxyHeader COMMA_HERE) ;
//      }
//      mSharedProxyHeader = nullptr ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from WeakSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef (const WeakSharedRef <TYPE> & inSource) :
//  mSharedProxyHeader (inSource.mSharedProxyHeader) {
//    if (mSharedProxyHeader != nullptr) {
//      SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from WeakSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE>
//  WeakSharedRef (const WeakSharedRef <SOURCE> & inSource) :
//  mSharedProxyHeader (inSource.mSharedProxyHeader) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    if (mSharedProxyHeader != nullptr) {
//      SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from StrongSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef (const StrongSharedRef <TYPE> & inSource) :
//  mSharedProxyHeader (nullptr) {
//    mSharedProxyHeader = inSource.mSharedPtr->mProxyPtr ;
//    if (mSharedProxyHeader == nullptr) {
//      macroMyNew (mSharedProxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//      inSource.mSharedPtr->mProxyPtr = mSharedProxyHeader ;
//    }else{
//      SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from StrongSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE> WeakSharedRef (const StrongSharedRef <SOURCE> & inSource) :
//  mSharedProxyHeader (nullptr) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    mSharedProxyHeader = inSource.mSharedPtr->mProxyPtr ;
//    if (mSharedProxyHeader == nullptr) {
//      macroMyNew (mSharedProxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//      inSource.mSharedPtr->mProxyPtr = mSharedProxyHeader ;
//    }else{
//      SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from OptionalSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef (const OptionalSharedRef <TYPE> & inSource) :
//  mSharedProxyHeader (nullptr) {
//    if (inSource.mSharedPtr != nullptr) {
//      mSharedProxyHeader = inSource.mSharedPtr->mProxyPtr ;
//      if (mSharedProxyHeader == nullptr) {
//        macroMyNew (mSharedProxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//        inSource.mSharedPtr->mProxyPtr = mSharedProxyHeader ;
//      }else{
//      SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//      }
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from OptionalSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE> WeakSharedRef (const OptionalSharedRef <SOURCE> & inSource) :
//  mSharedProxyHeader (nullptr) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    if (inSource.mSharedPtr != nullptr) {
//      mSharedProxyHeader = inSource.mSharedPtr->mProxyPtr ;
//      if (mSharedProxyHeader == nullptr) {
//        macroMyNew (mSharedProxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//        inSource.mSharedPtr->mProxyPtr = mSharedProxyHeader ;
//      }else{
//        SharedObject::retain (mSharedProxyHeader COMMA_HERE) ;
//      }
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator WeakSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef <TYPE> & operator = (const WeakSharedRef <TYPE> & inSource) {
//  //--- Retain source
//    if (inSource.mSharedProxyHeader != nullptr) {
//      inSource.mSharedProxyHeader->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = inSource.mSharedProxyHeader ;
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator WeakSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE>
//  WeakSharedRef <TYPE> & operator = (const WeakSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//  //--- Retain source
//    if (inSource.mSharedProxyHeader != nullptr) {
//      inSource.mSharedProxyHeader->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = inSource.mSharedProxyHeader ;
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator StrongSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef <TYPE> & operator = (const StrongSharedRef <TYPE> & inSource) {
//  //--- Get and retain proxy header
//    ProxyHeader * proxyHeader = inSource.mSharedPtr->mProxyPtr ;
//    if (proxyHeader == nullptr) {
//      proxyHeader = new ProxyHeader (inSource.mSharedPtr) ;
//      inSource.mSharedPtr->mProxyPtr = proxyHeader ;
//    }else{
//      SharedObject::retain (proxyHeader COMMA_HERE) ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = proxyHeader ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator StrongSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE>
//  WeakSharedRef <TYPE> & operator = (const StrongSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//  //--- Get and retain proxy header
//    ProxyHeader * proxyHeader = inSource.mSharedPtr->mProxyPtr ;
//    if (proxyHeader == nullptr) {
//      macroMyNew (proxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//      inSource.mSharedPtr->mProxyPtr = proxyHeader ;
//    }else{
//      SharedObject::retain (proxyHeader COMMA_HERE) ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = proxyHeader ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator OptionalSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: WeakSharedRef <TYPE> & operator = (const OptionalSharedRef <TYPE> & inSource) {
//  //--- Get and retain proxy header
//    ProxyHeader * proxyHeader = nullptr ;
//    if (inSource.mSharedPtr != nullptr) {
//      proxyHeader = inSource.mSharedPtr->mProxyPtr ;
//      if (proxyHeader == nullptr) {
//        macroMyNew (proxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//        inSource.mSharedPtr->mProxyPtr = proxyHeader ;
//      }else{
//        SharedObject::retain (proxyHeader COMMA_HERE) ;
//      }
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = proxyHeader ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment operator OptionalSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE> WeakSharedRef <TYPE> & operator = (const OptionalSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//  //--- Get and retain proxy header
//    ProxyHeader * proxyHeader = nullptr ;
//    if (inSource.mSharedPtr != nullptr) {
//      proxyHeader = inSource.mSharedPtr->mProxyPtr ;
//      if (proxyHeader == nullptr) {
//        macroMyNew (proxyHeader, ProxyHeader (inSource.mSharedPtr COMMA_HERE)) ;
//        inSource.mSharedPtr->mProxyPtr = proxyHeader ;
//      }else{
//        SharedObject::retain (proxyHeader COMMA_HERE) ;
//      }
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedProxyHeader = proxyHeader ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Friends
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  template <typename SOURCE> friend class WeakSharedRef ;
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//} ;

//--------------------------------------------------------------------------------------------------

//template <typename TYPE> class StrongSharedRef {
//
//  static_assert (std::is_base_of <SharedHeader, TYPE>::value, "TYPE doit dériver de SharedHeader");
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Private property
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  private: TYPE * mSharedPtr ;
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Default constructor
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  private: StrongSharedRef (void) = delete ;
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Private constructor
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  private: StrongSharedRef (TYPE * inObject) : mSharedPtr (inObject) { }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Virtual destructor
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: virtual ~ StrongSharedRef (void) { setToNil () ; }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Set to nil
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  private: void setToNil (void) {
//    if (mSharedPtr != nullptr) {
//      if (mSharedPtr->mRetainCount == 0) {
//        if (mSharedPtr->mProxyPtr != nullptr) {
//          mSharedPtr->mProxyPtr->mObjectPtr = nullptr ;
//        }
//        macroMyDelete (mSharedPtr) ;
//      }else{
//        mSharedPtr->mRetainCount -= 1 ; // Release
//      }
//      mSharedPtr = nullptr ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Make
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <class... _Args> static StrongSharedRef <TYPE> make (_Args&&... __args) {
//    TYPE * ptr = new TYPE (std::forward<_Args>(__args)...) ;
//    StrongSharedRef <TYPE> result (ptr) ;
//    return result ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from StrongSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: StrongSharedRef (const StrongSharedRef <TYPE> & inSource) :
//  mSharedPtr (inSource.mSharedPtr) {
//    if (mSharedPtr != nullptr) {
//      mSharedPtr->mRetainCount += 1 ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Copy constructor from StrongSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE>
//  StrongSharedRef (const StrongSharedRef <SOURCE> & inSource) :
//  mSharedPtr (inSource.mSharedPtr) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//    if (mSharedPtr != nullptr) {
//      mSharedPtr->mRetainCount += 1 ;
//    }
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment from StrongSharedRef <TYPE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: StrongSharedRef <TYPE> & operator = (const StrongSharedRef <TYPE> & inSource) {
//  //--- Retain source
//    if (inSource.mSharedPtr != nullptr) {
//      inSource.mSharedPtr->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = inSource.mSharedPtr ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//  //   Assignment from StrongSharedRef <SOURCE>
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//  public: template <typename SOURCE>
//  StrongSharedRef <TYPE> & operator = (const StrongSharedRef <SOURCE> & inSource) {
//    static_assert (std::is_base_of <TYPE, SOURCE>::value, "SOURCE doit dériver de TYPE");
//  //--- Retain source
//    if (inSource.mSharedPtr != nullptr) {
//      inSource.mSharedPtr->mRetainCount += 1 ;
//    }
//  //--- Release target
//    setToNil () ;
//  //--- Make assigmnent
//    mSharedPtr = inSource.mSharedPtr ;
//  //---
//    return *this ;
//  }
//
//  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
//} ;

//--------------------------------------------------------------------------------------------------
