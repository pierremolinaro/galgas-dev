//--------------------------------------------------------------------------------------------------
//
//  SharedStringMap
//
//  This file is part of libpm library
//
//  Copyright (C) 2025, ..., 2025 Pierre Molinaro.
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

#include "SharedObject.h"
#include "String-class.h"

//--------------------------------------------------------------------------------------------------
//  SharedStringMapNode
//--------------------------------------------------------------------------------------------------

class SharedStringMapNode : public SharedObject {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: OptionalSharedRef <SharedStringMapNode> mInfPtr ;
  private: OptionalSharedRef <SharedStringMapNode> mSupPtr ;
  private: int32_t mBalance ;
  public: const String mKey ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedStringMapNode (const String & inKey
                               COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~SharedStringMapNode (void) = default ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: SharedStringMapNode (const OptionalSharedRef <SharedStringMapNode> & inNodePtr
                               COMMA_LOCATION_ARGS) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: SharedStringMapNode (const SharedStringMapNode &) = delete ;
  private: SharedStringMapNode & operator = (const SharedStringMapNode &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

//  private: static void populateCacheArray (SharedStringMapNode * inNode,
//                                           TC_Array <SharedStringMapNode *> & ioCacheArray) ;

  private: static void populateStringArray (const OptionalSharedRef <SharedStringMapNode> & inNode,
                                            TC_Array <String> & ioStringArray) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class SharedStringMapRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  SharedStringMap
//--------------------------------------------------------------------------------------------------

class SharedStringMapRoot ;

//--------------------------------------------------------------------------------------------------

class SharedStringMap final {
//--------------------------------- Private data members
  private: OptionalSharedRef <SharedStringMapRoot> mSharedRoot ;

//--------------------------------- Build
  public: static SharedStringMap build (LOCATION_ARGS) ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const { return mSharedRoot.isNotNil () ; }

//--------------------------------- Drop
  public: void drop (void) ;

//--------------------------------- Default constructor
  public: SharedStringMap () ;

//--------------------------------- Destructor
  public: ~ SharedStringMap (void) ;

//--------------------------------- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--------------------------------- Handle copy
  public: SharedStringMap (const SharedStringMap & inSource) ;
  public: SharedStringMap & operator = (const SharedStringMap & inSource) ;

//--------------------------------- Insert
  public: void insert (OptionalSharedRef <SharedStringMapNode> & ioObject
                       COMMA_LOCATION_ARGS) ;

  public: OptionalSharedRef <SharedStringMapNode> removeAndReturnRemovedNode (const String & inKey
                                                                              COMMA_LOCATION_ARGS) ;

  public: OptionalSharedRef <SharedStringMapNode> nodeForKey (const String & inKey) const ;

  public: int32_t count (void) const ;

  public: String rootNodeKey (void) const ;

//  public: TC_Array <SharedStringMapNode *> unsecureOrderedPointerArray (void) const ;

  public: TC_Array <String> sortedKeyArray (void) const ;

} ;

//--------------------------------------------------------------------------------------------------
