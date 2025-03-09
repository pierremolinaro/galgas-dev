//--------------------------------------------------------------------------------------------------
//
//  SharedAVLStringKeyTree
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
//  AVLTreeStringKeyNode
//--------------------------------------------------------------------------------------------------

class AVLTreeStringKeyNode {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: AVLTreeStringKeyNode * mInfPtr ;
  private: AVLTreeStringKeyNode * mSupPtr ;
  private: int32_t mBalance ;
  public: const String mKey ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: AVLTreeStringKeyNode (const String & inKey) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  public: virtual ~AVLTreeStringKeyNode (void) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: AVLTreeStringKeyNode (const AVLTreeStringKeyNode * inNodePtr) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // No copy
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: AVLTreeStringKeyNode (const AVLTreeStringKeyNode &) = delete ;
  private: AVLTreeStringKeyNode & operator = (const AVLTreeStringKeyNode &) = delete ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private: static void populateCacheArray (const AVLTreeStringKeyNode * inNode,
                                          TC_Array <String> & ioCacheArray) ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  friend class SharedAVLTreeRoot ;

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

} ;

//--------------------------------------------------------------------------------------------------
//  SharedAVLStringKeyTree
//--------------------------------------------------------------------------------------------------

class SharedAVLStringKeyTree final {
//--------------------------------- Private data members
  private: class SharedAVLTreeRoot * mSharedRoot ;

//--------------------------------- Build
  public: static SharedAVLStringKeyTree build (LOCATION_ARGS) ;

//--------------------------------- Accessors
  public: inline bool isValid (void) const { return mSharedRoot != nullptr ; }

//--------------------------------- Drop
  public: void drop (void) ;

//--------------------------------- Default constructor
  public: SharedAVLStringKeyTree () ;

//--------------------------------- Virtual destructor
  public: ~ SharedAVLStringKeyTree (void) ;

//--------------------------------- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--------------------------------- Handle copy
  public: SharedAVLStringKeyTree (const SharedAVLStringKeyTree & inSource) ;
  public: SharedAVLStringKeyTree & operator = (const SharedAVLStringKeyTree & inSource) ;

//--------------------------------- Insert
  public: void insert (const String & inKey,
                       AVLTreeStringKeyNode * & ioObject
                       COMMA_LOCATION_ARGS) ;

  public: AVLTreeStringKeyNode * remove (const String & inKey
                                         COMMA_LOCATION_ARGS) ;

  public: AVLTreeStringKeyNode * nodeForKey (const String & inKey) const ;

  public: int32_t count (void) const ;

} ;

//--------------------------------------------------------------------------------------------------
