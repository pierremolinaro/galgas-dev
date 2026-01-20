#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "setter-string-concat+list.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@string concatList'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_concatList (GGS_string & ioObject,
                                 const GGS_stringlist constinArgument_inList,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_stringlist enumerator_1691 (constinArgument_inList) ;
  while (enumerator_1691.hasCurrentObject ()) {
    ioObject.plusAssignOperation(enumerator_1691.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("testsuite_type_categories.ggs", 79)) ;
    enumerator_1691.gotoNextObject () ;
  }
}


