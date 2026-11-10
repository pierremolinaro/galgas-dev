//--------------------------------------------------------------------------------------------------
//
//  Copyright (C) 2015, ..., 2015 Pierre Molinaro.
//
//--------------------------------------------------------------------------------------------------

#include "C_galgas_quiet_option.h"
#include "F_verbose_output.h"

//--------------------------------------------------------------------------------------------------

BoolCommandLineOption
gOption_galgas_5F_builtin_5F_options_quiet_5F_output ("galgas_builtin_options",
                                                      "quiet_output",
                                                      'q',
                                                      "quiet",
                                                      "Quiet Output",
                                                      false) ; // Not visible in GALGAS


//--------------------------------------------------------------------------------------------------

bool verboseOutput (void) {
  return !gOption_galgas_5F_builtin_5F_options_quiet_5F_output.readProperty_value () ;
}

//--------------------------------------------------------------------------------------------------
