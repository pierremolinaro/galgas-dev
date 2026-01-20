#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-xml+node.h"
#include "enum-xml+node+type.h"
#include "list-xml+node+list.h"
#include "map-xml+attribute+map.h"
#include "proc-add+text-26-3F-3F-3F.h"
#include "proc-print-3F.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'addText&???'
//
//--------------------------------------------------------------------------------------------------

void routine_addText_26__3F__3F__3F_ (GGS_xmlNodeList & ioArgument_ioNodes,
                                      const GGS_bool constinArgument_inDoNotCondenseWhiteSpaces,
                                      const GGS_bool constinArgument_inPrintDuringParsing,
                                      const GGS_string constinArgument_inIndendation,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_5122 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 197)) ;
  GGS_string var_trimmedString_5180 = var_s_5122.getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("xml_parsing_syntax.galgas", 198)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_trimmedString_5180.getter_count (SOURCE_FILE ("xml_parsing_syntax.galgas", 199)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_ls_5280 ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inDoNotCondenseWhiteSpaces.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_ls_5280 = var_s_5122 ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        var_ls_5280 = var_trimmedString_5180 ;
      }
      GGS_xmlNode var_node_5385 = GGS_xmlNode::init_21__21__21__21_ (GGS_xmlNodeType::class_func_text (SOURCE_FILE ("xml_parsing_syntax.galgas", 207)), var_ls_5280, GGS_xmlAttributeMap::init (inCompiler COMMA_HERE), GGS_xmlNodeList::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      ioArgument_ioNodes.addAssignOperation (var_node_5385  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 212)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inPrintDuringParsing.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_string var_s_5539 = constinArgument_inIndendation.add_operation (GGS_string ("TEXT "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 214)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 214)).add_operation (var_ls_5280, inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 214)).add_operation (GGS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 214)) ;
          {
          routine_print_3F_ (var_s_5539, inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 215)) ;
          }
        }
      }
    }
  }
}


