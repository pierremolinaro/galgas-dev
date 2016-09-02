#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-19.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_sortedListNameForUsefulness_10356 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mSortedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_sortedListNameForUsefulness_10356, var_sortedListNameForUsefulness_10356, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 266)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_10541 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("type-sorted-list.galgas", 267))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 267)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_10356, var_elementTypeNameForUsefulness_10541 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 268)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_10780 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 270)) ;
  GALGAS_attributeIndexMap var_attributeMap_10822 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-sorted-list.galgas", 271)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10880 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_10880.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_10921 = function_typeNameForUsefulEntitiesGraph (enumerator_10880.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 273)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_sortedListNameForUsefulness_10356, var_propertyTypeNameForUsefulness_10921 COMMA_SOURCE_FILE ("type-sorted-list.galgas", 274)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_11083 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_10880.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 275)) ;
    GALGAS_bool var_hasSetter_11186 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_11213 = GALGAS_bool (true) ;
    var_typedAttributeList_10780.addAssign_operation (var_t_11083, enumerator_10880.current_mPropertyName (HERE), var_hasSetter_11186, var_hasGetter_11213  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 278)) ;
    {
    var_attributeMap_10822.setter_insertKey (enumerator_10880.current_mPropertyName (HERE), var_t_11083, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 283)) ;
    }
    enumerator_10880.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting_11417 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sorted-list.galgas", 286)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList_11457 = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("type-sorted-list.galgas", 287)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_11526 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_11526.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_11611 ;
    var_attributeMap_10822.method_searchKey (enumerator_11526.current_mSortedAttributeName (HERE), var_type_11611, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 289)) ;
    var_sortDescriptorList_11457.addAssign_operation (var_type_11611, enumerator_11526.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 290)), enumerator_11526.current_mAscending (HERE)  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 290)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting_11417.getter_hasKey (enumerator_11526.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 291)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 291)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_11526.current_mSortedAttributeName (HERE).getter_location (SOURCE_FILE ("type-sorted-list.galgas", 292)), GALGAS_string ("the '").add_operation (enumerator_11526.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)), fixItArray1  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 292)) ;
    }
    var_attributesUsedForSorting_11417.addAssign_operation (enumerator_11526.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("type-sorted-list.galgas", 294))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 294)) ;
    enumerator_11526.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("type-sorted-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 298)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 300)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("type-sorted-list.galgas", 301))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 301)), var_typedAttributeList_10780, var_sortDescriptorList_11457  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 299))  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 297)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'sortedListGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sortedListGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sortedListGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sortedListGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sortedListGenerationTemplate_0,
  0,
  gWrapperAllDirectories_sortedListGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'sortedListGenerationTemplate sortedlistTypeHeader1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_sortedlist.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sortedlist {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'sortedListGenerationTemplate sortedlistTypeSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                     const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                     const GALGAS_sortDescriptorListForGeneration & in_SORT_5F_ATTRIBUTE_5F_LIST
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' sorted list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cSortedListElement {\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_830_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_830 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_830.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_830.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_830.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_830.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_830_.increment () ;
      enumerator_830.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cSortedListElement * copy (void) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Description\n"
    " public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Virtual method that comparing element for sorting\n"
    "  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1883_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1883 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1883.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1883.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1883.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 39)).stringValue () ;
      if (enumerator_1883.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1883_.increment () ;
      enumerator_1883.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cSortedListElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2122_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2122 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2122.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2122.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 47)).stringValue () ;
      if (enumerator_2122.hasNextObject ()) {
        result << ", " ;
      }
      index_2122_.increment () ;
      enumerator_2122.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cSortedListElement * cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cSortedListElement * result = NULL ;\n"
    "  macroMyNew (result, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2755_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2755 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2755.hasCurrentObject ()) {
      result << "mObject.mAttribute_" ;
      result << enumerator_2755.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 65)).stringValue () ;
      if (enumerator_2755.hasNextObject ()) {
        result << ", " ;
      }
      index_2755_.increment () ;
      enumerator_2755.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3155_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3155 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3155.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3155.current_mAttributeName (HERE).mAttribute_string.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 79)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mAttribute_" ;
      result << enumerator_3155.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 80)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3155_.increment () ;
      enumerator_3155.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_sortedlist () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compareForSorting (const cSortedListElement * inOperand) const {\n"
    "  typeComparisonResult result = kOperandEqual ;\n"
    "  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_4650_ (0) ;
  if (in_SORT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_sortDescriptorListForGeneration enumerator_4650 (in_SORT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_4650.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = " ;
      const enumGalgasBool test_0 = enumerator_4650.current_mAscendingOrder (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "mObject.mAttribute_" ;
        result << enumerator_4650.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ".objectCompare (operand->mObject.mAttribute_" ;
        result << enumerator_4650.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 108)).stringValue () ;
        result << ")" ;
      }else if (kBoolFalse == test_0) {
        result << "operand->mObject.mAttribute_" ;
        result << enumerator_4650.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ".objectCompare (mObject.mAttribute_" ;
        result << enumerator_4650.current_mAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 110)).stringValue () ;
        result << ")" ;
      }
      result << " ;\n"
        "  }\n" ;
      index_4650_.increment () ;
      enumerator_4650.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptySortedList (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.createNewEmptySortedList (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_sortedListWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5706_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5706 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_5706.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5706.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      result << " & inOperand" ;
      result << index_5706_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 130)).stringValue () ;
      if (enumerator_5706.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5706_IDX.increment () ;
      enumerator_5706.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = constructor_emptySortedList (THERE) ;\n"
    "  cSortedListElement * p = NULL ;\n"
    "  macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6061_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6061 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_6061.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6061_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 138)).stringValue () ;
      if (enumerator_6061.hasNextObject ()) {
        result << ", " ;
      }
      index_6061_IDX.increment () ;
      enumerator_6061.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  capSortedListElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "  result.addObject (attributes) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6501_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6501 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_6501.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6501.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      result << " & inOperand" ;
      result << index_6501_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 153)).stringValue () ;
      if (enumerator_6501.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6501_IDX.increment () ;
      enumerator_6501.gotoNextObject () ;
    }
  }
  result << "\n"
    "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    cSortedListElement * p = NULL ;\n"
    "    macroMyNew (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6810_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6810 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_6810.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6810_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_6810.hasNextObject ()) {
        result << ", " ;
      }
      index_6810_IDX.increment () ;
      enumerator_6810.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capSortedListElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    addObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    appendSortedList (inOperand) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popSmallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7647_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7647 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_7647.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_7647.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << " & outOperand" ;
      result << index_7647_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 187)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7647_IDX.increment () ;
      enumerator_7647.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capSortedListElement attributes ;\n"
    "  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_8086_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8086 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8086.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8086_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 197)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8086_IDX.increment () ;
      enumerator_8086.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8264_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8264 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8264.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_8264_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " = p->mObject.mAttribute_" ;
      result << enumerator_8264.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 203)).stringValue () ;
      result << " ;\n" ;
      index_8264_IDX.increment () ;
      enumerator_8264.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popGreatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8608_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8608 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8608.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_8608.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_8608_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8608_IDX.increment () ;
      enumerator_8608.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capSortedListElement attributes ;\n"
    "  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_9047_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9047 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_9047.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9047_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 222)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9047_IDX.increment () ;
      enumerator_9047.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9225_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9225 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_9225.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9225_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " = p->mObject.mAttribute_" ;
      result << enumerator_9225.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 228)).stringValue () ;
      result << " ;\n" ;
      index_9225_IDX.increment () ;
      enumerator_9225.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_smallest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9566_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9566 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_9566.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9566.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << " & outOperand" ;
      result << index_9566_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 237)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9566_IDX.increment () ;
      enumerator_9566.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capSortedListElement attributes ;\n"
    "  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_10008_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10008 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10008.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10008_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 247)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10008_IDX.increment () ;
      enumerator_10008.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10186_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10186 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10186.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10186_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " = p->mObject.mAttribute_" ;
      result << enumerator_10186.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n" ;
      index_10186_IDX.increment () ;
      enumerator_10186.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_greatest (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10527_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10527 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10527.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10527.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << " & outOperand" ;
      result << index_10527_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 262)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10527_IDX.increment () ;
      enumerator_10527.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capSortedListElement attributes ;\n"
    "  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;\n"
    "  cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_10969_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10969 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10969.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10969_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 272)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10969_IDX.increment () ;
      enumerator_10969.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11147_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11147 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_11147.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11147_IDX.getter_string (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " = p->mObject.mAttribute_" ;
      result << enumerator_11147.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 278)).stringValue () ;
      result << " ;\n" ;
      index_11147_IDX.increment () ;
      enumerator_11147.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator () {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cSortedListElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_12172_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12172 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_12172.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_12172.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_12172.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 301)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cSortedListElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mAttribute_" ;
      result << enumerator_12172.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_sortedlist.cpp.galgasTemplate", 304)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_12172_IDX.increment () ;
      enumerator_12172.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 348)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 349)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 347))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 353)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 354)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 355)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 356)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 357)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 358)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 359)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 360)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 361)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 362)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 363)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 364)) COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352))), inCompiler  COMMA_SOURCE_FILE ("type-sorted-list.galgas", 352)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                              extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_15049 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_15049.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15049.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 375)) ;
    enumerator_15049.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 377)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 378)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-sorted-list.galgas", 380)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("type-sorted-list.galgas", 379))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                     extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_key_2285 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 50)), object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 50))  COMMA_SOURCE_FILE ("type-struct.galgas", 50)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2285, temp_0, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 51)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2435 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2435.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey_2458 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2435.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 53)), enumerator_2435.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 53))  COMMA_SOURCE_FILE ("type-struct.galgas", 53)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2285, var_propertyKey_2458 COMMA_SOURCE_FILE ("type-struct.galgas", 54)) ;
    }
    enumerator_2435.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                                extensionMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex_3384 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex_3384 COMMA_SOURCE_FILE ("type-struct.galgas", 69)) ;
  }
  GALGAS_attributeMap var_attributeMap_3538 = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 71)) ;
  GALGAS_constructorMap var_constructorMap_3585 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 72)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_3648 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 73)) ;
  GALGAS_typedPropertyList var_typedAttributeList_3696 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 74)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_3759 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 75)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3823 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3823.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3957 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3823.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3957 COMMA_SOURCE_FILE ("type-struct.galgas", 77)) ;
    }
    var_constructorAttributeTypeList_3648.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-struct.galgas", 78)), var_attributeTypeIndex_3957, enumerator_3823.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-struct.galgas", 78)) ;
    var_typesToIncludeInHeaderCompilation_3759.addAssign_operation (var_attributeTypeIndex_3957  COMMA_SOURCE_FILE ("type-struct.galgas", 79)) ;
    GALGAS_bool var_hasSetter_4129 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_4155 = GALGAS_bool (true) ;
    var_typedAttributeList_3696.addAssign_operation (var_attributeTypeIndex_3957, enumerator_3823.current_mPropertyName (HERE), var_hasSetter_4129, var_hasGetter_4155  COMMA_SOURCE_FILE ("type-struct.galgas", 82)) ;
    {
    var_attributeMap_3538.setter_insertKey (enumerator_3823.current_mPropertyName (HERE), var_attributeTypeIndex_3957, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 83)) ;
    }
    enumerator_3823.gotoNextObject () ;
  }
  {
  var_constructorMap_3585.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 90))  COMMA_SOURCE_FILE ("type-struct.galgas", 90)), var_constructorAttributeTypeList_3648, GALGAS_bool (false), var_structTypeIndex_3384, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 89)) ;
  }
  GALGAS_getterMap var_getterMap_4523 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap_4523, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 97)) ;
  }
  cEnumerator_typedPropertyList enumerator_4627 (var_typedAttributeList_3696, kEnumeration_up) ;
  while (enumerator_4627.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4523, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4627.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-struct.galgas", 102)), enumerator_4627.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 103)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 99)) ;
    }
    enumerator_4627.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_4874 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 108)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4936 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 110)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap_4523, var_setterMap_4874, var_instanceMethodMap_4936, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 112)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType_5312 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType_5312 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType_5312 COMMA_SOURCE_FILE ("type-struct.galgas", 127)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_5630 = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5673 (var_typedAttributeList_3696, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5630.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5673.hasCurrentObject () && bool_1) {
    while (enumerator_5673.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5673.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 136)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5673.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 136)).operator_not (SOURCE_FILE ("type-struct.galgas", 136)) COMMA_SOURCE_FILE ("type-struct.galgas", 136)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName_5630 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5673.gotoNextObject () ;
      if (enumerator_5673.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_5630.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-struct.galgas", 145)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("type-struct.galgas", 146)), GALGAS_bool (false), var_typedAttributeList_3696, var_attributeMap_3538, var_typedAttributeList_3696, var_constructorMap_3585, var_getterMap_4523, var_setterMap_4874, var_instanceMethodMap_4936, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 155)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 156)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 157)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 158)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 159)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 160)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 162)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 163)), GALGAS_bool (false), var_enumeratedType_5312, var_defaultConstructorName_5630, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 167)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-struct.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 141)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               extensionMethod_structDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineExtensionMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'forbiddenKeysForStruct'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_forbiddenKeysForStruct (C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outResult ; // Returned variable
  result_outResult = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-struct.galgas", 177)) ;
  result_outResult.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-struct.galgas", 178)) ;
  result_outResult.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-struct.galgas", 179)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_forbiddenKeysForStruct = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForStruct ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_forbiddenKeysForStruct (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForStruct) {
    gOnceFunctionResult_forbiddenKeysForStruct = onceFunction_forbiddenKeysForStruct (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForStruct = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_forbiddenKeysForStruct (void) {
  gOnceFunctionResult_forbiddenKeysForStruct.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForStruct (NULL,
                                                                    releaseOnceFunctionResult_forbiddenKeysForStruct) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForStruct [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForStruct (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForStruct (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForStruct ("forbiddenKeysForStruct",
                                                                        functionWithGenericHeader_forbiddenKeysForStruct,
                                                                        & kTypeDescriptor_GALGAS_stringset,
                                                                        0,
                                                                        functionArgs_forbiddenKeysForStruct) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_structNameForUsefulness_7837 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mStructTypeName, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 194)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_structNameForUsefulness_7837, var_structNameForUsefulness_7837, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 195)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.getter_length (SOURCE_FILE ("type-struct.galgas", 197)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("type-struct.galgas", 198)), GALGAS_string ("a structure cannot be empty: it must have at least one field"), fixItArray1  COMMA_SOURCE_FILE ("type-struct.galgas", 198)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_8156 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-struct.galgas", 200)) ;
  GALGAS_attributeIndexMap var_attributeMap_8195 = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-struct.galgas", 201)) ;
  cEnumerator_propertyInCollectionListAST enumerator_8227 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_8227.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_8268 = function_typeNameForUsefulEntitiesGraph (enumerator_8227.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 203)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_structNameForUsefulness_7837, var_propertyTypeNameForUsefulness_8268 COMMA_SOURCE_FILE ("type-struct.galgas", 204)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_8426 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8227.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 205)) ;
    cEnumerator_lstringlist enumerator_8536 (enumerator_8227.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8536.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_8536.current_mValue (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 207)), GALGAS_string ("a struct attribute does not accept any feature"), fixItArray2  COMMA_SOURCE_FILE ("type-struct.galgas", 207)) ;
      enumerator_8536.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter_8635 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8661 = GALGAS_bool (false) ;
    var_typedAttributeList_8156.addAssign_operation (var_t_8426, enumerator_8227.current_mPropertyName (HERE), var_hasSetter_8635, var_hasGetter_8661  COMMA_SOURCE_FILE ("type-struct.galgas", 211)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 216)).getter_hasKey (enumerator_8227.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-struct.galgas", 216)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m_8844 = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8919 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 218)), kEnumeration_up) ;
      while (enumerator_8919.hasCurrentObject ()) {
        var_m_8844.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_8919.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 219)) ;
        enumerator_8919.gotoNextObject () ;
      }
      var_m_8844.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 221)) ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_8227.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-struct.galgas", 222)), var_m_8844, fixItArray4  COMMA_SOURCE_FILE ("type-struct.galgas", 222)) ;
    }
    {
    var_attributeMap_8195.setter_insertKey (enumerator_8227.current_mPropertyName (HERE), var_t_8426, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 224)) ;
    }
    enumerator_8227.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("type-struct.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 227)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 229)), var_typedAttributeList_8156  COMMA_SOURCE_FILE ("type-struct.galgas", 228))  COMMA_SOURCE_FILE ("type-struct.galgas", 226)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionMethod_structDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineExtensionMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'structGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'structGenerationTemplate structTypeHeader1'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                 const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Public data members\n" ;
  GALGAS_uint index_709_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_709 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_709.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_709.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " mAttribute_" ;
      result << enumerator_709.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_709_.increment () ;
      enumerator_709.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public : static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Virtual destructor (in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1549_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1549 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1549.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1549.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1549.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.h1.galgasTemplate", 33)).stringValue () ;
      if (enumerator_1549.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1549_.increment () ;
      enumerator_1549.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'structGenerationTemplate structTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                             const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  GALGAS_uint index_214_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_214 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_214.hasCurrentObject ()) {
      result << "mAttribute_" ;
      result << enumerator_214.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 6)).stringValue () ;
      result << " ()" ;
      if (enumerator_214.hasNextObject ()) {
        result << ",\n" ;
      }
      index_214_.increment () ;
      enumerator_214.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_710_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_710 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_710.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_710.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      result << " & inOperand" ;
      result << index_710_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 20)).stringValue () ;
      if (enumerator_710.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_710_IDX.increment () ;
      enumerator_710.gotoNextObject () ;
    }
  }
  result << ") :\n" ;
  GALGAS_uint index_867_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_867 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_867.hasCurrentObject ()) {
      result << "mAttribute_" ;
      result << enumerator_867.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << " (inOperand" ;
      result << index_867_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 24)).stringValue () ;
      result << ")" ;
      if (enumerator_867.hasNextObject ()) {
        result << ",\n" ;
      }
      index_867_IDX.increment () ;
      enumerator_867.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (UNUSED_LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_1303_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1303 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_1303.hasCurrentObject ()) {
        result << "GALGAS_" ;
        result << enumerator_1303.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::constructor_" ;
        result << enumerator_1303.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 36)).stringValue () ;
        result << " (HERE)" ;
        if (enumerator_1303.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_1303_.increment () ;
        enumerator_1303.gotoNextObject () ;
      }
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1732_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1732 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1732.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1732.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      result << " & inOperand" ;
      result << index_1732_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 46)).stringValue () ;
      if (enumerator_1732.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1732_IDX.increment () ;
      enumerator_1732.gotoNextObject () ;
    }
  }
  result << " \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_1966_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1966 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1966.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_1966_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 52)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_1966.hasNextObject ()) {
        result << " && " ;
      }
      index_1966_IDX.increment () ;
      enumerator_1966.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2112_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2112 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2112.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_2112_IDX.getter_string (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 58)).stringValue () ;
      if (enumerator_2112.hasNextObject ()) {
        result << ", " ;
      }
      index_2112_IDX.increment () ;
      enumerator_2112.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "   typeComparisonResult result = kOperandEqual ;\n" ;
  GALGAS_uint index_2503_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2503 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2503.hasCurrentObject ()) {
      result << "  if (result == kOperandEqual) {\n"
        "    result = mAttribute_" ;
      result << enumerator_2503.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ".objectCompare (inOperand.mAttribute_" ;
      result << enumerator_2503.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 73)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2503_.increment () ;
      enumerator_2503.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return " ;
  GALGAS_uint index_2963_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2963 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2963.hasCurrentObject ()) {
      result << "mAttribute_" ;
      result << enumerator_2963.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 84)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_2963.hasNextObject ()) {
        result << " && " ;
      }
      index_2963_.increment () ;
      enumerator_2963.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n" ;
  GALGAS_uint index_3271_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3271 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3271.hasCurrentObject ()) {
      result << "  mAttribute_" ;
      result << enumerator_3271.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 94)).stringValue () ;
      result << ".drop () ;\n" ;
      index_3271_.increment () ;
      enumerator_3271.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndentation) const {\n"
    "  ioString << \"<struct @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n"
    "  if (! isValid ()) {\n"
    "    ioString << \" not built\" ;\n"
    "  }else{\n" ;
  GALGAS_uint index_3761_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3761 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3761.hasCurrentObject ()) {
      result << "    mAttribute_" ;
      result << enumerator_3761.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 108)).stringValue () ;
      result << ".description (ioString, inIndentation+1) ;\n" ;
      if (enumerator_3761.hasNextObject ()) {
        result << "    ioString << \", \" ;\n" ;
      }
      index_3761_IDX.increment () ;
      enumerator_3761.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3965_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3965 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_3965.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_3965.current_mAttributeTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 117)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_3965.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 117)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return mAttribute_" ;
      result << enumerator_3965.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("GALGAS_struct.cpp.galgasTemplate", 118)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_3965_.increment () ;
      enumerator_3965.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@structTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10660 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10660.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10660.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 268)) ;
    enumerator_10660.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 272)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 273)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 275)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 271))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 278)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 279)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 280)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 281)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 282)), object->mAttribute_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 283)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 284)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 285)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 286)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 287)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 288)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 289)) COMMA_SOURCE_FILE ("type-struct.galgas", 277))), inCompiler  COMMA_SOURCE_FILE ("type-struct.galgas", 277)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                              extensionMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@structTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 300)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 302)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 303)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-struct.galgas", 305)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-struct.galgas", 301))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                     extensionMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionGetterAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("abstract extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 53)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                          extensionGetter_abstractExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_lstring var_key_3443 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 68)), object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 69))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 67)) ;
  {
  const GALGAS_abstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3443, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 71)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3443, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 72))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 74)) COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 74)).operator_not (SOURCE_FILE ("extension-abstract-getter.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-getter.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 75)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4039 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 81)) ;
  if (NULL != objectArray_4039) {
      macroValidSharedObject (objectArray_4039, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4039->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 82)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                                extensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionGetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6095 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 119)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6095.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 121)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-getter.galgas", 121)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 122)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6095.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 122)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_6095.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-abstract-getter.galgas", 124)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6095.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 124)) ;
    }
  }
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_6676 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-getter.galgas", 127)) ;
  cEnumerator_formalInputParameterListAST enumerator_6742 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
  while (enumerator_6742.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6676.addAssign_operation (enumerator_6742.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6742.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 131)), enumerator_6742.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 132)), enumerator_6742.current_mFormalArgumentName (HERE), enumerator_6742.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 129)) ;
    enumerator_6742.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension getter ").add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 138)), GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 141)), var_selfType_6095, object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 143)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 144)), var_formalParameterListForGeneration_6676  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 139))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                         extensionMethod_abstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-getter.galgas", 169)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 168)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-getter.galgas", 187)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionGetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionGetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 197)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 196))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterForGeneration * object = (const cPtr_abstractExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)).add_operation (object->mAttribute_mAbstractExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211))  COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 211)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 212)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 213)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_10860 (object->mAttribute_mAbstractExtensionGetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_10860.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10860.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 215)) ;
    enumerator_10860.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 218)), object->mAttribute_mAbstractExtensionGetterName, object->mAttribute_mAbstractExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-abstract-getter.galgas", 217))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_lstring var_key_2571 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)), object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2571, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2571, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-method.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-method.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 53)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3048 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 58)) ;
  if (NULL != objectArray_3048) {
      macroValidSharedObject (objectArray_3048, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3048->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 59)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                                extensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionMethodAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  result_outString = GALGAS_string ("abstract extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 72)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                          extensionGetter_abstractExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_abstractExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionMethodAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5578 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 102)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5578.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 104)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-method.galgas", 104)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 105)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5578.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 105)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5578.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 106)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionMethodName.getter_location (SOURCE_FILE ("extension-abstract-method.galgas", 107)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5578.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 107)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6125 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-method.galgas", 110)) ;
  cEnumerator_formalParameterListAST enumerator_6219 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_6219.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6125.addAssign_operation (enumerator_6219.current_mFormalSelector (HERE), enumerator_6219.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6219.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 115)), enumerator_6219.current_mFormalArgumentName (HERE), enumerator_6219.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 117))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 112)) ;
    enumerator_6219.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("abstract extension method ").add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 121)), GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5578.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)).add_operation (object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 124)), var_selfType_5578, object->mAttribute_mAbstractExtensionMethodName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 126)), var_formalParameterListForGeneration_6125  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 122))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                         extensionMethod_abstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_abstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-method.galgas", 149)), object->mAttribute_mAbstractExtensionMethodName  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionMethodForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 169)), object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 168))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionMethodForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-method.galgas", 178)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionMethodForGeneration_headerKind (defineExtensionGetter_abstractExtensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodForGeneration * object = (const cPtr_abstractExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)).add_operation (object->mAttribute_mAbstractExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187))  COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 187)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 188)) ;
  cEnumerator_formalParameterListForGeneration enumerator_10155 (object->mAttribute_mAbstractExtensionMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_10155.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10155.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 190)) ;
    enumerator_10155.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractExtensionMethodName, object->mAttribute_mAbstractExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-method.galgas", 192))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_lstring var_key_2569 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)), object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 48))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 48)) ;
  {
  const GALGAS_abstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2569, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 49)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2569, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 50))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 50)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 52)) COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 52)).operator_not (SOURCE_FILE ("extension-abstract-setter.galgas", 52)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-abstract-setter.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 53)) ;
    }
  }
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3080 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 58)) ;
  if (NULL != objectArray_3080) {
      macroValidSharedObject (objectArray_3080, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3080->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 59)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                                extensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_abstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@abstractExtensionSetterAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_abstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  result_outString = GALGAS_string ("abstract extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 72)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                          extensionGetter_abstractExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_abstractExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_abstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@abstractExtensionSetterAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5610 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 103)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5610.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 105)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-abstract-setter.galgas", 105)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 106)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5610.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 106)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5610.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionSetterName.getter_location (SOURCE_FILE ("extension-abstract-setter.galgas", 108)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5610.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)), fixItArray3  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 108)) ;
    }
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6157 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-abstract-setter.galgas", 111)) ;
  cEnumerator_formalParameterListAST enumerator_6251 (object->mAttribute_mAbstractExtensionSetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_6251.hasCurrentObject ()) {
    var_formalParameterListForGeneration_6157.addAssign_operation (enumerator_6251.current_mFormalSelector (HERE), enumerator_6251.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_6251.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 116)), enumerator_6251.current_mFormalArgumentName (HERE), enumerator_6251.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 118))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 113)) ;
    enumerator_6251.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" abstract extension setter ").add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 122)), GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)).add_operation (object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 125)), var_selfType_5610, object->mAttribute_mAbstractExtensionSetterName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 127)), var_formalParameterListForGeneration_6157  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 123))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                         extensionMethod_abstractExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_abstractExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionSetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionSetterListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterAST * object = (const cPtr_abstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterAST) ;
  ioArgument_ioAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-abstract-setter.galgas", 152)), object->mAttribute_mAbstractExtensionSetterName  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionSetterAST.mSlotID,
                                               extensionMethod_abstractExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@abstractExtensionSetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_abstractExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-abstract-setter.galgas", 169)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_abstractExtensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_abstractExtensionSetterForGeneration_headerKind (defineExtensionGetter_abstractExtensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@abstractExtensionSetterForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 178)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 177))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                              extensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_abstractExtensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@abstractExtensionSetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionSetterForGeneration * object = (const cPtr_abstractExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionSetterForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)).add_operation (object->mAttribute_mAbstractExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191))  COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 191)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 192)) ;
  cEnumerator_formalParameterListForGeneration enumerator_10185 (object->mAttribute_mAbstractExtensionSetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_10185.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10185.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 194)) ;
    enumerator_10185.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 197)), object->mAttribute_mAbstractExtensionSetterName, object->mAttribute_mAbstractExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-abstract-setter.galgas", 196))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_abstractExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionGetterAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  result_outString = GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 62)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                          extensionGetter_extensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionGetterAST_keyRepresentation (defineExtensionGetter_extensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & ioArgument_ioExtensionGetterMapForBuildingContext,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_lstring var_key_3738 = GALGAS_lstring::constructor_new (GALGAS_string ("extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 76)), object->mAttribute_mExtensionGetterName.getter_location (SOURCE_FILE ("extension-getter.galgas", 76))  COMMA_SOURCE_FILE ("extension-getter.galgas", 76)) ;
  {
  const GALGAS_extensionGetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3738, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 77)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3738, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 78)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-getter.galgas", 78))  COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) COMMA_SOURCE_FILE ("extension-getter.galgas", 78)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionGetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 81)) COMMA_SOURCE_FILE ("extension-getter.galgas", 81)).operator_not (SOURCE_FILE ("extension-getter.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionGetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionGetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-getter.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 82)) ;
    }
  }
  cMapElement_extensionGetterMapForBuildingContext * objectArray_4318 = (cMapElement_extensionGetterMapForBuildingContext *) ioArgument_ioExtensionGetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionGetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-getter.galgas", 87)) ;
  if (NULL != objectArray_4318) {
      macroValidSharedObject (objectArray_4318, cMapElement_extensionGetterMapForBuildingContext) ;
    {
    objectArray_4318->mAttribute_mExtensionGetterMapForType.setter_insertKey (object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mExtensionGetterFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 88)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                                extensionMethod_extensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_enterInSemanticContext (defineExtensionMethod_extensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionGetterAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  GALGAS_lstring var_nameForUsefulness_7022 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 144)), object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 144)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7022, var_nameForUsefulness_7022, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 145)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_7194 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 146)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_7194, var_nameForUsefulness_7022 COMMA_SOURCE_FILE ("extension-getter.galgas", 147)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_7370 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 149)) ;
  GALGAS_string var_selfObjectName_7470 ;
  GALGAS_string var_selfObjectAccessor_7499 ;
  GALGAS_bool var_implementedAsFunction_7529 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_7370.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 154)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 154)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_7470 = GALGAS_string ("object") ;
    var_selfObjectAccessor_7499 = GALGAS_string ("object->") ;
    var_implementedAsFunction_7529 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_7470 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_7499 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_7529 = GALGAS_bool (true) ;
  }
  GALGAS_analysisContext var_analysisContext_7891 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_7370, var_selfObjectName_7470, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-getter.galgas", 169))  COMMA_SOURCE_FILE ("extension-getter.galgas", 164)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_8065 ;
  GALGAS_string var_returnVariableCppName_8097 ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8171 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8248 ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_7370.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-getter.galgas", 179)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_7370.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-getter.galgas", 179)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).operator_or (GALGAS_bool (kIsEqual, var_selfType_7370.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).objectCompare (GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("extension-getter.galgas", 179)))) COMMA_SOURCE_FILE ("extension-getter.galgas", 179)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_7370.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 180)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-getter.galgas", 181)) ;
  }
  routine_analyzeFunctionBody (var_nameForUsefulness_7022, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7891, object->mAttribute_mExtensionGetterFormalInputParameterList, temp_1, var_selfObjectAccessor_7499, object->mAttribute_mExtensionGetterInstructionList, object->mAttribute_mExtensionGetterReturnedVariableName, object->mAttribute_mExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_8171, var_returnType_8065, var_returnVariableCppName_8097, var_semanticInstructionListForGeneration_8248, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 174)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension getter ").add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 195)), GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("getter-").add_operation (var_selfType_7370.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 198)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 198)).add_operation (object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 198)), var_selfType_7370, object->mAttribute_mExtensionGetterName.getter_string (SOURCE_FILE ("extension-getter.galgas", 200)), var_implementedAsFunction_7529, var_returnType_8065, var_returnVariableCppName_8097, var_formalParameterListForGeneration_8171, var_selfType_7370.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 205)), var_semanticInstructionListForGeneration_8248  COMMA_SOURCE_FILE ("extension-getter.galgas", 196))  COMMA_SOURCE_FILE ("extension-getter.galgas", 194)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                         extensionMethod_extensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_semanticAnalysis (defineExtensionMethod_extensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-getter.galgas", 229)), object->mAttribute_mExtensionGetterName  COMMA_SOURCE_FILE ("extension-getter.galgas", 228)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_buildExtensionListMaps (defineExtensionMethod_extensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionGetterForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-getter.galgas", 251)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                   extensionGetter_extensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionGetterForGeneration_headerKind (defineExtensionGetter_extensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionGetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 261)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 264)) COMMA_SOURCE_FILE ("extension-getter.galgas", 260))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 268)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("extension-getter.galgas", 267))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                              extensionMethod_extensionGetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionGetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionGetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterForGeneration * object = (const cPtr_extensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterForGeneration) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_13057 (object->mAttribute_mExtensionGetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_13057.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13057.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 284)) ;
    enumerator_13057.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 286)) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalInputParameterListForGeneration var_extensionReaderFormalParameterList_13255 = object->mAttribute_mExtensionGetterFormalParameterList ;
    {
    var_extensionReaderFormalParameterList_13255.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-getter.galgas", 290)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 293))  COMMA_SOURCE_FILE ("extension-getter.galgas", 293)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 289)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 297))  COMMA_SOURCE_FILE ("extension-getter.galgas", 297)) ;
    GALGAS_string var_code_13897 ;
    {
    routine_generateFunction (GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mExtensionGetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-getter.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 299)), ioArgument_ioInclusionSet, var_extensionReaderFormalParameterList_13255, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code_13897, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 298)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 310)), object->mAttribute_mExtensionGetterName, var_code_13897 COMMA_SOURCE_FILE ("extension-getter.galgas", 309))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 315)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_14187 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_14223 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 318)).isValid ()) {
      uint32_t variant_14239 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-getter.galgas", 318)).uintValue () ;
      bool loop_14239 = true ;
      while (loop_14239) {
        loop_14239 = var_searching_14223.isValid () ;
        if (loop_14239) {
          loop_14239 = var_searching_14223.boolValue () ;
        }
        if (loop_14239 && (0 == variant_14239)) {
          loop_14239 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-getter.galgas", 318)) ;
        }
        if (loop_14239) {
          variant_14239 -- ;
          const enumGalgasBool test_1 = var_baseType_14187.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 319)).getter_isNull (SOURCE_FILE ("extension-getter.galgas", 319)).operator_not (SOURCE_FILE ("extension-getter.galgas", 319)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_14187.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 320)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 320)).getter_hasKey (object->mAttribute_mExtensionGetterName COMMA_SOURCE_FILE ("extension-getter.galgas", 320)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_14187 = var_baseType_14187.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 321)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_14223 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_14223 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_14187.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329)).add_operation (object->mAttribute_mExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 329))  COMMA_SOURCE_FILE ("extension-getter.galgas", 329)) ;
    GALGAS_string var_extensionReaderCode_14942 ;
    {
    routine_generateExtensionGetter (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 338)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_14942, inCompiler  COMMA_SOURCE_FILE ("extension-getter.galgas", 330)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-getter.galgas", 343)), object->mAttribute_mExtensionGetterName, object->mAttribute_mExtensionGetterFormalParameterList, object->mAttribute_mResultType, var_extensionReaderCode_14942 COMMA_SOURCE_FILE ("extension-getter.galgas", 342))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionGetterForGeneration.mSlotID,
                                                     extensionMethod_extensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionMethodAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  result_outString = GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 50)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                          extensionGetter_extensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionMethodAST_keyRepresentation (defineExtensionGetter_extensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & ioArgument_ioExtensionMethodMapForBuildingContext,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_lstring var_key_3322 = GALGAS_lstring::constructor_new (GALGAS_string ("extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 64)), object->mAttribute_mExtensionMethodName.getter_location (SOURCE_FILE ("extension-method.galgas", 64))  COMMA_SOURCE_FILE ("extension-method.galgas", 64)) ;
  {
  const GALGAS_extensionMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3322, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3322, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 66)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-method.galgas", 66))  COMMA_SOURCE_FILE ("extension-method.galgas", 66)) COMMA_SOURCE_FILE ("extension-method.galgas", 66)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionMethodMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 68)) COMMA_SOURCE_FILE ("extension-method.galgas", 68)).operator_not (SOURCE_FILE ("extension-method.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionMethodMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionMethodMapForType::constructor_emptyMap (SOURCE_FILE ("extension-method.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 69)) ;
    }
  }
  cMapElement_extensionMethodMapForBuildingContext * objectArray_3817 = (cMapElement_extensionMethodMapForBuildingContext *) ioArgument_ioExtensionMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-method.galgas", 74)) ;
  if (NULL != objectArray_3817) {
      macroValidSharedObject (objectArray_3817, cMapElement_extensionMethodMapForBuildingContext) ;
    {
    objectArray_3817->mAttribute_mExtensionMethodMapForType.setter_insertKey (object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 75)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                                extensionMethod_extensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_extensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_enterInSemanticContext (defineExtensionMethod_extensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionMethodAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  GALGAS_lstring var_nameForUsefulness_5549 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-method.galgas", 107)), object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 107)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5549, var_nameForUsefulness_5549, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 108)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_5721 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 109)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5721, var_nameForUsefulness_5549 COMMA_SOURCE_FILE ("extension-method.galgas", 110)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5897 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 112)) ;
  GALGAS_string var_selfObjectName_5997 ;
  GALGAS_string var_selfObjectAccessor_6026 ;
  GALGAS_bool var_implementedAsFunction_6056 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5897.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 117)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 117)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_5997 = GALGAS_string ("object") ;
    var_selfObjectAccessor_6026 = GALGAS_string ("object->") ;
    var_implementedAsFunction_6056 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_5997 = GALGAS_string ("inObject") ;
    var_selfObjectAccessor_6026 = GALGAS_string ("inObject.") ;
    var_implementedAsFunction_6056 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6435 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 127)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6550 ;
  GALGAS_analysisContext var_analysisContext_6572 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5897, var_selfObjectName_5997, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-method.galgas", 134))  COMMA_SOURCE_FILE ("extension-method.galgas", 129)) ;
  {
  GALGAS_typedPropertyList temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_selfType_5897.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 141)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-method.galgas", 141)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5897.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 141)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-method.galgas", 141)))) COMMA_SOURCE_FILE ("extension-method.galgas", 141)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_selfType_5897.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 142)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 143)) ;
  }
  routine_analyzeRoutineBody (var_nameForUsefulness_5549, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6572, object->mAttribute_mExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 140)), temp_1, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-method.galgas", 145)), var_selfObjectAccessor_6026, object->mAttribute_mExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6550, var_formalParameterListForGeneration_6435, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 135)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension method ").add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 154)), GALGAS_extensionMethodForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("method-").add_operation (var_selfType_5897.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)).add_operation (object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 157)), var_selfType_5897, object->mAttribute_mExtensionMethodName.getter_string (SOURCE_FILE ("extension-method.galgas", 159)), var_implementedAsFunction_6056, var_formalParameterListForGeneration_6435, var_selfType_5897.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 162)), var_semanticInstructionListForGeneration_6550  COMMA_SOURCE_FILE ("extension-method.galgas", 155))  COMMA_SOURCE_FILE ("extension-method.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                         extensionMethod_extensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_semanticAnalysis (defineExtensionMethod_extensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.mAttribute_string, object->mAttribute_mExtensionMethodName  COMMA_SOURCE_FILE ("extension-method.galgas", 186)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_buildExtensionListMaps (defineExtensionMethod_extensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionMethodForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-method.galgas", 205)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                   extensionGetter_extensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionMethodForGeneration_headerKind (defineExtensionGetter_extensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionMethodForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 215)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 214))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 221)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList COMMA_SOURCE_FILE ("extension-method.galgas", 220))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                              extensionMethod_extensionMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionMethodForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodForGeneration * object = (const cPtr_extensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_extensionMethodFormalParameterList_11266 = object->mAttribute_mExtensionMethodFormalParameterList ;
    {
    var_extensionMethodFormalParameterList_11266.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-method.galgas", 238)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("extension-method.galgas", 239)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 241))  COMMA_SOURCE_FILE ("extension-method.galgas", 241)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 237)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 245))  COMMA_SOURCE_FILE ("extension-method.galgas", 245)) ;
    GALGAS_string var_code_12088 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mExtensionMethodName.getter_identifierRepresentation (SOURCE_FILE ("extension-method.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 248)), ioArgument_ioInclusionSet, var_extensionMethodFormalParameterList_11266, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_12088, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 246)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 260)), object->mAttribute_mExtensionMethodName, var_code_12088 COMMA_SOURCE_FILE ("extension-method.galgas", 259))) ;
  }else if (kBoolFalse == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 265)) ;
    cEnumerator_formalParameterListForGeneration enumerator_12393 (object->mAttribute_mExtensionMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_12393.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_12393.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 267)) ;
      enumerator_12393.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12502 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12538 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 271)).isValid ()) {
      uint32_t variant_12554 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-method.galgas", 271)).uintValue () ;
      bool loop_12554 = true ;
      while (loop_12554) {
        loop_12554 = var_searching_12538.isValid () ;
        if (loop_12554) {
          loop_12554 = var_searching_12538.boolValue () ;
        }
        if (loop_12554 && (0 == variant_12554)) {
          loop_12554 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-method.galgas", 271)) ;
        }
        if (loop_12554) {
          variant_12554 -- ;
          const enumGalgasBool test_1 = var_baseType_12502.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 272)).getter_isNull (SOURCE_FILE ("extension-method.galgas", 272)).operator_not (SOURCE_FILE ("extension-method.galgas", 272)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12502.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 273)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 273)).getter_hasKey (object->mAttribute_mExtensionMethodName COMMA_SOURCE_FILE ("extension-method.galgas", 273)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12502 = var_baseType_12502.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 274)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12538 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12538 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType_12502.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282)).add_operation (object->mAttribute_mExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 282))  COMMA_SOURCE_FILE ("extension-method.galgas", 282)) ;
    GALGAS_string var_methodImplementation_13196 ;
    {
    routine_generateExtensionMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_13196, inCompiler  COMMA_SOURCE_FILE ("extension-method.galgas", 283)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-method.galgas", 293)), object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, var_methodImplementation_13196 COMMA_SOURCE_FILE ("extension-method.galgas", 292))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionMethodForGeneration.mSlotID,
                                                     extensionMethod_extensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@extensionSetterAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_extensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  result_outString = GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 50)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                          extensionGetter_extensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionSetterAST_keyRepresentation (defineExtensionGetter_extensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & ioArgument_ioExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_lstring var_key_3341 = GALGAS_lstring::constructor_new (GALGAS_string ("extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 63)), object->mAttribute_mExtensionSetterName.getter_location (SOURCE_FILE ("extension-setter.galgas", 63))  COMMA_SOURCE_FILE ("extension-setter.galgas", 63)) ;
  {
  const GALGAS_extensionSetterAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3341, temp_0, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 64)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3341, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 65)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("extension-setter.galgas", 65))  COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) COMMA_SOURCE_FILE ("extension-setter.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExtensionSetterMapForBuildingContext.getter_hasKey (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 67)) COMMA_SOURCE_FILE ("extension-setter.galgas", 67)).operator_not (SOURCE_FILE ("extension-setter.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioExtensionSetterMapForBuildingContext.setter_insertKey (object->mAttribute_mTypeName, GALGAS_extensionSetterMapForType::constructor_emptyMap (SOURCE_FILE ("extension-setter.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 68)) ;
    }
  }
  cMapElement_extensionSetterMapForBuildingContext * objectArray_3836 = (cMapElement_extensionSetterMapForBuildingContext *) ioArgument_ioExtensionSetterMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_extensionSetterMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("extension-setter.galgas", 73)) ;
  if (NULL != objectArray_3836) {
      macroValidSharedObject (objectArray_3836, cMapElement_extensionSetterMapForBuildingContext) ;
    {
    objectArray_3836->mAttribute_mExtensionSetterMapForType.setter_insertKey (object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 74)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                                extensionMethod_extensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_extensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_enterInSemanticContext (defineExtensionMethod_extensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@extensionSetterAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  GALGAS_lstring var_nameForUsefulness_5568 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 106)), object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 106)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5568, var_nameForUsefulness_5568, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 107)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_5740 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 108)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5740, var_nameForUsefulness_5568 COMMA_SOURCE_FILE ("extension-setter.galgas", 109)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5916 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 111)) ;
  GALGAS_string var_selfObjectName_6016 ;
  GALGAS_string var_selfObjectAccessor_6045 ;
  GALGAS_bool var_implementedAsFunction_6075 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_selfType_5916.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 116)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-setter.galgas", 116)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_selfObjectName_6016 = GALGAS_string ("object") ;
    var_selfObjectAccessor_6045 = GALGAS_string ("object->") ;
    var_implementedAsFunction_6075 = GALGAS_bool (false) ;
  }else if (kBoolFalse == test_0) {
    var_selfObjectName_6016 = GALGAS_string ("ioObject") ;
    var_selfObjectAccessor_6045 = GALGAS_string ("ioObject.") ;
    var_implementedAsFunction_6075 = GALGAS_bool (true) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6454 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 126)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6569 ;
  GALGAS_analysisContext var_analysisContext_6591 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5916, var_selfObjectName_6016, var_selfType_5916  COMMA_SOURCE_FILE ("extension-setter.galgas", 128)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefulness_5568, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6591, object->mAttribute_mExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 139)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-setter.galgas", 140)), var_selfType_5916.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 141)), var_selfObjectAccessor_6045, object->mAttribute_mExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6569, var_formalParameterListForGeneration_6454, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 134)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extension setter ").add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 150)), GALGAS_extensionSetterForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("setter-").add_operation (var_selfType_5916.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 153)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 153)).add_operation (object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 153)), var_selfType_5916, object->mAttribute_mExtensionSetterName.getter_string (SOURCE_FILE ("extension-setter.galgas", 155)), var_implementedAsFunction_6075, var_formalParameterListForGeneration_6454, var_selfType_5916.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 158)), var_semanticInstructionListForGeneration_6569  COMMA_SOURCE_FILE ("extension-setter.galgas", 151))  COMMA_SOURCE_FILE ("extension-setter.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                         extensionMethod_extensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_semanticAnalysis (defineExtensionMethod_extensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionSetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionSettierListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  ioArgument_ioExtensionSettierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-setter.galgas", 182)), object->mAttribute_mExtensionSetterName  COMMA_SOURCE_FILE ("extension-setter.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterAST_buildExtensionListMaps (defineExtensionMethod_extensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@extensionSetterForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_extensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 202)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_extensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                   extensionGetter_extensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_extensionSetterForGeneration_headerKind (defineExtensionGetter_extensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@extensionSetterForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 212)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 211))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 218)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList COMMA_SOURCE_FILE ("extension-setter.galgas", 217))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                              extensionMethod_extensionSetterForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  cEnumerator_formalParameterListForGeneration enumerator_11046 (object->mAttribute_mExtensionSetterFormalParameterList, kEnumeration_up) ;
  while (enumerator_11046.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11046.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 233)) ;
    enumerator_11046.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_11192 = object->mAttribute_mExtensionSetterFormalParameterList ;
    {
    var_extensionSetterFormalParameterList_11192.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 238)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 239)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 241))  COMMA_SOURCE_FILE ("extension-setter.galgas", 241)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 237)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245))  COMMA_SOURCE_FILE ("extension-setter.galgas", 245)) ;
    GALGAS_string var_code_12010 ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mExtensionSetterName.getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 248)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_11192, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_12010, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 246)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 260)), object->mAttribute_mExtensionSetterName, var_code_12010 COMMA_SOURCE_FILE ("extension-setter.galgas", 259))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType_12245 = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching_12281 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 267)).isValid ()) {
      uint32_t variant_12297 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 267)).uintValue () ;
      bool loop_12297 = true ;
      while (loop_12297) {
        loop_12297 = var_searching_12281.isValid () ;
        if (loop_12297) {
          loop_12297 = var_searching_12281.boolValue () ;
        }
        if (loop_12297 && (0 == variant_12297)) {
          loop_12297 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 267)) ;
        }
        if (loop_12297) {
          variant_12297 -- ;
          const enumGalgasBool test_1 = var_baseType_12245.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 268)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 268)).operator_not (SOURCE_FILE ("extension-setter.galgas", 268)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType_12245.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 269)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 269)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-setter.galgas", 269)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType_12245 = var_baseType_12245.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 270)) ;
            }else if (kBoolFalse == test_2) {
              var_searching_12281 = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching_12281 = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_12245.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 278))  COMMA_SOURCE_FILE ("extension-setter.galgas", 278)) ;
    extensionMethod_addHeaderFileName (var_baseType_12245, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 279)) ;
    GALGAS_string var_setterImplementation_12987 ;
    {
    routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 281)), GALGAS_string::makeEmptyString (), object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_setterImplementation_12987, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 280)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 290)), object->mAttribute_mExtensionSetterName, object->mAttribute_mExtensionSetterFormalParameterList, var_setterImplementation_12987 COMMA_SOURCE_FILE ("extension-setter.galgas", 289))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                                     extensionMethod_extensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)).add_operation (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 54)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6309 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 120)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_6418 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAbstractExtensionGetterReturnedTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 122)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6309.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 124)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6309.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 125)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_6309.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 126)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (var_selfType_6309.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 127)) ;
    }
  }
  GALGAS_string var_baseTypeName_6956 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_6995 = var_selfType_6309.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)) ;
  GALGAS_functionSignature var_inheritedSignature_7059 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 132)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_7108 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)) ;
  GALGAS_location var_inheritedDeclarationLocation_7159 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).isValid ()) {
    uint32_t variant_7183 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).uintValue () ;
    bool loop_7183 = true ;
    while (loop_7183) {
      loop_7183 = var_superType_6995.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6956.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).isValid () ;
      if (loop_7183) {
        loop_7183 = var_superType_6995.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6956.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).boolValue () ;
      }
      if (loop_7183 && (0 == variant_7183)) {
        loop_7183 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)) ;
      }
      if (loop_7183) {
        variant_7183 -- ;
        const enumGalgasBool test_4 = var_superType_6995.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)).getter_hasKey (object->mAttribute_mAbstractExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_7584 ;
          GALGAS_methodKind joker_7454 ; // Joker input parameter
          GALGAS_bool joker_7531 ; // Joker input parameter
          GALGAS_string joker_7594 ; // Joker input parameter
          var_superType_6995.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)).method_searchKey (object->mAttribute_mAbstractExtensionGetterName, joker_7454, var_inheritedSignature_7059, var_inheritedDeclarationLocation_7159, joker_7531, var_inheritedReturnType_7108, var_qualifier_7584, joker_7594, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 138)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7584.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 148)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_6956 = var_superType_6995.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 149)) ;
          }
        }
        var_superType_6995 = var_superType_6995.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 152)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_6956.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 155)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 155)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6956.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7975 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 159)) ;
    cEnumerator_formalInputParameterListAST enumerator_8081 (object->mAttribute_mAbstractExtensionGetterFormalInputParameterList, kEnumeration_up) ;
    while (enumerator_8081.hasCurrentObject ()) {
      var_formalParameterListForGeneration_7975.addAssign_operation (enumerator_8081.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8081.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 163)), enumerator_8081.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 164)), enumerator_8081.current_mFormalArgumentName (HERE), enumerator_8081.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)) ;
      enumerator_8081.gotoNextObject () ;
    }
    {
    routine_checkGetterSignatures (var_formalParameterListForGeneration_7975, var_returnType_6418, object->mAttribute_mAbstractExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 171)), var_inheritedSignature_7059, var_inheritedReturnType_7108, var_inheritedDeclarationLocation_7159, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 197)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 196)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 44)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5180 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 90)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5180.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5180.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5180.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 94)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (var_selfType_5180.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 95)) ;
    }
  }
  GALGAS_string var_baseTypeName_5705 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5744 = var_selfType_5180.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 99)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5793 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 100)) ;
  GALGAS_location var_inheritedDeclarationLocation_5864 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 101)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).isValid ()) {
    uint32_t variant_5888 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)).uintValue () ;
    bool loop_5888 = true ;
    while (loop_5888) {
      loop_5888 = var_superType_5744.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5705.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).isValid () ;
      if (loop_5888) {
        loop_5888 = var_superType_5744.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5705.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 103)).boolValue () ;
      }
      if (loop_5888 && (0 == variant_5888)) {
        loop_5888 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 102)) ;
      }
      if (loop_5888) {
        variant_5888 -- ;
        const enumGalgasBool test_4 = var_superType_5744.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 104)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_6114 ;
          GALGAS_methodKind joker_6196 ; // Joker input parameter
          GALGAS_bool joker_6249 ; // Joker input parameter
          GALGAS_string joker_6263 ; // Joker input parameter
          var_superType_5744.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 106)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_6196, var_inheritedSignature_5793, var_inheritedDeclarationLocation_5864, joker_6249, var_qualifier_6114, joker_6263, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 106)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6114.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 107)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5705 = var_superType_5744.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 108)) ;
          }
        }
        var_superType_5744 = var_superType_5744.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 111)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5705.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 114)), GALGAS_string ("this getter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 114)) ;
  }
  GALGAS_variableMap var_variableMap_6600 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6694 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionMethodFormalParameterList, var_variableMap_6600, var_formalParameterListForGeneration_6694, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5705.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6694, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 129)), var_inheritedSignature_5793, var_inheritedDeclarationLocation_5864, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 155)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 43)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingAbstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5019 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 88)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5019.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5019.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 91)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_selfType_5019.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 92)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (var_selfType_5019.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 93)) ;
    }
  }
  GALGAS_string var_baseTypeName_5544 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5583 = var_selfType_5019.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 97)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5632 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 98)) ;
  GALGAS_location var_inheritedDeclarationLocation_5703 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 99)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).isValid ()) {
    uint32_t variant_5727 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)).uintValue () ;
    bool loop_5727 = true ;
    while (loop_5727) {
      loop_5727 = var_superType_5583.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5544.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).isValid () ;
      if (loop_5727) {
        loop_5727 = var_superType_5583.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5544.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 101)).boolValue () ;
      }
      if (loop_5727 && (0 == variant_5727)) {
        loop_5727 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 100)) ;
      }
      if (loop_5727) {
        variant_5727 -- ;
        const enumGalgasBool test_4 = var_superType_5583.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 102)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 102)) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 102)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_methodQualifier var_qualifier_5945 ;
          GALGAS_methodKind joker_6019 ; // Joker input parameter
          GALGAS_bool joker_6042 ; // Joker input parameter
          GALGAS_string joker_6056 ; // Joker input parameter
          var_superType_5583.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_6019, var_inheritedSignature_5632, joker_6042, var_qualifier_5945, joker_6056, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 104)) ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsInfOrEqual, var_qualifier_5945.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 105)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_baseTypeName_5544 = var_superType_5583.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 106)) ;
          }
        }
        var_superType_5583 = var_superType_5583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 109)) ;
      }
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_baseTypeName_5544.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 112)), GALGAS_string ("this setter is not declared by a super class"), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 112)) ;
  }
  GALGAS_variableMap var_variableMap_6393 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 115)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6487 ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, object->mAttribute_mOverridingExtensionSetterFormalParameterList, var_variableMap_6393, var_formalParameterListForGeneration_6487, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 117)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5544.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6487, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)), var_inheritedSignature_5632, var_inheritedDeclarationLocation_5703, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionSetterListMap,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 152)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 151)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  result_outString = GALGAS_string ("overriding extension getter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 76)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingExtensionGetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  GALGAS_lstring var_nameForUsefulness_6356 = function_getterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 126)), object->mAttribute_mOverridingExtensionGetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 126)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6356, var_nameForUsefulness_6356, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 127)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_6538 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 128)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6538, var_nameForUsefulness_6356 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_6714 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 131)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_6714.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 133)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 133)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 134)), GALGAS_string ("cannot declare a extension getter: '@").add_operation (var_selfType_6714.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 134)) ;
  }
  GALGAS_string var_baseTypeName_7058 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_7097 = var_selfType_6714.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 138)) ;
  GALGAS_functionSignature var_inheritedSignature_7161 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 139)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inheritedReturnType_7192 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 140)) ;
  GALGAS_location var_inheritedDeclarationLocation_7263 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 141)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 142)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 142)).isValid ()) {
    uint32_t variant_7287 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 142)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 142)).uintValue () ;
    bool loop_7287 = true ;
    while (loop_7287) {
      loop_7287 = var_superType_7097.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 143)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 143)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7058.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 143)).isValid () ;
      if (loop_7287) {
        loop_7287 = var_superType_7097.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 143)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 143)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7058.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 143)).boolValue () ;
      }
      if (loop_7287 && (0 == variant_7287)) {
        loop_7287 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 142)) ;
      }
      if (loop_7287) {
        variant_7287 -- ;
        const enumGalgasBool test_2 = var_superType_7097.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 144)).getter_hasKey (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 144)) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 144)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_7709 ;
          GALGAS_methodKind joker_7562 ; // Joker input parameter
          GALGAS_bool joker_7639 ; // Joker input parameter
          GALGAS_string joker_7719 ; // Joker input parameter
          var_superType_7097.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)).method_searchKey (object->mAttribute_mOverridingExtensionGetterName, joker_7562, var_inheritedSignature_7161, var_inheritedDeclarationLocation_7263, joker_7639, var_inheritedReturnType_7192, var_qualifier_7709, joker_7719, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 145)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7709.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 155)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_7058 = var_superType_7097.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 156)) ;
          }
        }
        var_superType_7097 = var_superType_7097.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 159)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_7058.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 162)), GALGAS_string ("this getter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  }
  GALGAS_analysisContext var_analysisContext_8063 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_6714, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 170))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_8838 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_8880 ;
  GALGAS_string var_returnVariableCppName_8919 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9003 ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_6714.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 177)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-getter.galgas", 177)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_6714.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 177)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 177)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 177)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_6714.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 178)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 179)) ;
  }
  routine_analyzeFunctionBody (var_nameForUsefulness_6356, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8063, object->mAttribute_mOverridingExtensionGetterFormalInputParameterList, temp_6, GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionGetterInstructionList, object->mAttribute_mOverridingExtensionGetterReturnedVariableName, object->mAttribute_mOverridingExtensionGetterReturnedTypeName, object->mAttribute_mEndOfReaderLocation, var_formalParameterListForGeneration_8838, var_returnType_8880, var_returnVariableCppName_8919, var_semanticInstructionListForGeneration_9003, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 172)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_7058.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkGetterSignatures (var_formalParameterListForGeneration_8838, var_returnType_8880, object->mAttribute_mOverridingExtensionGetterName.getter_location (SOURCE_FILE ("extension-overriding-getter.galgas", 196)), var_inheritedSignature_7161, var_inheritedReturnType_7192, var_inheritedDeclarationLocation_7263, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 193)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 204)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 207)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 207)).add_operation (object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 207)), var_selfType_6714, var_baseTypeName_7058, object->mAttribute_mOverridingExtensionGetterName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 210)), var_returnType_8880, var_returnVariableCppName_8919, var_formalParameterListForGeneration_8838, var_selfType_6714.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 214)), var_semanticInstructionListForGeneration_9003  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 205))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 203)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-getter.galgas", 238)), object->mAttribute_mOverridingExtensionGetterName  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overrideExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 260)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_overrideExtensionGetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overrideExtensionGetterForGeneration_headerKind (defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideExtensionGetterForGeneration * object = (const cPtr_overrideExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideExtensionGetterForGeneration) ;
  GALGAS_string var_extensionReaderCode_13001 ;
  {
  routine_generateExtensionGetter (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mOverridingExtensionGetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 278)), object->mAttribute_mResultVarCppName, var_extensionReaderCode_13001, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 270)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 283)), object->mAttribute_mOverridingExtensionGetterName, object->mAttribute_mResultType, var_extensionReaderCode_13001 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 282))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  result_outString = GALGAS_string ("overriding extension method @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 51)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingExtensionMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  GALGAS_lstring var_nameForUsefulness_5049 = function_methodNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 91)), object->mAttribute_mOverridingExtensionMethodName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5049, var_nameForUsefulness_5049, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 92)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_5231 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 93)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5231, var_nameForUsefulness_5049 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 94)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5407 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5407.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 98)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 99)), GALGAS_string ("cannot declare a extension method: '@").add_operation (var_selfType_5407.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 99)) ;
  }
  GALGAS_string var_baseTypeName_5751 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5790 = var_selfType_5407.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 103)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 104)) ;
  GALGAS_location var_inheritedDeclarationLocation_5910 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 105)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 106)).isValid ()) {
    uint32_t variant_5934 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 106)).uintValue () ;
    bool loop_5934 = true ;
    while (loop_5934) {
      loop_5934 = var_superType_5790.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5751.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)).isValid () ;
      if (loop_5934) {
        loop_5934 = var_superType_5790.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5751.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 107)).boolValue () ;
      }
      if (loop_5934 && (0 == variant_5934)) {
        loop_5934 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 106)) ;
      }
      if (loop_5934) {
        variant_5934 -- ;
        const enumGalgasBool test_2 = var_superType_5790.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)).getter_hasKey (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 108)) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 108)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_6160 ;
          GALGAS_methodKind joker_6242 ; // Joker input parameter
          GALGAS_bool joker_6295 ; // Joker input parameter
          GALGAS_string joker_6309 ; // Joker input parameter
          var_superType_5790.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 110)).method_searchKey (object->mAttribute_mOverridingExtensionMethodName, joker_6242, var_inheritedSignature_5839, var_inheritedDeclarationLocation_5910, joker_6295, var_qualifier_6160, joker_6309, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 110)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6160.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 111)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5751 = var_superType_5790.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 112)) ;
          }
        }
        var_superType_5790 = var_superType_5790.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 115)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5751.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 118)), GALGAS_string ("this method is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 118)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6663 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 121)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6778 ;
  GALGAS_analysisContext var_analysisContext_6800 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5407, GALGAS_string ("object"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("extension-overriding-method.galgas", 128))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 123)) ;
  {
  GALGAS_typedPropertyList temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_selfType_5407.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 135)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-method.galgas", 135)))).operator_or (GALGAS_bool (kIsEqual, var_selfType_5407.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 135)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 135)))) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 135)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = var_selfType_5407.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 136)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 137)) ;
  }
  routine_analyzeRoutineBody (var_nameForUsefulness_5049, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6800, object->mAttribute_mOverridingExtensionMethodFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 134)), temp_6, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 139)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionMethodInstructionList, object->mAttribute_mEndOfMethodLocation, var_semanticInstructionListForGeneration_6778, var_formalParameterListForGeneration_6663, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 129)) ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5751.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6663, object->mAttribute_mOverridingExtensionMethodName.getter_location (SOURCE_FILE ("extension-overriding-method.galgas", 150)), var_inheritedSignature_5839, var_inheritedDeclarationLocation_5910, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 148)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (var_selfType_5407.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)).add_operation (object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)), var_selfType_5407, var_baseTypeName_5751, object->mAttribute_mOverridingExtensionMethodName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 163)), var_formalParameterListForGeneration_6663, var_selfType_5407.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 165)), var_semanticInstructionListForGeneration_6778  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 158))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 156)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingExtensionMethodAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-method.galgas", 188)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overridingExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 208)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionMethodForGeneration_headerKind (defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodForGeneration * object = (const cPtr_overridingExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodForGeneration) ;
  GALGAS_string var_methodImplementation_11275 ;
  {
  routine_generateExtensionMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionMethodName, object->mAttribute_mExtensionMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_11275, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 217)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 227)), object->mAttribute_mExtensionMethodName, var_methodImplementation_11275 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 226))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_overridingExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  result_outString = GALGAS_string ("overriding extension setter @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 64)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingExtensionSetterAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  GALGAS_lstring var_nameForUsefulness_5057 = function_setterNameForUsefulEntitiesGraph (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 91)), object->mAttribute_mOverridingExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_5057, var_nameForUsefulness_5057, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 92)) ;
  }
  GALGAS_lstring var_typeNameForUsefulness_5239 = function_typeNameForUsefulEntitiesGraph (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 93)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_5239, var_nameForUsefulness_5057 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 94)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_5415 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 96)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_selfType_5415.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 98)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("extension-overriding-setter.galgas", 98)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 99)), GALGAS_string ("cannot declare a extension setter: '@").add_operation (var_selfType_5415.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)), fixItArray1  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 99)) ;
  }
  GALGAS_string var_baseTypeName_5758 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_proxy var_superType_5797 = var_selfType_5415.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 103)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_5846 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 104)) ;
  GALGAS_location var_inheritedDeclarationLocation_5917 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 105)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 106)).isValid ()) {
    uint32_t variant_5941 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 106)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 106)).uintValue () ;
    bool loop_5941 = true ;
    while (loop_5941) {
      loop_5941 = var_superType_5797.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5758.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)).isValid () ;
      if (loop_5941) {
        loop_5941 = var_superType_5797.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 107)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 107)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_5758.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 107)).boolValue () ;
      }
      if (loop_5941 && (0 == variant_5941)) {
        loop_5941 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 106)) ;
      }
      if (loop_5941) {
        variant_5941 -- ;
        const enumGalgasBool test_2 = var_superType_5797.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 108)).getter_hasKey (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 108)) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 108)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_methodQualifier var_qualifier_6159 ;
          GALGAS_methodKind joker_6233 ; // Joker input parameter
          GALGAS_bool joker_6256 ; // Joker input parameter
          GALGAS_string joker_6270 ; // Joker input parameter
          var_superType_5797.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 110)).method_searchKey (object->mAttribute_mOverridingExtensionSetterName, joker_6233, var_inheritedSignature_5846, joker_6256, var_qualifier_6159, joker_6270, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 110)) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6159.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 111)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_baseTypeName_5758 = var_superType_5797.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 112)) ;
          }
        }
        var_superType_5797 = var_superType_5797.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 115)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_baseTypeName_5758.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 118)), GALGAS_string ("this setter is not declared by a super class"), fixItArray5  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 118)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_6624 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 121)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6739 ;
  GALGAS_analysisContext var_analysisContext_6761 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_selfType_5415, GALGAS_string ("object"), var_selfType_5415  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 123)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefulness_5057, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6761, object->mAttribute_mOverridingExtensionSetterFormalParameterList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 135)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 136)), var_selfType_5415.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 137)), GALGAS_string ("object->"), object->mAttribute_mOverridingExtensionSetterInstructionList, object->mAttribute_mEndOfSetterDeclarationLocation, var_semanticInstructionListForGeneration_6739, var_formalParameterListForGeneration_6624, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 130)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_baseTypeName_5758.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    routine_checkMethodSignatures (var_formalParameterListForGeneration_6624, object->mAttribute_mOverridingExtensionSetterName.getter_location (SOURCE_FILE ("extension-overriding-setter.galgas", 148)), var_inheritedSignature_5846, var_inheritedDeclarationLocation_5917, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 146)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 155)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)).add_operation (object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 158)), var_selfType_5415, var_baseTypeName_5758, object->mAttribute_mOverridingExtensionSetterName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 161)), var_formalParameterListForGeneration_6624, var_selfType_5415.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 163)), var_semanticInstructionListForGeneration_6739  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 156))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingExtensionSetterAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionSetterListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("extension-overriding-setter.galgas", 188)), object->mAttribute_mOverridingExtensionSetterName  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_overridingExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 208)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionSetterForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_overridingExtensionSetterForGeneration_headerKind (defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterForGeneration * object = (const cPtr_overridingExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterForGeneration) ;
  GALGAS_string var_methodImplementation_11062 ;
  {
  routine_generateExtensionSetter (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 218)), object->mAttribute_mBaseTypeName, object->mAttribute_mExtensionSetterName, ioArgument_ioInclusionSet, object->mAttribute_mExtensionSetterFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation_11062, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 217)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_11099 = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching_11133 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 228)).isValid ()) {
    uint32_t variant_11147 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 228)).uintValue () ;
    bool loop_11147 = true ;
    while (loop_11147) {
      loop_11147 = var_searching_11133.isValid () ;
      if (loop_11147) {
        loop_11147 = var_searching_11133.boolValue () ;
      }
      if (loop_11147 && (0 == variant_11147)) {
        loop_11147 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 228)) ;
      }
      if (loop_11147) {
        variant_11147 -- ;
        const enumGalgasBool test_0 = var_baseType_11099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 229)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 229)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 229)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType_11099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).getter_hasKey (object->mAttribute_mExtensionSetterName COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 230)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType_11099 = var_baseType_11099.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 231)) ;
          }else if (kBoolFalse == test_1) {
            var_searching_11133 = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching_11133 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType_11099.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239)).add_operation (object->mAttribute_mExtensionSetterName, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 239)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 240)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 242)), object->mAttribute_mExtensionSetterName, var_methodImplementation_11062 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 241))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'generateFewHeaderFiles'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool onceFunction_generateFewHeaderFiles (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (NULL,
                                                                    releaseOnceFunctionResult_generateFewHeaderFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixAddOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAddOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 250)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAddOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixAddOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAddOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAddOperator) {
    gOnceFunctionResult_infixAddOperator = onceFunction_infixAddOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAddOperator = true ;
  }
  return gOnceFunctionResult_infixAddOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAddOperator (void) {
  gOnceFunctionResult_infixAddOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAddOperator (NULL,
                                                              releaseOnceFunctionResult_infixAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAddOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAddOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixAddOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAddOperator ("infixAddOperator",
                                                                  functionWithGenericHeader_infixAddOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixAddOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixSubOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixSubOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 251)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixSubOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixSubOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixSubOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixSubOperator) {
    gOnceFunctionResult_infixSubOperator = onceFunction_infixSubOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixSubOperator = true ;
  }
  return gOnceFunctionResult_infixSubOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixSubOperator (void) {
  gOnceFunctionResult_infixSubOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixSubOperator (NULL,
                                                              releaseOnceFunctionResult_infixSubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixSubOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixSubOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixSubOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixSubOperator ("infixSubOperator",
                                                                  functionWithGenericHeader_infixSubOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixSubOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixMulOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixMulOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 2U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 252)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixMulOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixMulOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixMulOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixMulOperator) {
    gOnceFunctionResult_infixMulOperator = onceFunction_infixMulOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixMulOperator = true ;
  }
  return gOnceFunctionResult_infixMulOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixMulOperator (void) {
  gOnceFunctionResult_infixMulOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixMulOperator (NULL,
                                                              releaseOnceFunctionResult_infixMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixMulOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixMulOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixMulOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixMulOperator ("infixMulOperator",
                                                                  functionWithGenericHeader_infixMulOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixMulOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixDivOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixDivOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 3U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 253)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixDivOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixDivOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixDivOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixDivOperator) {
    gOnceFunctionResult_infixDivOperator = onceFunction_infixDivOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixDivOperator = true ;
  }
  return gOnceFunctionResult_infixDivOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixDivOperator (void) {
  gOnceFunctionResult_infixDivOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixDivOperator (NULL,
                                                              releaseOnceFunctionResult_infixDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixDivOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixDivOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixDivOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixDivOperator ("infixDivOperator",
                                                                  functionWithGenericHeader_infixDivOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixDivOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixModOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixModOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 4U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 254)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixModOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixModOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixModOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixModOperator) {
    gOnceFunctionResult_infixModOperator = onceFunction_infixModOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixModOperator = true ;
  }
  return gOnceFunctionResult_infixModOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixModOperator (void) {
  gOnceFunctionResult_infixModOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixModOperator (NULL,
                                                              releaseOnceFunctionResult_infixModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixModOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixModOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixModOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixModOperator ("infixModOperator",
                                                                  functionWithGenericHeader_infixModOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixModOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'infixShiftOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixShiftOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 5U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 255)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixShiftOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixShiftOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixShiftOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixShiftOperator) {
    gOnceFunctionResult_infixShiftOperator = onceFunction_infixShiftOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixShiftOperator = true ;
  }
  return gOnceFunctionResult_infixShiftOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixShiftOperator (void) {
  gOnceFunctionResult_infixShiftOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixShiftOperator (NULL,
                                                                releaseOnceFunctionResult_infixShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixShiftOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixShiftOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_infixShiftOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixShiftOperator ("infixShiftOperator",
                                                                    functionWithGenericHeader_infixShiftOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_infixShiftOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixPlusOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixPlusOperator (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 6U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 256)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixPlusOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixPlusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixPlusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixPlusOperator) {
    gOnceFunctionResult_prefixPlusOperator = onceFunction_prefixPlusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixPlusOperator = true ;
  }
  return gOnceFunctionResult_prefixPlusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixPlusOperator (void) {
  gOnceFunctionResult_prefixPlusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixPlusOperator (NULL,
                                                                releaseOnceFunctionResult_prefixPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixPlusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixPlusOperator (C_Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_prefixPlusOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixPlusOperator ("prefixPlusOperator",
                                                                    functionWithGenericHeader_prefixPlusOperator,
                                                                    & kTypeDescriptor_GALGAS_uint,
                                                                    0,
                                                                    functionArgs_prefixPlusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixMinusOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixMinusOperator (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 7U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 257)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixMinusOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixMinusOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixMinusOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixMinusOperator) {
    gOnceFunctionResult_prefixMinusOperator = onceFunction_prefixMinusOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixMinusOperator = true ;
  }
  return gOnceFunctionResult_prefixMinusOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixMinusOperator (void) {
  gOnceFunctionResult_prefixMinusOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixMinusOperator (NULL,
                                                                 releaseOnceFunctionResult_prefixMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixMinusOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixMinusOperator (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_prefixMinusOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixMinusOperator ("prefixMinusOperator",
                                                                     functionWithGenericHeader_prefixMinusOperator,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_prefixMinusOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'prefixTildeOperator'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixTildeOperator (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 8U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 258)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixTildeOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixTildeOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixTildeOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixTildeOperator) {
    gOnceFunctionResult_prefixTildeOperator = onceFunction_prefixTildeOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixTildeOperator = true ;
  }
  return gOnceFunctionResult_prefixTildeOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixTildeOperator (void) {
  gOnceFunctionResult_prefixTildeOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixTildeOperator (NULL,
                                                                 releaseOnceFunctionResult_prefixTildeOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixTildeOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixTildeOperator (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_prefixTildeOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixTildeOperator ("prefixTildeOperator",
                                                                     functionWithGenericHeader_prefixTildeOperator,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_prefixTildeOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'incDecOperator'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_incDecOperator (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 9U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 259)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_incDecOperator = false ;
static GALGAS_uint gOnceFunctionResult_incDecOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_incDecOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_incDecOperator) {
    gOnceFunctionResult_incDecOperator = onceFunction_incDecOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_incDecOperator = true ;
  }
  return gOnceFunctionResult_incDecOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_incDecOperator (void) {
  gOnceFunctionResult_incDecOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_incDecOperator (NULL,
                                                            releaseOnceFunctionResult_incDecOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_incDecOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_incDecOperator (C_Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_incDecOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_incDecOperator ("incDecOperator",
                                                                functionWithGenericHeader_incDecOperator,
                                                                & kTypeDescriptor_GALGAS_uint,
                                                                0,
                                                                functionArgs_incDecOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixAndOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAndOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 10U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 261)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAndOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixAndOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAndOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAndOperator) {
    gOnceFunctionResult_infixAndOperator = onceFunction_infixAndOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAndOperator = true ;
  }
  return gOnceFunctionResult_infixAndOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAndOperator (void) {
  gOnceFunctionResult_infixAndOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAndOperator (NULL,
                                                              releaseOnceFunctionResult_infixAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAndOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAndOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixAndOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAndOperator ("infixAndOperator",
                                                                  functionWithGenericHeader_infixAndOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixAndOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'infixOrOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixOrOperator (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 11U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 262)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixOrOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixOrOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixOrOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixOrOperator) {
    gOnceFunctionResult_infixOrOperator = onceFunction_infixOrOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixOrOperator = true ;
  }
  return gOnceFunctionResult_infixOrOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixOrOperator (void) {
  gOnceFunctionResult_infixOrOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixOrOperator (NULL,
                                                             releaseOnceFunctionResult_infixOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixOrOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixOrOperator (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_infixOrOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixOrOperator ("infixOrOperator",
                                                                 functionWithGenericHeader_infixOrOperator,
                                                                 & kTypeDescriptor_GALGAS_uint,
                                                                 0,
                                                                 functionArgs_infixOrOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'infixXorOperator'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixXorOperator (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 12U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 263)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixXorOperator = false ;
static GALGAS_uint gOnceFunctionResult_infixXorOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixXorOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixXorOperator) {
    gOnceFunctionResult_infixXorOperator = onceFunction_infixXorOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixXorOperator = true ;
  }
  return gOnceFunctionResult_infixXorOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixXorOperator (void) {
  gOnceFunctionResult_infixXorOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixXorOperator (NULL,
                                                              releaseOnceFunctionResult_infixXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixXorOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixXorOperator (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_infixXorOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixXorOperator ("infixXorOperator",
                                                                  functionWithGenericHeader_infixXorOperator,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_infixXorOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'prefixNotOperator'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixNotOperator (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 13U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 264)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixNotOperator = false ;
static GALGAS_uint gOnceFunctionResult_prefixNotOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixNotOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixNotOperator) {
    gOnceFunctionResult_prefixNotOperator = onceFunction_prefixNotOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixNotOperator = true ;
  }
  return gOnceFunctionResult_prefixNotOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixNotOperator (void) {
  gOnceFunctionResult_prefixNotOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixNotOperator (NULL,
                                                               releaseOnceFunctionResult_prefixNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixNotOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixNotOperator (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_prefixNotOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixNotOperator ("prefixNotOperator",
                                                                   functionWithGenericHeader_prefixNotOperator,
                                                                   & kTypeDescriptor_GALGAS_uint,
                                                                   0,
                                                                   functionArgs_prefixNotOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'isComparable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_isComparable (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 14U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 266)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_isComparable = false ;
static GALGAS_uint gOnceFunctionResult_isComparable ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_isComparable (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_isComparable) {
    gOnceFunctionResult_isComparable = onceFunction_isComparable (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_isComparable = true ;
  }
  return gOnceFunctionResult_isComparable ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_isComparable (void) {
  gOnceFunctionResult_isComparable.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_isComparable (NULL,
                                                          releaseOnceFunctionResult_isComparable) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_isComparable [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_isComparable (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_isComparable (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_isComparable ("isComparable",
                                                              functionWithGenericHeader_isComparable,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              0,
                                                              functionArgs_isComparable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'plusEqualOperatorWithExpression'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_plusEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 15U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 268)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_plusEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_plusEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_plusEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_plusEqualOperatorWithExpression) {
    gOnceFunctionResult_plusEqualOperatorWithExpression = onceFunction_plusEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_plusEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_plusEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_plusEqualOperatorWithExpression (void) {
  gOnceFunctionResult_plusEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_plusEqualOperatorWithExpression (NULL,
                                                                             releaseOnceFunctionResult_plusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plusEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plusEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_plusEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plusEqualOperatorWithExpression ("plusEqualOperatorWithExpression",
                                                                                 functionWithGenericHeader_plusEqualOperatorWithExpression,
                                                                                 & kTypeDescriptor_GALGAS_uint,
                                                                                 0,
                                                                                 functionArgs_plusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'minusEqualOperatorWithExpression'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_minusEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 16U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 269)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_minusEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_minusEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_minusEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_minusEqualOperatorWithExpression) {
    gOnceFunctionResult_minusEqualOperatorWithExpression = onceFunction_minusEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_minusEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_minusEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_minusEqualOperatorWithExpression (void) {
  gOnceFunctionResult_minusEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_minusEqualOperatorWithExpression (NULL,
                                                                              releaseOnceFunctionResult_minusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minusEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_minusEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_minusEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minusEqualOperatorWithExpression ("minusEqualOperatorWithExpression",
                                                                                  functionWithGenericHeader_minusEqualOperatorWithExpression,
                                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                                  0,
                                                                                  functionArgs_minusEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'mulEqualOperatorWithExpression'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_mulEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 17U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 270)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_mulEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_mulEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_mulEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mulEqualOperatorWithExpression) {
    gOnceFunctionResult_mulEqualOperatorWithExpression = onceFunction_mulEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mulEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_mulEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_mulEqualOperatorWithExpression (void) {
  gOnceFunctionResult_mulEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_mulEqualOperatorWithExpression (NULL,
                                                                            releaseOnceFunctionResult_mulEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mulEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mulEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_mulEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mulEqualOperatorWithExpression ("mulEqualOperatorWithExpression",
                                                                                functionWithGenericHeader_mulEqualOperatorWithExpression,
                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                0,
                                                                                functionArgs_mulEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'divEqualOperatorWithExpression'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_divEqualOperatorWithExpression (C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 18U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 271)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_divEqualOperatorWithExpression = false ;
static GALGAS_uint gOnceFunctionResult_divEqualOperatorWithExpression ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_divEqualOperatorWithExpression (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_divEqualOperatorWithExpression) {
    gOnceFunctionResult_divEqualOperatorWithExpression = onceFunction_divEqualOperatorWithExpression (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_divEqualOperatorWithExpression = true ;
  }
  return gOnceFunctionResult_divEqualOperatorWithExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_divEqualOperatorWithExpression (void) {
  gOnceFunctionResult_divEqualOperatorWithExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_divEqualOperatorWithExpression (NULL,
                                                                            releaseOnceFunctionResult_divEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_divEqualOperatorWithExpression [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_divEqualOperatorWithExpression (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_divEqualOperatorWithExpression (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_divEqualOperatorWithExpression ("divEqualOperatorWithExpression",
                                                                                functionWithGenericHeader_divEqualOperatorWithExpression,
                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                0,
                                                                                functionArgs_divEqualOperatorWithExpression) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixAddOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixAddOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 19U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 273)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixAddOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixAddOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixAddOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixAddOperatorNoOVF) {
    gOnceFunctionResult_infixAddOperatorNoOVF = onceFunction_infixAddOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixAddOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixAddOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixAddOperatorNoOVF (void) {
  gOnceFunctionResult_infixAddOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixAddOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixAddOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixAddOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixAddOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixAddOperatorNoOVF ("infixAddOperatorNoOVF",
                                                                       functionWithGenericHeader_infixAddOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixAddOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixSubOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixSubOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 20U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 274)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixSubOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixSubOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixSubOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixSubOperatorNoOVF) {
    gOnceFunctionResult_infixSubOperatorNoOVF = onceFunction_infixSubOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixSubOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixSubOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixSubOperatorNoOVF (void) {
  gOnceFunctionResult_infixSubOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixSubOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixSubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixSubOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixSubOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixSubOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixSubOperatorNoOVF ("infixSubOperatorNoOVF",
                                                                       functionWithGenericHeader_infixSubOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixSubOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixMulOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixMulOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 21U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 275)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixMulOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixMulOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixMulOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixMulOperatorNoOVF) {
    gOnceFunctionResult_infixMulOperatorNoOVF = onceFunction_infixMulOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixMulOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixMulOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixMulOperatorNoOVF (void) {
  gOnceFunctionResult_infixMulOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixMulOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixMulOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixMulOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixMulOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixMulOperatorNoOVF ("infixMulOperatorNoOVF",
                                                                       functionWithGenericHeader_infixMulOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixMulOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'infixDivOperatorNoOVF'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_infixDivOperatorNoOVF (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 22U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 276)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_infixDivOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_infixDivOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_infixDivOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_infixDivOperatorNoOVF) {
    gOnceFunctionResult_infixDivOperatorNoOVF = onceFunction_infixDivOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_infixDivOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_infixDivOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_infixDivOperatorNoOVF (void) {
  gOnceFunctionResult_infixDivOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_infixDivOperatorNoOVF (NULL,
                                                                   releaseOnceFunctionResult_infixDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_infixDivOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_infixDivOperatorNoOVF (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_infixDivOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_infixDivOperatorNoOVF ("infixDivOperatorNoOVF",
                                                                       functionWithGenericHeader_infixDivOperatorNoOVF,
                                                                       & kTypeDescriptor_GALGAS_uint,
                                                                       0,
                                                                       functionArgs_infixDivOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Once function 'prefixMinusOperatorNoOVF'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_prefixMinusOperatorNoOVF (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 23U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 277)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_prefixMinusOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_prefixMinusOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF) {
    gOnceFunctionResult_prefixMinusOperatorNoOVF = onceFunction_prefixMinusOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_prefixMinusOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_prefixMinusOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_prefixMinusOperatorNoOVF (void) {
  gOnceFunctionResult_prefixMinusOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_prefixMinusOperatorNoOVF (NULL,
                                                                      releaseOnceFunctionResult_prefixMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_prefixMinusOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_prefixMinusOperatorNoOVF (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_prefixMinusOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_prefixMinusOperatorNoOVF ("prefixMinusOperatorNoOVF",
                                                                          functionWithGenericHeader_prefixMinusOperatorNoOVF,
                                                                          & kTypeDescriptor_GALGAS_uint,
                                                                          0,
                                                                          functionArgs_prefixMinusOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'incDecOperatorNoOVF'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_incDecOperatorNoOVF (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 278)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_incDecOperatorNoOVF = false ;
static GALGAS_uint gOnceFunctionResult_incDecOperatorNoOVF ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_incDecOperatorNoOVF (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_incDecOperatorNoOVF) {
    gOnceFunctionResult_incDecOperatorNoOVF = onceFunction_incDecOperatorNoOVF (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_incDecOperatorNoOVF = true ;
  }
  return gOnceFunctionResult_incDecOperatorNoOVF ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_incDecOperatorNoOVF (void) {
  gOnceFunctionResult_incDecOperatorNoOVF.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_incDecOperatorNoOVF (NULL,
                                                                 releaseOnceFunctionResult_incDecOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_incDecOperatorNoOVF [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_incDecOperatorNoOVF (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_incDecOperatorNoOVF (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_incDecOperatorNoOVF ("incDecOperatorNoOVF",
                                                                     functionWithGenericHeader_incDecOperatorNoOVF,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_incDecOperatorNoOVF) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'supportWithAccessor'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_supportWithAccessor (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 26U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 280)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_supportWithAccessor = false ;
static GALGAS_uint gOnceFunctionResult_supportWithAccessor ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_supportWithAccessor (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_supportWithAccessor) {
    gOnceFunctionResult_supportWithAccessor = onceFunction_supportWithAccessor (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_supportWithAccessor = true ;
  }
  return gOnceFunctionResult_supportWithAccessor ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_supportWithAccessor (void) {
  gOnceFunctionResult_supportWithAccessor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_supportWithAccessor (NULL,
                                                                 releaseOnceFunctionResult_supportWithAccessor) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_supportWithAccessor [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_supportWithAccessor (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_supportWithAccessor (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_supportWithAccessor ("supportWithAccessor",
                                                                     functionWithGenericHeader_supportWithAccessor,
                                                                     & kTypeDescriptor_GALGAS_uint,
                                                                     0,
                                                                     functionArgs_supportWithAccessor) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Once function 'plusEqualOperatorWithFieldListNeedsCompilerArg'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 27U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 281)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg = false ;
static GALGAS_uint gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_plusEqualOperatorWithFieldListNeedsCompilerArg (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg) {
    gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg = onceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_plusEqualOperatorWithFieldListNeedsCompilerArg = true ;
  }
  return gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg (void) {
  gOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_plusEqualOperatorWithFieldListNeedsCompilerArg (NULL,
                                                                                            releaseOnceFunctionResult_plusEqualOperatorWithFieldListNeedsCompilerArg) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plusEqualOperatorWithFieldListNeedsCompilerArg [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plusEqualOperatorWithFieldListNeedsCompilerArg (C_Compiler * inCompiler,
                                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                                               const GALGAS_location & /* inErrorLocation */
                                                                                               COMMA_LOCATION_ARGS) {
  return function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plusEqualOperatorWithFieldListNeedsCompilerArg ("plusEqualOperatorWithFieldListNeedsCompilerArg",
                                                                                                functionWithGenericHeader_plusEqualOperatorWithFieldListNeedsCompilerArg,
                                                                                                & kTypeDescriptor_GALGAS_uint,
                                                                                                0,
                                                                                                functionArgs_plusEqualOperatorWithFieldListNeedsCompilerArg) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'generateEnumerationHelperMethods'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateEnumerationHelperMethods (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 28U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 282)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateEnumerationHelperMethods = false ;
static GALGAS_uint gOnceFunctionResult_generateEnumerationHelperMethods ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateEnumerationHelperMethods (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateEnumerationHelperMethods) {
    gOnceFunctionResult_generateEnumerationHelperMethods = onceFunction_generateEnumerationHelperMethods (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateEnumerationHelperMethods = true ;
  }
  return gOnceFunctionResult_generateEnumerationHelperMethods ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateEnumerationHelperMethods (void) {
  gOnceFunctionResult_generateEnumerationHelperMethods.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateEnumerationHelperMethods (NULL,
                                                                              releaseOnceFunctionResult_generateEnumerationHelperMethods) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateEnumerationHelperMethods [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateEnumerationHelperMethods (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_generateEnumerationHelperMethods (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateEnumerationHelperMethods ("generateEnumerationHelperMethods",
                                                                                  functionWithGenericHeader_generateEnumerationHelperMethods,
                                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                                  0,
                                                                                  functionArgs_generateEnumerationHelperMethods) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Once function 'doNotGenererateObjectCompare'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_doNotGenererateObjectCompare (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 29U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 283)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_doNotGenererateObjectCompare = false ;
static GALGAS_uint gOnceFunctionResult_doNotGenererateObjectCompare ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_doNotGenererateObjectCompare (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_doNotGenererateObjectCompare) {
    gOnceFunctionResult_doNotGenererateObjectCompare = onceFunction_doNotGenererateObjectCompare (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_doNotGenererateObjectCompare = true ;
  }
  return gOnceFunctionResult_doNotGenererateObjectCompare ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_doNotGenererateObjectCompare (void) {
  gOnceFunctionResult_doNotGenererateObjectCompare.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_doNotGenererateObjectCompare (NULL,
                                                                          releaseOnceFunctionResult_doNotGenererateObjectCompare) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_doNotGenererateObjectCompare [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_doNotGenererateObjectCompare (C_Compiler * inCompiler,
                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  return function_doNotGenererateObjectCompare (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_doNotGenererateObjectCompare ("doNotGenererateObjectCompare",
                                                                              functionWithGenericHeader_doNotGenererateObjectCompare,
                                                                              & kTypeDescriptor_GALGAS_uint,
                                                                              0,
                                                                              functionArgs_doNotGenererateObjectCompare) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Once function 'generateDescriptionGetterUtilityMethod'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateDescriptionGetterUtilityMethod (C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 30U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 284)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod = false ;
static GALGAS_uint gOnceFunctionResult_generateDescriptionGetterUtilityMethod ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateDescriptionGetterUtilityMethod (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod) {
    gOnceFunctionResult_generateDescriptionGetterUtilityMethod = onceFunction_generateDescriptionGetterUtilityMethod (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateDescriptionGetterUtilityMethod = true ;
  }
  return gOnceFunctionResult_generateDescriptionGetterUtilityMethod ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateDescriptionGetterUtilityMethod (void) {
  gOnceFunctionResult_generateDescriptionGetterUtilityMethod.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateDescriptionGetterUtilityMethod (NULL,
                                                                                    releaseOnceFunctionResult_generateDescriptionGetterUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateDescriptionGetterUtilityMethod [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateDescriptionGetterUtilityMethod (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateDescriptionGetterUtilityMethod ("generateDescriptionGetterUtilityMethod",
                                                                                        functionWithGenericHeader_generateDescriptionGetterUtilityMethod,
                                                                                        & kTypeDescriptor_GALGAS_uint,
                                                                                        0,
                                                                                        functionArgs_generateDescriptionGetterUtilityMethod) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Once function 'generateCopyConstructorAndAssignmentOperator'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_generateCopyConstructorAndAssignmentOperator (C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outMask ; // Returned variable
  result_outMask = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 31U) COMMA_SOURCE_FILE ("semanticsTypes.galgas", 285)) ;
//---
  return result_outMask ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator = false ;
static GALGAS_uint gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_generateCopyConstructorAndAssignmentOperator (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator) {
    gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator = onceFunction_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateCopyConstructorAndAssignmentOperator = true ;
  }
  return gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_generateCopyConstructorAndAssignmentOperator (void) {
  gOnceFunctionResult_generateCopyConstructorAndAssignmentOperator.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_generateCopyConstructorAndAssignmentOperator (NULL,
                                                                                          releaseOnceFunctionResult_generateCopyConstructorAndAssignmentOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_generateCopyConstructorAndAssignmentOperator [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_generateCopyConstructorAndAssignmentOperator (C_Compiler * inCompiler,
                                                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                                                             const GALGAS_location & /* inErrorLocation */
                                                                                             COMMA_LOCATION_ARGS) {
  return function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_generateCopyConstructorAndAssignmentOperator ("generateCopyConstructorAndAssignmentOperator",
                                                                                              functionWithGenericHeader_generateCopyConstructorAndAssignmentOperator,
                                                                                              & kTypeDescriptor_GALGAS_uint,
                                                                                              0,
                                                                                              functionArgs_generateCopyConstructorAndAssignmentOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                           GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                           GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                           GALGAS_string & outArgument_outEnumeratedType,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_2676 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_2676 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 28)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 29)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_2676, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 30)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 31)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 32)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 33)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                           extensionMethod_stringsetPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getEnumerationList (defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getEnumerationList'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                      GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                      GALGAS_string & outArgument_outEnumeratedType,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_uintTypeIndex_3345 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_3345 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 45)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 46)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_3345, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 47)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 48)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 49)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 50)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                           extensionMethod_dataPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getEnumerationList (defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_setterMap & outArgument_outSetterMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringType_4399 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_4399 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 65)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 66)) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 69)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), var_stringType_4399, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 67)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getSetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 100)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                  extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                  extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                  extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                  extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                  extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 210)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                  extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                  extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 223)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                  extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 229)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                  extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                 GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_14594 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_14594 COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 244)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)), var_stringTypeIndex_14594, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                 extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWithoutArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithoutArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inConstructorName,
                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                              const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_2227 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2227 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 24)) ;
  }
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 30)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 31)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_2227 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterConstructorWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWithArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                           const GALGAS_string constinArgument_inConstructorName,
                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                           const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_2938 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2938 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 49)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t_3068 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3068 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 54)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 54)), var_t_3068, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 54)) ;
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 53))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 53)), temp_0, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_2938 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 52)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWith_32_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_3989 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3989 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 74)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_4116 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 75)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_4165 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4165 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  }
  var_argumentTypeList_4116.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 78)), var_t_4165, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4165 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 79)) ;
  }
  var_argumentTypeList_4116.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 80)), var_t_4165, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 80)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 82)), var_argumentTypeList_4116, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_3989 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 81)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterConstructorWith3Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterConstructorWith_33_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                const GALGAS_string constinArgument_inArgument_33_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_5420 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5420 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_t_5531 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5531 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_5570 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  var_argumentTypeList_5570.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 107)), var_t_5531, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5531 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
  var_argumentTypeList_5570.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 109)), var_t_5531, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_5531 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 110)) ;
  }
  var_argumentTypeList_5570.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 111)), var_t_5531, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 111)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 113)), var_argumentTypeList_5570, constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_5420 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 112)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@locationPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_locationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 125)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 126)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 133)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                          extensionMethod_locationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@stringPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 154)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 155)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 169)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 176)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 185)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 192)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 199)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 208)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 215)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 224)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 233)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 240)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 247)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 256)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 265)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 274)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 285)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@applicationPredefinedTypeAST getConstructorMap'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_applicationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 303)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 304)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 311)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 318)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 325)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 332)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 342)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 349)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 360)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 371)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 383)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 390)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 401)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 412)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 424)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 431)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 442)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 453)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 465)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 472)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@charPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_charPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 489)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 490)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 497)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterFromRawKeyboard"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 506)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_charPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                          extensionMethod_charPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getConstructorMap (defineExtensionMethod_charPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@uintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 520)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 521)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 528)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 535)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 542)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 549)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 567)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 568)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 575)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                          extensionMethod_sintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@uint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 589)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 590)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 597)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 606)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 615)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@sint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 631)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 632)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 639)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@stringsetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringsetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 653)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 654)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 661)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 670)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 679)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringsetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@binarysetPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binarysetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 695)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 696)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 705)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 712)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 719)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 728)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 741)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 754)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 767)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 780)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 793)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 806)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 819)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 832)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 845)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 858)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 871)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@typePredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 891)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 892)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                          extensionMethod_typePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getConstructorMap (defineExtensionMethod_typePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@bigintPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bigintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 907)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 908)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                          extensionMethod_bigintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@dataPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_dataPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 923)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 924)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 931)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                          extensionMethod_dataPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getConstructorMap (defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@functionPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 947)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 948)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 955)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 964)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                          extensionMethod_functionPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getConstructorMap (defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@doublePredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_doublePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 981)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 982)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 989)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                          extensionMethod_doublePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getConstructorMap (defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@timerPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_timerPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1006)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1007)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                          extensionMethod_timerPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getConstructorMap (defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_2220 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2220 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 26)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 28))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 28)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 29)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 30)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 31)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_2220, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 34)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 27)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWithoutArgument'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_3026 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3026 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 49)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 51))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 51)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 52)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 53)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 54)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_3026, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 57)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 50)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterInheritedGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_3924 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3924 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 73)) ;
  }
  GALGAS_functionSignature var_argList_4042 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 74)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_4091 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4091 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 76)) ;
  }
  var_argList_4042.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 77)), var_t_4091, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 77)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 79))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 79)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 80)), var_argList_4042, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 82)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_3924, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 85)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 78)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterInheritedGetterWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterInheritedGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_5034 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5034 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  }
  GALGAS_functionSignature var_argList_5152 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_5201 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5201 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 106)) ;
  }
  var_argList_5152.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 107)), var_t_5201, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 107)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5201 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 108)) ;
  }
  var_argList_5152.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 109)), var_t_5201, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 109)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 111))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 111)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 112)), var_argList_5152, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 114)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_5034, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 117)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 110)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'enterBaseGetterWithoutArgument'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inGetterName,
                                             const GALGAS_string constinArgument_inReturnedTypeName,
                                             const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_6144 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6144 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 133)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 134)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 135)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 136)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_6144, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 139)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 132)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'enterBaseGetterWithArgument'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                          const GALGAS_string constinArgument_inGetterName,
                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                          const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_6992 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6992 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)) ;
  }
  GALGAS_functionSignature var_argList_7125 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 156)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_7156 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_7156 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 158)) ;
  }
  var_argList_7125.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 159)), var_t_7156, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 159)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 161))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 162)), var_argList_7125, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 164)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_6992, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 167)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 160)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'enterBaseFinalGetterWithArgument'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_8038 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8038 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 183)) ;
  }
  GALGAS_functionSignature var_argList_8171 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 184)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_8202 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_8202 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 186)) ;
  }
  var_argList_8171.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 187)), var_t_8202, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 187)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 189))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 190)), var_argList_8171, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 192)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_8038, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 195)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 188)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'enterBaseGetterWith2Arguments'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inArgument_32_TypeName,
                                               const GALGAS_string constinArgument_inArgument_32_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_9141 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_9141 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 213)) ;
  }
  GALGAS_functionSignature var_argList_9274 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 214)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_9305 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9305 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 216)) ;
  }
  var_argList_9274.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 217)), var_t_9305, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 217)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_9305 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 218)) ;
  }
  var_argList_9274.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 219)), var_t_9305, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 219)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 222)), var_argList_9274, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 224)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_9141, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 227)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 220)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'enterBaseFinalGetterWith2Arguments'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterBaseFinalGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasLexiqueAndLocationArguments,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeIndex_10380 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10380 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 245)) ;
  }
  GALGAS_functionSignature var_argList_10513 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 246)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t_10544 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10544 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 248)) ;
  }
  var_argList_10513.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 249)), var_t_10544, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 249)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10544 COMMA_SOURCE_FILE ("semanticsGetters.galgas", 250)) ;
  }
  var_argList_10513.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 251)), var_t_10544, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 251)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 253)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 254)), var_argList_10513, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 256)), constinArgument_inHasLexiqueAndLocationArguments, var_returnedTypeIndex_10380, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 259)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 252)) ;
  }
}


