//
//  print.cpp
//  galgas-developer-v3
//
//  Created by Pierre Molinaro on 14/09/2023.
//
//--------------------------------------------------------------------------------------------------

#include "print.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------

#include <iostream>

//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const GGS_string inString,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  if (inString.isValid ()) {
    inCompiler->printMessage (inString.stringValue () + "\n" COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const GGS_string inString,
                        Compiler * inCompiler
                        COMMA_LOCATION_ARGS) {
  if (inString.isValid ()) {
    inCompiler->printMessage (inString.stringValue () COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
