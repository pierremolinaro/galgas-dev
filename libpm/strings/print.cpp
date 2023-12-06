//
//  print.cpp
//  galgas-developer-v3
//
//  Created by Pierre Molinaro on 14/09/2023.
//
//----------------------------------------------------------------------------------------------------------------------

#include "print.h"
#include <iostream>

//----------------------------------------------------------------------------------------------------------------------

void routine_println (const GALGAS_string inString,
                      C_Compiler * /* inCompiler */
                      COMMA_LOCATION_ARGS) {
  if (inString.isValid ()) {
    std::cout << inString.stringValue ().cString (THERE) << "\n" ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void routine_print (const GALGAS_string inString,
                    C_Compiler * /* inCompiler */
                    COMMA_LOCATION_ARGS) {
  if (inString.isValid ()) {
    std::cout << inString.stringValue ().cString (THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
