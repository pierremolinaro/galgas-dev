//----------------------------------------------------------------------------------------------------------------------
//
//  acStrongPtr_class : Base class for reference class class
//
//  This file is part of libpm library
//
//  Copyright (C) 2021, ..., 2021 Pierre Molinaro.
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
//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/acStrongPtr_class.h"
#include "galgas2/cPtr_weakReference_class.h"
#include "utilities/cpp-allocation.h"

//----------------------------------------------------------------------------------------------------------------------

acStrongPtr_class::acStrongPtr_class (LOCATION_ARGS) :
acPtr_class (THERE),
mProxy (NULL) {
}

//----------------------------------------------------------------------------------------------------------------------

acStrongPtr_class::~ acStrongPtr_class (void) {
  if (mProxy != NULL) {
    mProxy->mStrongObject = NULL ;
    macroDetachSharedObject (mProxy) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReference_class * acStrongPtr_class::getProxy (void) {
  if (mProxy == NULL) {
    macroMyNew (mProxy, cPtr_weakReference_class (HERE)) ;
    mProxy->mStrongObject = this ;
  }
  return mProxy ;
}

//----------------------------------------------------------------------------------------------------------------------
