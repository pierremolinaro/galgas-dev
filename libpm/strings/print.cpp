//
//  print.cpp
//  galgas-developer-v3
//
//  Created by Pierre Molinaro on 14/09/2023.
//
//--------------------------------------------------------------------------------------------------

#include "print.h"
#include <iostream>

//--------------------------------------------------------------------------------------------------

void routine_println (const GALGAS_string inString,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) {
  if (inString.isValid ()) {
    gCout.addString (inString.stringValue ()) ;
    gCout.addNL () ; ;
  }
}

//--------------------------------------------------------------------------------------------------

void routine_print (const GALGAS_string inString,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) {
  if (inString.isValid ()) {
    gCout.addString (inString.stringValue ()) ;
  }
}

//--------------------------------------------------------------------------------------------------
