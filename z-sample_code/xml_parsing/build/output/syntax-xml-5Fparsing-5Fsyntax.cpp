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
#include "syntax-xml-5Fparsing-5Fsyntax.h"



//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_ (GGS_xmlNodeList & outArgument_outRootNodes,
                                                                                          const GGS_bool constinArgument_inIncludeComments,
                                                                                          const GGS_bool constinArgument_inDoNotCondenseWhiteSpaces,
                                                                                          const GGS_bool constinArgument_inPrintDuringParsing,
                                                                                          Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  outArgument_outRootNodes.drop () ; // Release 'out' argument
  GGS_string var_s_890 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 31)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_890.getter_count (SOURCE_FILE ("xml_parsing_syntax.galgas", 32)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 33)), GGS_string ("No character is allowed before XML header"), fixItArray1  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 33)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__3F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 37)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_xml_5F_parsing_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 40)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 41)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 42)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 44)) ;
  outArgument_outRootNodes = GGS_xmlNodeList::init (inCompiler COMMA_HERE) ;
  nt_element_5F_list_ (outArgument_outRootNodes, constinArgument_inIncludeComments, constinArgument_inDoNotCondenseWhiteSpaces, constinArgument_inPrintDuringParsing, GGS_string::makeEmptyString (), inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__3F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 40)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 41)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 44)) ;
  nt_element_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_start_5F_symbol_i0_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__3F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 37)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 40)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 41)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 44)) ;
  nt_element_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_ (GGS_xmlNodeList & ioArgument_ioNodes,
                                                                                          const GGS_bool constinArgument_inIncludeComments,
                                                                                          const GGS_bool constinArgument_inDoNotCondenseWhiteSpaces,
                                                                                          const GGS_bool constinArgument_inPrintDuringParsing,
                                                                                          const GGS_string constinArgument_inIndendation,
                                                                                          Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_1 (inCompiler) == 2) {
      {
      routine_addText_26__3F__3F__3F_ (ioArgument_ioNodes, constinArgument_inDoNotCondenseWhiteSpaces, constinArgument_inPrintDuringParsing, constinArgument_inIndendation, inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 65)) ;
      }
      nt_element_ (ioArgument_ioNodes, constinArgument_inIncludeComments, constinArgument_inDoNotCondenseWhiteSpaces, constinArgument_inPrintDuringParsing, constinArgument_inIndendation, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_1 (inCompiler) == 2) {
      nt_element_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_5F_list_i1_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_1 (inCompiler) == 2) {
      nt_element_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i2_ (GGS_xmlNodeList & ioArgument_ioNodes,
                                                                                  const GGS_bool constinArgument_inIncludeComments,
                                                                                  const GGS_bool /* constinArgument_inDoNotCondenseWhiteSpaces */,
                                                                                  const GGS_bool constinArgument_inPrintDuringParsing,
                                                                                  const GGS_string constinArgument_inIndendation,
                                                                                  Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  GGS_lstring var_commentString_2222 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_comment COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 88)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIncludeComments.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_xmlNode var_node_2272 = GGS_xmlNode::init_21__21__21__21_ (GGS_xmlNodeType::class_func_comment (SOURCE_FILE ("xml_parsing_syntax.galgas", 91)), var_commentString_2222.readProperty_string (), GGS_xmlAttributeMap::init (inCompiler COMMA_HERE), GGS_xmlNodeList::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
      ioArgument_ioNodes.addAssignOperation (var_node_2272  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 96)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inPrintDuringParsing.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_discartedMessage_2449 ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inIncludeComments.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_discartedMessage_2449 = GGS_string::makeEmptyString () ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_discartedMessage_2449 = GGS_string ("(discarted) ") ;
      }
      GGS_string var_s_2597 = constinArgument_inIndendation.add_operation (GGS_string ("COMMENT "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 105)).add_operation (var_discartedMessage_2449, inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 105)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 105)).add_operation (var_commentString_2222.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 105)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 105)) ;
      var_s_2597.plusAssignOperation(var_commentString_2222.readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 106)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 106)) ;
      var_s_2597.plusAssignOperation(GGS_string (":").add_operation (var_commentString_2222.readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 107)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 107)) ;
      var_s_2597.plusAssignOperation(GGS_string (":").add_operation (var_commentString_2222.readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 108)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 108)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 108)) ;
      {
      routine_print_3F_ (var_s_2597, inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 109)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i2_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_comment COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 88)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i2_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_comment COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i3_ (GGS_xmlNodeList & ioArgument_ioNodes,
                                                                                  const GGS_bool constinArgument_inIncludeComments,
                                                                                  const GGS_bool constinArgument_inDoNotCondenseWhiteSpaces,
                                                                                  const GGS_bool constinArgument_inPrintDuringParsing,
                                                                                  const GGS_string constinArgument_inIndendation,
                                                                                  Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 121)) ;
  GGS_lstring var_name_3168 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 122)) ;
  GGS_xmlAttributeMap var_attributeMap_3196 = GGS_xmlAttributeMap::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_2 (inCompiler) == 2) {
      GGS_lstring var_attributeName_3258 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 127)) ;
      GGS_lstring var_attributeValue_3306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 128)) ;
      {
      var_attributeMap_3196.setter_insertKey (var_attributeName_3258, var_attributeValue_3306, inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 129)) ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inPrintDuringParsing.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_string var_s_3437 = constinArgument_inIndendation ;
      var_s_3437.plusAssignOperation(GGS_string ("ELEMENT '").add_operation (var_name_3168.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 134)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 134)) ;
      var_s_3437.plusAssignOperation(var_name_3168.readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 135)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 135)) ;
      var_s_3437.plusAssignOperation(GGS_string (":").add_operation (var_name_3168.readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 136)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 136)) ;
      var_s_3437.plusAssignOperation(GGS_string (":").add_operation (var_name_3168.readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 137)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 137)).add_operation (GGS_string (" {"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 137)) ;
      UpEnumerator_xmlAttributeMap enumerator_3660 (var_attributeMap_3196) ;
      while (enumerator_3660.hasCurrentObject ()) {
        var_s_3437.plusAssignOperation(GGS_string ("'").add_operation (enumerator_3660.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 139)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 139)) ;
        var_s_3437.plusAssignOperation(enumerator_3660.current_lkey (HERE).readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 140)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 140)) ;
        var_s_3437.plusAssignOperation(GGS_string (":").add_operation (enumerator_3660.current_lkey (HERE).readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 141)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 141)) ;
        var_s_3437.plusAssignOperation(GGS_string (":").add_operation (enumerator_3660.current_lkey (HERE).readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 142)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 142)) ;
        var_s_3437.plusAssignOperation(GGS_string (" -> '").add_operation (enumerator_3660.current_value (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 143)).add_operation (GGS_string ("' "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 143)) ;
        var_s_3437.plusAssignOperation(enumerator_3660.current_value (HERE).readProperty_location ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 144)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 144)) ;
        var_s_3437.plusAssignOperation(GGS_string (":").add_operation (enumerator_3660.current_value (HERE).readProperty_location ().getter_endColumn (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 145)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 145)) ;
        var_s_3437.plusAssignOperation(GGS_string (":").add_operation (enumerator_3660.current_value (HERE).readProperty_location ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 146)).getter_string (SOURCE_FILE ("xml_parsing_syntax.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 146)) ;
        enumerator_3660.gotoNextObject () ;
        if (enumerator_3660.hasCurrentObject ()) {
          var_s_3437.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 147)) ;
        }
      }
      var_s_3437.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 149)) ;
      {
      routine_print_3F_ (var_s_3437, inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 150)) ;
      }
    }
  }
  GGS_xmlNodeList var_nodeList_4136 = GGS_xmlNodeList::init (inCompiler COMMA_HERE) ;
  switch (select_xml_5F_parsing_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 157)) ;
    nt_element_5F_list_ (var_nodeList_4136, constinArgument_inIncludeComments, constinArgument_inDoNotCondenseWhiteSpaces, constinArgument_inPrintDuringParsing, constinArgument_inIndendation.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 163)), inCompiler) ;
    {
    routine_addText_26__3F__3F__3F_ (var_nodeList_4136, constinArgument_inDoNotCondenseWhiteSpaces, constinArgument_inPrintDuringParsing, constinArgument_inIndendation, inCompiler  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 164)) ;
    }
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 170)) ;
    GGS_lstring var_closingName_4498 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 171)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, var_closingName_4498.readProperty_string ().objectCompare (var_name_3168.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_closingName_4498.readProperty_location (), GGS_string ("incorrect closing tag </").add_operation (var_closingName_4498.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 173)).add_operation (GGS_string ("> instead of </"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 173)).add_operation (var_name_3168.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 173)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 173)), fixItArray3  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 173)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  GGS_xmlNode var_node_4682 = GGS_xmlNode::init_21__21__21__21_ (GGS_xmlNodeType::class_func_element (SOURCE_FILE ("xml_parsing_syntax.galgas", 178)), var_name_3168.readProperty_string (), var_attributeMap_3196, var_nodeList_4136, inCompiler COMMA_HERE) ;
  ioArgument_ioNodes.addAssignOperation (var_node_4682  COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 183)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i3_parse (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 127)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 128)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_xml_5F_parsing_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 157)) ;
    nt_element_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 170)) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 171)) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_xml_5F_parsing_5F_syntax::rule_xml_5F_parsing_5F_syntax_element_i3_indexing (Lexique_xml_5F_parsing_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 121)) ;
  inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 122)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_xml_5F_parsing_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 126)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 127)) ;
      inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_value COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 128)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_xml_5F_parsing_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__2F__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 155)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 157)) ;
    nt_element_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3C__2F_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 170)) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken_name COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 171)) ;
    inCompiler->acceptTerminal (Lexique_xml_5F_parsing_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("xml_parsing_syntax.galgas", 175)) ;
  } break ;
  default:
    break ;
  }
}

