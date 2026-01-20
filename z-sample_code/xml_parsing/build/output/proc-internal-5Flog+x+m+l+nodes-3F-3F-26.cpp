#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-xml+node.h"
#include "enum-xml+node+type.h"
#include "list-xml+node+list.h"
#include "map-xml+attribute+map.h"
#include "proc-internal-5Flog+x+m+l+nodes-3F-3F-26.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'internal_logXMLNodes??&'
//
//--------------------------------------------------------------------------------------------------

void routine_internal_5F_logXMLNodes_3F__3F__26_ (const GGS_xmlNodeList constinArgument_inNodeList,
                                                  const GGS_string constinArgument_inIndentationString,
                                                  GGS_string & ioArgument_ioString,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_xmlNodeList enumerator_923 (constinArgument_inNodeList) ;
  while (enumerator_923.hasCurrentObject ()) {
    ioArgument_ioString.plusAssignOperation(constinArgument_inIndentationString, inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 39)) ;
    switch (enumerator_923.current_node (HERE).readProperty_mType ().enumValue ()) {
    case GGS_xmlNodeType::Enumeration::invalid:
      break ;
    case GGS_xmlNodeType::Enumeration::enum_element:
      {
        ioArgument_ioString.plusAssignOperation(GGS_string ("ELEMENT '").add_operation (enumerator_923.current_node (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 42)).add_operation (GGS_string ("' {"), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 42)) ;
        UpEnumerator_xmlAttributeMap enumerator_1089 (enumerator_923.current_node (HERE).readProperty_attributeMap ()) ;
        while (enumerator_1089.hasCurrentObject ()) {
          ioArgument_ioString.plusAssignOperation(GGS_string ("'").add_operation (enumerator_1089.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 44)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 44)) ;
          ioArgument_ioString.plusAssignOperation(enumerator_1089.current_lkey (HERE).readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 45)).getter_string (SOURCE_FILE ("xml_types.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 45)) ;
          ioArgument_ioString.plusAssignOperation(GGS_string (":").add_operation (enumerator_1089.current_lkey (HERE).readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 46)).getter_string (SOURCE_FILE ("xml_types.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 46)) ;
          ioArgument_ioString.plusAssignOperation(GGS_string (":").add_operation (enumerator_1089.current_lkey (HERE).readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 47)).getter_string (SOURCE_FILE ("xml_types.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 47)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 47)) ;
          ioArgument_ioString.plusAssignOperation(GGS_string (" -> '").add_operation (enumerator_1089.current_value (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 48)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 48)) ;
          ioArgument_ioString.plusAssignOperation(enumerator_1089.current_value (HERE).readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 49)).getter_string (SOURCE_FILE ("xml_types.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 49)) ;
          ioArgument_ioString.plusAssignOperation(GGS_string (":").add_operation (enumerator_1089.current_value (HERE).readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 50)).getter_string (SOURCE_FILE ("xml_types.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 50)) ;
          ioArgument_ioString.plusAssignOperation(GGS_string (":").add_operation (enumerator_1089.current_value (HERE).readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 51)).getter_string (SOURCE_FILE ("xml_types.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 51)) ;
          enumerator_1089.gotoNextObject () ;
          if (enumerator_1089.hasCurrentObject ()) {
            ioArgument_ioString.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 52)) ;
          }
        }
        ioArgument_ioString.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 54)) ;
        {
        routine_internal_5F_logXMLNodes_3F__3F__26_ (enumerator_923.current_node (HERE).readProperty_nodeList (), constinArgument_inIndentationString.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 55)), ioArgument_ioString, inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 55)) ;
        }
      }
      break ;
    case GGS_xmlNodeType::Enumeration::enum_text:
      {
        ioArgument_ioString.plusAssignOperation(GGS_string ("TEXT '").add_operation (enumerator_923.current_node (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 57)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 57)) ;
      }
      break ;
    case GGS_xmlNodeType::Enumeration::enum_comment:
      {
        ioArgument_ioString.plusAssignOperation(GGS_string ("COMMENT '").add_operation (enumerator_923.current_node (HERE).readProperty_name (), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 59)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_types.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("xml_types.galgas", 59)) ;
      }
      break ;
    }
    enumerator_923.gotoNextObject () ;
  }
}


