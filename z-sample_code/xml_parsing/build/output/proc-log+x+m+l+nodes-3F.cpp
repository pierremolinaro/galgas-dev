#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "list-xml+node+list.h"
#include "proc-internal-5Flog+x+m+l+nodes-3F-3F-26.h"
#include "proc-log+x+m+l+nodes-3F.h"
#include "proc-print-3F.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'logXMLNodes?'
//
//--------------------------------------------------------------------------------------------------

void routine_logXMLNodes_3F_ (const GGS_xmlNodeList constinArgument_inNodeList,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_1992 = GGS_string::makeEmptyString () ;
  {
  routine_internal_5F_logXMLNodes_3F__3F__26_ (constinArgument_inNodeList, GGS_string::makeEmptyString (), var_s_1992, inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 68)) ;
  }
  {
  routine_print_3F_ (var_s_1992, inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 69)) ;
  }
}


