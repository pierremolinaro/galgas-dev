#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-23.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@binarysetPredefinedTypeAST getClassMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binarysetPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsClassMethods.galgas", 100)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 101)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsClassMethods.galgas", 109)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterCategoryMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                         categoryMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineCategoryMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@galgas3GrammarComponentAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_galgas_33_GrammarComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  result_outString = GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 312)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         categoryReader_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_galgas_33_GrammarComponentAST_keyRepresentation (defineCategoryReader_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@galgas3SyntaxComponentAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_galgas_33_SyntaxComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  result_outString = GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 319)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         categoryReader_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_galgas_33_SyntaxComponentAST_keyRepresentation (defineCategoryReader_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@lexiqueComponentAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_lexiqueComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  result_outString = GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 326)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexiqueComponentAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         categoryReader_lexiqueComponentAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexiqueComponentAST_keyRepresentation (defineCategoryReader_lexiqueComponentAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@abstractCategoryModifierAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_abstractCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  result_outString = GALGAS_string ("abstract category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 333)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryModifierAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                         categoryReader_abstractCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryModifierAST_keyRepresentation (defineCategoryReader_abstractCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@categoryModifierAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_categoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  result_outString = GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 340)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryModifierAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                         categoryReader_categoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryModifierAST_keyRepresentation (defineCategoryReader_categoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@overridingCategoryModifierAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  result_outString = GALGAS_string ("overriding category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)).add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 347)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryModifierAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                         categoryReader_overridingCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryModifierAST_keyRepresentation (defineCategoryReader_overridingCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@overridingAbstractCategoryModifierAST keyRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingAbstractCategoryModifierAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  result_outString = GALGAS_string ("overriding category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)).add_operation (object->mAttribute_mOverridingCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 354)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingAbstractCategoryModifierAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                         categoryReader_overridingAbstractCategoryModifierAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingAbstractCategoryModifierAST_keyRepresentation (defineCategoryReader_overridingAbstractCategoryModifierAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@abstractCategoryMethodAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_abstractCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  result_outString = GALGAS_string ("abstract category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 361)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryMethodAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                         categoryReader_abstractCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryMethodAST_keyRepresentation (defineCategoryReader_abstractCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@categoryMethodAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_categoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  result_outString = GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 368)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryMethodAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                         categoryReader_categoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryMethodAST_keyRepresentation (defineCategoryReader_categoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@overridingCategoryMethodAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  result_outString = GALGAS_string ("overriding category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)).add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 375)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryMethodAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                         categoryReader_overridingCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryMethodAST_keyRepresentation (defineCategoryReader_overridingCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@overridingAbstractCategoryMethodAST keyRepresentation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingAbstractCategoryMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  result_outString = GALGAS_string ("overriding category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)).add_operation (object->mAttribute_mOverridingCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 382)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingAbstractCategoryMethodAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                         categoryReader_overridingAbstractCategoryMethodAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingAbstractCategoryMethodAST_keyRepresentation (defineCategoryReader_overridingAbstractCategoryMethodAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@abstractCategoryReaderAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_abstractCategoryReaderAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  result_outString = GALGAS_string ("abstract category getter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 389)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryReaderAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                         categoryReader_abstractCategoryReaderAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryReaderAST_keyRepresentation (defineCategoryReader_abstractCategoryReaderAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@categoryReaderAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_categoryReaderAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  result_outString = GALGAS_string ("category getter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryReaderAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                         categoryReader_categoryReaderAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryReaderAST_keyRepresentation (defineCategoryReader_categoryReaderAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@overridingCategoryReaderAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingCategoryReaderAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  result_outString = GALGAS_string ("overriding category getter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)).add_operation (object->mAttribute_mOverridingCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 403)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryReaderAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                         categoryReader_overridingCategoryReaderAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryReaderAST_keyRepresentation (defineCategoryReader_overridingCategoryReaderAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@overridingAbstractCategoryReaderAST keyRepresentation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_overridingAbstractCategoryReaderAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  result_outString = GALGAS_string ("overriding category getter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 410)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingAbstractCategoryReaderAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                         categoryReader_overridingAbstractCategoryReaderAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingAbstractCategoryReaderAST_keyRepresentation (defineCategoryReader_overridingAbstractCategoryReaderAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@predefinedTypeAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  result_outString = GALGAS_string ("predefined type @").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 417)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_predefinedTypeAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                         categoryReader_predefinedTypeAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_predefinedTypeAST_keyRepresentation (defineCategoryReader_predefinedTypeAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@mapDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 424)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_mapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         categoryReader_mapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_mapDeclarationAST_keyRepresentation (defineCategoryReader_mapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@mapProxyDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_mapProxyDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  result_outString = GALGAS_string ("map proxy @").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 431)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_mapProxyDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         categoryReader_mapProxyDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_mapProxyDeclarationAST_keyRepresentation (defineCategoryReader_mapProxyDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@enumDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  result_outString = GALGAS_string ("enum @").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 438)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_enumDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         categoryReader_enumDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_enumDeclarationAST_keyRepresentation (defineCategoryReader_enumDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@sortedListDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  result_outString = GALGAS_string ("sorted list @").add_operation (object->mAttribute_mSortedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_sortedListDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         categoryReader_sortedListDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_sortedListDeclarationAST_keyRepresentation (defineCategoryReader_sortedListDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@structDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_structDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  result_outString = GALGAS_string ("struct @").add_operation (object->mAttribute_mStructTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 452)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_structDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         categoryReader_structDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_structDeclarationAST_keyRepresentation (defineCategoryReader_structDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@listDeclarationAST keyRepresentation'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  result_outString = GALGAS_string ("list @").add_operation (object->mAttribute_mListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 459)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_listDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         categoryReader_listDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_listDeclarationAST_keyRepresentation (defineCategoryReader_listDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@classDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  result_outString = GALGAS_string ("class @").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 466)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_classDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         categoryReader_classDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_classDeclarationAST_keyRepresentation (defineCategoryReader_classDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@arrayDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  result_outString = GALGAS_string ("array @").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 473)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_arrayDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         categoryReader_arrayDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_arrayDeclarationAST_keyRepresentation (defineCategoryReader_arrayDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@listmapDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  result_outString = GALGAS_string ("listmap @").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 480)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_listmapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         categoryReader_listmapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_listmapDeclarationAST_keyRepresentation (defineCategoryReader_listmapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@filewrapperDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  result_outString = GALGAS_string ("filewrapper @").add_operation (object->mAttribute_mFilewrapperName.reader_string (SOURCE_FILE ("semanticContext.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 487)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_filewrapperDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         categoryReader_filewrapperDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_filewrapperDeclarationAST_keyRepresentation (defineCategoryReader_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@optionComponentDeclarationAST keyRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  result_outString = GALGAS_string ("option ").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 494)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         categoryReader_optionComponentDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentDeclarationAST_keyRepresentation (defineCategoryReader_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@graphDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  result_outString = GALGAS_string ("graph @").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 501)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_graphDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         categoryReader_graphDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_graphDeclarationAST_keyRepresentation (defineCategoryReader_graphDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@externTypeDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  result_outString = GALGAS_string ("extern @").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 508)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externTypeDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         categoryReader_externTypeDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externTypeDeclarationAST_keyRepresentation (defineCategoryReader_externTypeDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@onceFunctionDeclarationAST keyRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticContext.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 515)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         categoryReader_onceFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_onceFunctionDeclarationAST_keyRepresentation (defineCategoryReader_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@externFunctionDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  result_outString = GALGAS_string ("extern function ").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticContext.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 522)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externFunctionDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         categoryReader_externFunctionDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externFunctionDeclarationAST_keyRepresentation (defineCategoryReader_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@externRoutineDeclarationAST keyRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  result_outString = GALGAS_string ("extern routine ").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticContext.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_externRoutineDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         categoryReader_externRoutineDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_externRoutineDeclarationAST_keyRepresentation (defineCategoryReader_externRoutineDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                              categoryMethod_abstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                              categoryMethod_categoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterInSemanticContext (defineCategoryMethod_categoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                              categoryMethod_abstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                              categoryMethod_categoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterInSemanticContext (defineCategoryMethod_categoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                         const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                         const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryReaderAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                              categoryMethod_abstractCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_abstractCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryReaderAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                     const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                     const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                     const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                     GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                              categoryMethod_categoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_enterInSemanticContext (defineCategoryMethod_categoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryReaderAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                              categoryMethod_overridingCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_overridingCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryReaderAST enterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                              categoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext (defineCategoryMethod_overridingAbstractCategoryReaderAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_constructorMap var_constructorMap ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  callCategoryMethod_getConstructorMap ((const cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_constructorMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 770)) ;
  GALGAS_getterMap var_getterMap ;
  const GALGAS_predefinedTypeAST temp_1 = object ;
  callCategoryMethod_getReaderMap ((const cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 771)) ;
  GALGAS_setterMap var_modifierMap ;
  const GALGAS_predefinedTypeAST temp_2 = object ;
  callCategoryMethod_getModifierMap ((const cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_modifierMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 772)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  const GALGAS_predefinedTypeAST temp_3 = object ;
  callCategoryMethod_getInstanceMethodMap ((const cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_instanceMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 773)) ;
  GALGAS_classMethodMap var_classMethodMap ;
  const GALGAS_predefinedTypeAST temp_4 = object ;
  callCategoryMethod_getClassMethodMap ((const cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_classMethodMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 774)) ;
  GALGAS_functionSignature var_addAssignArgumentList ;
  const GALGAS_predefinedTypeAST temp_5 = object ;
  callCategoryMethod_getAddAssignArgumentList ((const cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_addAssignArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
  GALGAS_enumerationDescriptorList var_enumerationList ;
  GALGAS_stringlist var_enumerationVariants ;
  GALGAS_string var_enumeratedTypeName ;
  const GALGAS_predefinedTypeAST temp_6 = object ;
  callCategoryMethod_getEnumerationList ((const cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumerationList, var_enumerationVariants, var_enumeratedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 776)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mPredefinedTypeName, var_selfTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 782)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedTypeProxy ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_enumeratedTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_enumeratedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 790)) ;
  }else if (kBoolFalse == test_7) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_enumeratedTypeName, var_enumeratedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 792)) ;
    }
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 800))  COMMA_SOURCE_FILE ("semanticContext.galgas", 800)), var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 795)) ;
  }
  {
  const GALGAS_predefinedTypeAST temp_8 = object ;
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPredefinedTypeName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 807))  COMMA_SOURCE_FILE ("semanticContext.galgas", 807)), object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 810)), GALGAS_typeKindEnum::constructor_predefinedType (SOURCE_FILE ("semanticContext.galgas", 811)), GALGAS_bool (kIsEqual, object->mAttribute_mPredefinedTypeName.objectCompare (GALGAS_string ("stringset"))), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 813)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 814)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 815)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, var_enumerationList, var_enumerationVariants, callCategoryReader_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_8.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 823)), var_addAssignArgumentList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 825)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 826)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 827)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 828)), GALGAS_bool (false), var_enumeratedTypeProxy, categoryReader_defaultConstructorName (object->mAttribute_mKind, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 831)), GALGAS_string ("galgas2/predefined-types"), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 833)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 806)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                              categoryMethod_predefinedTypeAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterInSemanticContext (defineCategoryMethod_predefinedTypeAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterInSemanticContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                     const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                     const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 852)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 855)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 858)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 861)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_currentMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, var_currentMapTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 864)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 866)) ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 867)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 868)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 869)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_42536 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_42536.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_42536.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_42536.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("semanticContext.galgas", 875)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_location location_3 (enumerator_42536.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("semanticContext.galgas", 879)) ;
    }
    enumerator_42536.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 883)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 884)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 885)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 886)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 888)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 888)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 889)), GALGAS_string ("inMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 889)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 889)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 891)) ;
  }
  {
  routine_enterInheritedReaderWith_32_Arguments (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 898)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 909)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 916)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 923)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 932)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("overriddenMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 941)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 941)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 942)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 950)) ;
  GALGAS_typedPropertyList var_typedPropertyList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 951)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 952)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 953)), var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 953)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_4.reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 955)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 957)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 954)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 959)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_6.reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 961)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 963)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 960)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 965)) ;
  cEnumerator_propertyInCollectionListAST enumerator_45675 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_45675.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_45675.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 967)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 970)), var_attributeTypeIndex, enumerator_45675.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 970)) ;
    var_typedPropertyList.addAssign_operation (var_attributeTypeIndex, enumerator_45675.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 971)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("semanticContext.galgas", 972)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_45675.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 973))  COMMA_SOURCE_FILE ("semanticContext.galgas", 973)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_45675.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 975)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_8, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 977)), enumerator_45675.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 974)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_45675.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 980)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_10, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 982)), enumerator_45675.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 979)) ;
    enumerator_45675.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_46713 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_46713.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_modifierMap.reader_hasKey (enumerator_46713.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 987)) COMMA_SOURCE_FILE ("semanticContext.galgas", 987)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_location location_13 (enumerator_46713.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_13, GALGAS_string ("the '").add_operation (enumerator_46713.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 988)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 988))  COMMA_SOURCE_FILE ("semanticContext.galgas", 988)) ;
    }else if (kBoolFalse == test_12) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_46713.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 992)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 995)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 990)) ;
      }
    }
    enumerator_46713.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_47166 (object->mAttribute_mRemoveMethodList, kEnumeration_up) ;
  while (enumerator_47166.hasCurrentObject ()) {
    const enumGalgasBool test_14 = var_modifierMap.reader_hasKey (enumerator_47166.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1002)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1002)).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_location location_15 (enumerator_47166.current_mMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_15, GALGAS_string ("the '").add_operation (enumerator_47166.current_mMethodName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1003)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1003))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1003)) ;
    }else if (kBoolFalse == test_14) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_47166.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1007)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1010)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1005)) ;
      }
    }
    enumerator_47166.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_47668 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_47668.hasCurrentObject ()) {
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_47668.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1019)), var_removeMethodFormalArgumentList, enumerator_47668.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1021)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1023)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1017)) ;
    }
    enumerator_47668.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_47988 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_47988.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_47988.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1029)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)), enumerator_47988.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1029))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1029)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_47988.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1031)) ;
    }
    {
    GALGAS_functionSignature temp_16 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1035)) ;
    temp_16.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1035)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1035)) ;
    var_getterMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1034)), temp_16, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1036)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1039)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1032)) ;
    }
    enumerator_47988.gotoNextObject () ;
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsSupOrEqual, object->mAttribute_mInsertOrReplaceDeclarationListAST.reader_length (SOURCE_FILE ("semanticContext.galgas", 1044)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_location var_insertOrReplaceLocation ;
    object->mAttribute_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1046)) ;
    {
    var_modifierMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation  COMMA_SOURCE_FILE ("semanticContext.galgas", 1048)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1049)), var_insertMethodFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1052)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1047)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_49105 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_49105.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_49105.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1058)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1058)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1058)), enumerator_49105.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 1058))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1058)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_49105.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1059)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1060)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1061)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1061)), enumerator_49105.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1061)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1062)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 1062)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1062)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1065)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1068)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1063)) ;
    }
    enumerator_49105.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1073)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1086)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1086)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 1086)), var_elementTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1084)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1094)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("semanticContext.galgas", 1095)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1097)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1098)), var_typedPropertyList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1104)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1107)).operator_or (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1107)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1107)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1107)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1107)), var_argumentTypeListForAddAssignWithFieldExpressionList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1109)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1110)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1112)), GALGAS_bool (false), var_elementTypeProxy, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1116)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1116)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 1117)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1090)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                              categoryMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                            const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                            const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1129)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1130)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1131)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1132)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1133)) ;
  cEnumerator_externTypeConstructorList enumerator_52149 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_52149.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_52149.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1137)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1139)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_52385 (enumerator_52149.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_52385.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_52385.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1142)) ;
      }
      var_arguments.addAssign_operation (enumerator_52385.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_52385.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1143)) ;
      enumerator_52385.gotoNextObject () ;
    }
    {
    var_constructorMap.modifier_insertKey (enumerator_52149.current_mConstructorName (HERE), var_arguments, GALGAS_bool (true), var_returnedTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1146)) ;
    }
    enumerator_52149.gotoNextObject () ;
  }
  cEnumerator_externTypeReaderList enumerator_52850 (object->mAttribute_mExternTypeReaderList, kEnumeration_up) ;
  while (enumerator_52850.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_52850.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1156)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1158)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_53074 (enumerator_52850.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_53074.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_53074.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1161)) ;
      }
      var_arguments.addAssign_operation (enumerator_53074.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_53074.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1162)) ;
      enumerator_53074.gotoNextObject () ;
    }
    {
    var_getterMap.modifier_insertKey (enumerator_52850.current_mReaderName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1167)), var_arguments, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1169)), GALGAS_bool (true), var_returnedTypeProxy, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1172)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1165)) ;
    }
    enumerator_52850.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_53656 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_53656.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1178)) ;
    cEnumerator_formalParameterListAST enumerator_53758 (enumerator_53656.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_53758.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_53758.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1180)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_53758.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_53758.current_mFormalArgumentPassingMode (HERE), enumerator_53758.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1185)) ;
      enumerator_53758.gotoNextObject () ;
    }
    {
    var_modifierMap.modifier_insertKey (enumerator_53656.current_mModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1190)), var_routineSignature, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1193)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1188)) ;
    }
    enumerator_53656.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_54346 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_54346.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1199)) ;
    cEnumerator_formalParameterListAST enumerator_54448 (enumerator_54346.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_54448.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_54448.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1202)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_54448.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_54448.current_mFormalArgumentPassingMode (HERE), enumerator_54448.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1207)) ;
      enumerator_54448.gotoNextObject () ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (enumerator_54346.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1212)), var_routineSignature, enumerator_54346.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1216)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1210)) ;
    }
    enumerator_54346.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1225)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("semanticContext.galgas", 1226)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1228)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1229)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1230)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1235)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1236)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1237)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1239)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1240)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1241)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1242)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1243)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1245)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1247)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1221)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                              categoryMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineCategoryMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1260)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1266)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1272)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1278)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy COMMA_SOURCE_FILE ("semanticContext.galgas", 1284)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1290)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1291)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1292)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1293)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1294)) ;
  GALGAS_formalParameterSignature var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1296)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1298)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1300)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1297)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1303)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1305)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1302)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1308)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1310)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1307)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1313)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1315)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1312)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1318))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1318)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1319)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1321)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1323)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1317)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1327))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1327)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1328)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1330)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1332)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1326)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1337)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1339)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1341)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1338)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1344)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticContext.galgas", 1346)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1343)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1349))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1349)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1350)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1352)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1354)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1348)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1358))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1358)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1359)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1361)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1357)) ;
  }
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1367))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1367)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1368)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1370)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1372)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1366)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1377)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1385)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1393)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1401)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1409)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1417)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1427)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1435)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1443)) ;
  }
  {
  routine_enterBaseReaderWith_32_Arguments (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1451)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("accessibleNodesFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1463)) ;
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1474))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1474)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1475)), GALGAS_bool (false), var_graphTypeProxy, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1473)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1480)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1482)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1484)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1481)) ;
  cEnumerator_functionSignature enumerator_63110 (var_associatedListTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1486)), kEnumeration_up) ;
  while (enumerator_63110.hasCurrentObject ()) {
    var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1488)), enumerator_63110.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1490)), enumerator_63110.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 1487)) ;
    enumerator_63110.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_63300 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_63300.hasCurrentObject ()) {
    {
    var_modifierMap.modifier_insertOrReplace (enumerator_63300.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1496)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1499)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 1494)) ;
    }
    enumerator_63300.gotoNextObject () ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1506))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1506)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1507)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1508)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1510)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1505)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1514)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1515)), var_stringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1515)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1515)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1517))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1517)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1518)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1521)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1516)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1526)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1527)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1527)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1527)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1528)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1528)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1528)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1530))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1530)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1531)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1534)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1529)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1539)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1540)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1540)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1540)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1542))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1542)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1543)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1546)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1541)) ;
  }
  var_formalParameterList.drop () ; // drop instruction
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1551)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1566)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("semanticContext.galgas", 1567)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1569)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1570)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1571)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1576)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1577)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1578)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1579)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1580)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1581)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1582)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1583)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1584)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1586)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1588)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1588)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 1589)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1562)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                              categoryMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineCategoryMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                             const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                             const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1672)) ;
  cEnumerator_filewrapperTemplateListAST enumerator_69760 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
  while (enumerator_69760.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1674)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_69877 (enumerator_69760.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_69877.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_69877.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1677)) ;
      }
      var_templateSignature.addAssign_operation (enumerator_69877.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex, enumerator_69877.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1678)) ;
      enumerator_69877.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap.modifier_insertKey (enumerator_69760.current_mFilewrapperTemplateName (HERE), var_templateSignature, enumerator_69760.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1680)) ;
    }
    enumerator_69760.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1687)) ;
  cEnumerator_lstringlist enumerator_70427 (object->mAttribute_mFilewrapperTextFileExtensionList, kEnumeration_up) ;
  while (enumerator_70427.hasCurrentObject ()) {
    {
    var_textExtensionMap.modifier_insertKey (enumerator_70427.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1689)) ;
    }
    enumerator_70427.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1692)) ;
  cEnumerator_lstringlist enumerator_70626 (object->mAttribute_mFilewrapperBinaryFileExtensionList, kEnumeration_up) ;
  while (enumerator_70626.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_textExtensionMap.reader_hasKey (enumerator_70626.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("semanticContext.galgas", 1694)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_70626.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_70626.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1695)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1695)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1695))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1695)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_binaryFileExtensionMap.modifier_insertKey (enumerator_70626.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1697)) ;
      }
    }
    enumerator_70626.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap ;
  GALGAS_string var_absoluteSourcePath ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1704)).reader_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 1704)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_absoluteSourcePath = object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1705)) ;
  }else if (kBoolFalse == test_2) {
    var_absoluteSourcePath = object->mAttribute_mSourceFileAbsolutePath.reader_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 1707)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1707)).add_operation (object->mAttribute_mFilewrapperPath.reader_string (SOURCE_FILE ("semanticContext.galgas", 1707)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1707)) ;
  }
  const enumGalgasBool test_3 = var_absoluteSourcePath.reader_directoryExists (SOURCE_FILE ("semanticContext.galgas", 1709)).operator_not (SOURCE_FILE ("semanticContext.galgas", 1709)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFilewrapperPath.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("The '").add_operation (var_absoluteSourcePath, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1710)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1710))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1710)) ;
    var_regularRootFileMap.drop () ; // Release error dropped variable
    var_wrapperDirectoryMap.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_uint var_wrapperFileIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath, GALGAS_string ("/"), var_textExtensionMap, var_binaryFileExtensionMap, var_regularRootFileMap, var_wrapperDirectoryMap, var_wrapperFileIndex, var_wrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1716)) ;
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFilewrapperMap.modifier_insertKey (object->mAttribute_mFilewrapperName, object->mAttribute_mFilewrapperPath, object->mAttribute_mFilewrapperTextFileExtensionList, var_regularRootFileMap, var_wrapperDirectoryMap, var_filewrapperTemplateMap, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1728)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                              categoryMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineCategoryMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1747)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1748)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1749)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1750)) ;
  GALGAS_stringset var_optionNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticContext.galgas", 1751)) ;
  cEnumerator_commandLineOptionListAST enumerator_72755 (object->mAttribute_mOptions, kEnumeration_up) ;
  while (enumerator_72755.hasCurrentObject ()) {
    const enumGalgasBool test_0 = var_optionNameSet.reader_hasKey (enumerator_72755.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1753)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1753)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_72755.current_mOptionInternalName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_72755.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1754)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1754)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1754))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1754)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1755)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_boolOptionMap.modifier_insertKey (enumerator_72755.current_mOptionInternalName (HERE), enumerator_72755.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 1758)), enumerator_72755.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1759)), enumerator_72755.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1760)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1756)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_72755.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1763)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_location location_4 (enumerator_72755.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("an @bool option cannot have a default value (default value is allways false)")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1764)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1766)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1772)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("0") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = enumerator_72755.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1772)) ;
          }
          var_uintOptionMap.modifier_insertKey (enumerator_72755.current_mOptionInternalName (HERE), enumerator_72755.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 1769)), enumerator_72755.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1770)), enumerator_72755.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1771)), temp_6, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1767)) ;
          }
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1774)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_location location_9 (enumerator_72755.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_9, GALGAS_string ("an @uint option default value cannot be an @string value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1775)) ;
          }
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1777)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            var_stringOptionMap.modifier_insertKey (enumerator_72755.current_mOptionInternalName (HERE), enumerator_72755.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 1780)), enumerator_72755.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1781)), enumerator_72755.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1782)), enumerator_72755.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1783)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1778)) ;
            }
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1785)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              GALGAS_location location_12 (enumerator_72755.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_12, GALGAS_string ("an @string option default value cannot be an @uint value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1786)) ;
            }
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_72755.current_mOptionTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1788)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              {
              var_stringListOptionMap.modifier_insertKey (enumerator_72755.current_mOptionInternalName (HERE), enumerator_72755.current_mOptionInvocationLetter (HERE).reader_char (SOURCE_FILE ("semanticContext.galgas", 1791)), enumerator_72755.current_mOptionInvocationString (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1792)), enumerator_72755.current_mOptionComment (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1793)), enumerator_72755.current_mOptionDefaultValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1794)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1789)) ;
              }
              const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_72755.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("semanticContext.galgas", 1796)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                GALGAS_location location_15 (enumerator_72755.current_mOptionDefaultValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
                inCompiler->emitSemanticError (location_15, GALGAS_string ("an @stringlist option cannot accept default value")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1797)) ;
              }
            }else if (kBoolFalse == test_13) {
              GALGAS_location location_16 (enumerator_72755.current_mOptionTypeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("only the @bool, @uint or @string types are allowed here")  COMMA_SOURCE_FILE ("semanticContext.galgas", 1800)) ;
            }
          }
        }
      }
    }
    var_optionNameSet.addAssign_operation (enumerator_72755.current_mOptionInternalName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1802))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1802)) ;
    enumerator_72755.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.modifier_insertKey (object->mAttribute_mOptionComponentName, object->mAttribute_mIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1805)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                              categoryMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineCategoryMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                       const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                       const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 1823)) ;
  }
  GALGAS_getterMap var_getterMap ;
  GALGAS_setterMap var_modifierMap ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList ;
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1829)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex ;
  GALGAS_bool var_generateHeaderInSeparateFile ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1833)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 1834)) ;
    {
    routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1835)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1836)) ;
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1837)) ;
    var_inheritedTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1838)) ;
    var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1839)) ;
    var_generateHeaderInSeparateFile = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_76570 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_76570.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_76570.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1842)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile = GALGAS_bool (true) ;
      }
      enumerator_76570.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1847)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum ;
    GALGAS_getterMap var_inheritedReaderMap ;
    GALGAS_setterMap var_inheritedModifierMap ;
    GALGAS_instanceMethodMap var_inheritedMethodMap ;
    GALGAS_bool joker_77018_3 ; // Joker input parameter
    GALGAS_bool joker_77018_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_77018_1 ; // Joker input parameter
    GALGAS_bool joker_77048 ; // Joker input parameter
    GALGAS_typedPropertyList joker_77112_2 ; // Joker input parameter
    GALGAS_constructorMap joker_77112_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_77202_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_77202_8 ; // Joker input parameter
    GALGAS_stringlist joker_77202_7 ; // Joker input parameter
    GALGAS_uint joker_77202_6 ; // Joker input parameter
    GALGAS_functionSignature joker_77202_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_77202_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_77202_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_77202_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_77202_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_77248_4 ; // Joker input parameter
    GALGAS_string joker_77248_3 ; // Joker input parameter
    GALGAS_string joker_77248_2 ; // Joker input parameter
    GALGAS_headerKind joker_77248_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_77018_3, joker_77018_2, joker_77018_1, var_typeKindEnum, joker_77048, var_inheritedTypedAttributeList, var_attributeMap, joker_77112_2, joker_77112_1, var_inheritedReaderMap, var_inheritedModifierMap, var_inheritedMethodMap, joker_77202_9, joker_77202_8, joker_77202_7, joker_77202_6, joker_77202_5, joker_77202_4, joker_77202_3, joker_77202_2, joker_77202_1, var_generateHeaderInSeparateFile, joker_77248_4, joker_77248_3, joker_77248_2, joker_77248_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1852)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 1868)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSuperClassName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 1869)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1869)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1869))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1869)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1872)) ;
    cEnumerator_setterMap enumerator_77521 (var_inheritedModifierMap, kEnumeration_up) ;
    while (enumerator_77521.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_77521.current_lkey (HERE), enumerator_77521.current_mKind (HERE), enumerator_77521.current_mParameterList (HERE), enumerator_77521.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1879)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1874)) ;
      }
      enumerator_77521.gotoNextObject () ;
    }
    var_getterMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1884)) ;
    cEnumerator_getterMap enumerator_77832 (var_inheritedReaderMap, kEnumeration_up) ;
    while (enumerator_77832.hasCurrentObject ()) {
      {
      var_getterMap.modifier_insertKey (enumerator_77832.current_lkey (HERE), enumerator_77832.current_mKind (HERE), enumerator_77832.current_mArgumentTypeList (HERE), enumerator_77832.current_mDeclarationLocation (HERE), enumerator_77832.current_mHasCompilerArgument (HERE), enumerator_77832.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1893)), enumerator_77832.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1886)) ;
      }
      enumerator_77832.gotoNextObject () ;
    }
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1898)) ;
    cEnumerator_instanceMethodMap enumerator_78205 (var_inheritedMethodMap, kEnumeration_up) ;
    while (enumerator_78205.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_78205.current_lkey (HERE), enumerator_78205.current_mKind (HERE), enumerator_78205.current_mParameterList (HERE), enumerator_78205.current_mDeclarationLocation (HERE), enumerator_78205.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticContext.galgas", 1906)), enumerator_78205.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1900)) ;
      }
      enumerator_78205.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1912)) ;
  cEnumerator_typedPropertyList enumerator_78605 (var_inheritedTypedAttributeList, kEnumeration_up) ;
  while (enumerator_78605.hasCurrentObject ()) {
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1914)), enumerator_78605.current_mAttributeTypeProxy (HERE), enumerator_78605.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1914)) ;
    enumerator_78605.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_78735 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_78735.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_78735.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1918)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1919)), var_attributeTypeIndex, enumerator_78735.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1919)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_78735.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1920)) ;
    }
    const enumGalgasBool test_4 = var_getterMap.reader_hasKey (enumerator_78735.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1925)) COMMA_SOURCE_FILE ("semanticContext.galgas", 1925)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_78735.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_78735.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1926)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1926)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1926))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1926)) ;
    }
    enumerator_78735.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1930)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 1936)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 1937)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1939))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1939)), var_constructorAttributeTypeList, GALGAS_bool (false), var_classIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1938)) ;
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1946)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList = var_inheritedTypedAttributeList ;
  cEnumerator_propertyInCollectionListAST enumerator_79863 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_79863.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_79863.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 1950)) ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_80099 (enumerator_79863.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_80099.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_80099.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1954)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_80099.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1956)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter = GALGAS_bool (false) ;
        }
      }
      enumerator_80099.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_79863.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1960)) ;
    var_allTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_79863.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("semanticContext.galgas", 1961)) ;
    const enumGalgasBool test_9 = var_hasGetter.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_getterMap.modifier_insertKey (enumerator_79863.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1965)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1966)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1967)), GALGAS_bool (false), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 1970)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1963)) ;
      }
    }
    enumerator_79863.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_80861 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  while (enumerator_80861.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_80861.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      GALGAS_formalParameterSignature temp_11 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 1981)) ;
      temp_11.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 1981)), enumerator_80861.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticContext.galgas", 1981)), enumerator_80861.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 1981)) ;
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_80861.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 1979)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("semanticContext.galgas", 1979)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1979)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1979))  COMMA_SOURCE_FILE ("semanticContext.galgas", 1979)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 1980)), temp_11, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 1983)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 1978)) ;
      }
    }
    enumerator_80861.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 1989)) ;
  }
  GALGAS_string var_defaultConstructorName ;
  const enumGalgasBool test_12 = var_superClassIndex.reader_isNull (SOURCE_FILE ("semanticContext.galgas", 2001)).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_defaultConstructorName = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_12) {
    var_defaultConstructorName = var_superClassIndex.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2004)) ;
  }
  cEnumerator_typedPropertyList enumerator_81854 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  bool bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_81854.hasCurrentObject () && bool_13) {
    while (enumerator_81854.hasCurrentObject () && bool_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_81854.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2007)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_81854.current_mAttributeTypeProxy (HERE).reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2007)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2007)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2007)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_81854.gotoNextObject () ;
      if (enumerator_81854.hasCurrentObject ()) {
        bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("semanticContext.galgas", 2015)), var_superClassIndex, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticContext.galgas", 2017)), GALGAS_bool (false), var_allTypedAttributeList, var_attributeMap, var_currentClassTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2026)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2027)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2028)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2030)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2031)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2032)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2033)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2034)), var_generateHeaderInSeparateFile, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2036)), var_defaultConstructorName, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2038)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2038)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticContext.galgas", 2039)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2012)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                              categoryMethod_classDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineCategoryMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                               const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                               const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2051)) ;
  cEnumerator_formalParameterListAST enumerator_83533 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_83533.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_83533.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2053)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_83533.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_83533.current_mFormalArgumentPassingMode (HERE), enumerator_83533.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2054)) ;
    enumerator_83533.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.modifier_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2057)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                              categoryMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineCategoryMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@routineDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                         const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                         const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineDeclarationAST * object = (const cPtr_routineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_routineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2072)) ;
  cEnumerator_formalParameterListAST enumerator_84529 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_84529.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_84529.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2074)) ;
    }
    var_routineSignature.addAssign_operation (enumerator_84529.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_84529.current_mFormalArgumentPassingMode (HERE), enumerator_84529.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2075)) ;
    enumerator_84529.gotoNextObject () ;
  }
  categoryMethod_enterInstructionListInSemanticContext (object->mAttribute_mRoutineInstructionList, ioArgument_ioSemanticContext.mAttribute_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2078)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mRoutineMap.modifier_insertKey (object->mAttribute_mRoutineName, var_routineSignature, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2080)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_routineDeclarationAST.mSlotID,
                                              categoryMethod_routineDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineDeclarationAST_enterInSemanticContext (defineCategoryMethod_routineDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externFunctionDeclarationAST enterInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2095)) ;
  cEnumerator_formalInputParameterListAST enumerator_85695 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_85695.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_85695.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2098)) ;
    }
    var_functionSignature.addAssign_operation (enumerator_85695.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_85695.current_mFormalArgumentTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2099)) ;
    enumerator_85695.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2103)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultTypeIndex, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2105)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                              categoryMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@onceFunctionDeclarationAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                              const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                              const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, var_resultTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2121)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mFunctionMap.modifier_insertKey (object->mAttribute_mFunctionName, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2123)), var_resultTypeIndex, object->mAttribute_mIsInternal, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2123)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                              categoryMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineCategoryMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDimension.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the dimension of an array should be > 0")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2135)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2139)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2142)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2144)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2145)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2146)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2147)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("semanticContext.galgas", 2150)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("semanticContext.galgas", 2153)) ;
  }
  GALGAS_functionSignature var_uintArgs = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2155)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2157)).isValid ()) {
    uint32_t variant_88586 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2157)).uintValue () ;
    bool loop_88586 = true ;
    while (loop_88586) {
      loop_88586 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2157)))).isValid () ;
      if (loop_88586) {
        loop_88586 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2157)))).boolValue () ;
      }
      if (loop_88586 && (0 == variant_88586)) {
        loop_88586 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2157)) ;
      }
      if (loop_88586) {
        variant_88586 -- ;
        var_uintArgs.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2158)), var_uintType, GALGAS_string ("inSize").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2158)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2158))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2158)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2159)) ;
      }
    }
  }
  {
  var_constructorMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2163))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2163)), var_uintArgs, GALGAS_bool (false), var_arrayTypeIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2162)) ;
  }
  {
  routine_enterBaseReaderWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2169)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2170)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2171)) ;
  }
  {
  var_getterMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2173))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2173)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2174)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2176)), GALGAS_bool (true), var_boolType, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2179)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2172)) ;
  }
  {
  var_getterMap.modifier_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2183))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2183)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2184)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2186)), GALGAS_bool (true), var_elementTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2189)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticContext.galgas", 2182)) ;
  }
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2193)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2194)), var_elementTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2194)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2194)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2196)).isValid ()) {
    uint32_t variant_90001 = object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2196)).uintValue () ;
    bool loop_90001 = true ;
    while (loop_90001) {
      loop_90001 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2196)))).isValid () ;
      if (loop_90001) {
        loop_90001 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.reader_uint (SOURCE_FILE ("semanticContext.galgas", 2196)))).boolValue () ;
      }
      if (loop_90001 && (0 == variant_90001)) {
        loop_90001 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticContext.galgas", 2196)) ;
      }
      if (loop_90001) {
        variant_90001 -- ;
        var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2197)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2197)), GALGAS_string ("inIndex").add_operation (var_idx.reader_string (SOURCE_FILE ("semanticContext.galgas", 2197)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2197))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2197)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2198)) ;
      }
    }
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2202)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2205)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2200)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("forceValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2209)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2210)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2213)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2208)) ;
  }
  {
  GALGAS_lstring joker_90605_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_90605_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_90605_2 ; // Joker input parameter
  GALGAS_string joker_90605_1 ; // Joker input parameter
  var_modifierFormalArgumentList.modifier_popFirst (joker_90605_4, joker_90605_3, joker_90605_2, joker_90605_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2216)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("invalidateValueAtIndex").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2218)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2219)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2222)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2217)) ;
  }
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSize").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2226)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2227)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2230)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2225)) ;
  }
  var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2233)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2234)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2234)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2234)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2235)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticContext.galgas", 2235)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2235)) ;
  {
  var_modifierMap.modifier_insertKey (GALGAS_string ("setSizeForAxis").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticContext.galgas", 2238)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticContext.galgas", 2241)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2236)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2249)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("semanticContext.galgas", 2250)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2252)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2253)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2254)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2259)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2260)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2261)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2263)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2264)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2265)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2266)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2267)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2269)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2271)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2271)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2272)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2245)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                              categoryMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineCategoryMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                         const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                         const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_listTypedAttributeList ;
  GALGAS_bool joker_92982_3 ; // Joker input parameter
  GALGAS_bool joker_92982_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_92982_1 ; // Joker input parameter
  GALGAS_bool joker_93026 ; // Joker input parameter
  GALGAS_attributeMap joker_93084_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_93084_19 ; // Joker input parameter
  GALGAS_constructorMap joker_93084_18 ; // Joker input parameter
  GALGAS_getterMap joker_93084_17 ; // Joker input parameter
  GALGAS_setterMap joker_93084_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_93084_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_93084_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_93084_13 ; // Joker input parameter
  GALGAS_stringlist joker_93084_12 ; // Joker input parameter
  GALGAS_uint joker_93084_11 ; // Joker input parameter
  GALGAS_functionSignature joker_93084_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_93084_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_93084_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_93084_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_93084_6 ; // Joker input parameter
  GALGAS_bool joker_93084_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_93084_4 ; // Joker input parameter
  GALGAS_string joker_93084_3 ; // Joker input parameter
  GALGAS_string joker_93084_2 ; // Joker input parameter
  GALGAS_headerKind joker_93084_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_92982_3, joker_92982_2, joker_92982_1, var_typeKindEnum, joker_93026, var_listTypedAttributeList, joker_93084_20, joker_93084_19, joker_93084_18, joker_93084_17, joker_93084_16, joker_93084_15, joker_93084_14, joker_93084_13, joker_93084_12, joker_93084_11, joker_93084_10, joker_93084_9, joker_93084_8, joker_93084_7, joker_93084_6, joker_93084_5, joker_93084_4, joker_93084_3, joker_93084_2, joker_93084_1, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2284)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("semanticContext.galgas", 2292)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2293)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2293)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2293))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2293)) ;
    var_listTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2294)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2297)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2298)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2299)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2300)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2302)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2304)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2306)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2313)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2320)) ;
  }
  {
  routine_enterBaseReaderWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2333)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2327)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2337)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2337)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2339)) ;
  var_enumeratorDescriptor.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2340)) ;
  var_enumeratorDescriptor.addAssign_operation (var_associatedListTypeIndex, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2341)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2343)) ;
  var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2344)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2344)) ;
  cEnumerator_typedPropertyList enumerator_95138 (var_listTypedAttributeList, kEnumeration_up) ;
  while (enumerator_95138.hasCurrentObject ()) {
    var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2346)), enumerator_95138.current_mAttributeTypeProxy (HERE), enumerator_95138.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2346)) ;
    enumerator_95138.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2349)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2350)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticContext.galgas", 2351)) ;
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2353)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2366)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2366)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2366)), var_listElementTypeIndex COMMA_SOURCE_FILE ("semanticContext.galgas", 2364)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticContext.galgas", 2374)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("semanticContext.galgas", 2375)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2377)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2378)), var_listTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2384)), var_enumeratorDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2387)), var_addAssignOperatorDescription, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2389)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2390)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2391)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2392)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2396)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2396)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticContext.galgas", 2397)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2370)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                              categoryMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineCategoryMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3SyntaxComponentAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.modifier_insertKey (object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2408)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                              categoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (defineCategoryMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3GrammarComponentAST enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                                 const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                                 const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2425)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_98114 (object->mAttribute_mStartSymbolLabelList, kEnumeration_up) ;
  while (enumerator_98114.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2428)) ;
    cEnumerator_formalParameterListAST enumerator_98242 (enumerator_98114.current_mFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_98242.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentType ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_98242.current_mFormalArgumentTypeName (HERE), var_argumentType COMMA_SOURCE_FILE ("semanticContext.galgas", 2430)) ;
      }
      var_formalArgumentList.addAssign_operation (enumerator_98242.current_mFormalSelector (HERE), var_argumentType, enumerator_98242.current_mFormalArgumentPassingMode (HERE), enumerator_98242.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticContext.galgas", 2431)) ;
      enumerator_98242.gotoNextObject () ;
    }
    {
    var_grammarLabelMap.modifier_insertKey (enumerator_98114.current_mLabelName (HERE), var_formalArgumentList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2437)) ;
    }
    enumerator_98114.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mGrammarMap.modifier_insertGrammar (object->mAttribute_mGrammarComponentName, var_grammarLabelMap, object->mAttribute_mHasIndexing.mAttribute_bool, object->mAttribute_mHasTranslateFeature, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2443)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                              categoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (defineCategoryMethod_galgas_33_GrammarComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_categoryMethodMapForBuildingContext /* constinArgument_inCategoryMethodMapForBuildingContext */,
                                                                       const GALGAS_categoryReaderMapForBuildingContext /* constinArgument_inCategoryReaderMapForBuildingContext */,
                                                                       const GALGAS_categoryModifierMapForBuildingContext /* constinArgument_inCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2459)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2460)) ;
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2461)) ;
  }
  GALGAS_terminalMap var_terminalMap = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2467)) ;
  cEnumerator_terminalDeclarationListAST enumerator_99698 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_99698.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2469)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_99794 (enumerator_99698.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_99794.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_99794.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2472)) ;
      var_argumentTypeList.addAssign_operation (enumerator_99794.current_mFormalSelector (HERE), enumerator_99794.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 2473)) ;
      enumerator_99794.gotoNextObject () ;
    }
    {
    var_terminalMap.modifier_insertKey (enumerator_99698.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2475)) ;
    }
    enumerator_99698.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_100119 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_100119.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2479)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_100215 (enumerator_100119.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_100215.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexicalAttributeMap.method_searchKey (enumerator_100215.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2482)) ;
      var_argumentTypeList.addAssign_operation (enumerator_100215.current_mFormalSelector (HERE), enumerator_100215.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticContext.galgas", 2483)) ;
      enumerator_100215.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_100459 (enumerator_100119.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_100459.hasCurrentObject ()) {
      {
      var_terminalMap.modifier_insertKey (enumerator_100459.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2486)) ;
      }
      enumerator_100459.gotoNextObject () ;
    }
    enumerator_100119.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.modifier_insertKey (object->mAttribute_mLexiqueComponentName, var_terminalMap, object->mAttribute_mIndexingListAST, object->mAttribute_mIndexingDirectory, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2490)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                              categoryMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineCategoryMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@predefinedTypeAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mPredefinedTypeName, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2529)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 2529))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2529)) ;
  {
  const GALGAS_predefinedTypeAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2530)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                               categoryMethod_predefinedTypeAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeAST_enterDeclarationInGraph (defineCategoryMethod_predefinedTypeAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@galgas3GrammarComponentAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (object->mAttribute_mGrammarComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2541)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2541)), object->mAttribute_mGrammarComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2541)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2542)) ;
  }
  cEnumerator_lstringlist enumerator_103657 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_103657.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_103657.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2544)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2544)), enumerator_103657.current_mValue (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2544)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2544)) ;
    }
    enumerator_103657.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                               categoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (defineCategoryMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@galgas3SyntaxComponentAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                 GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                 GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                 GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (object->mAttribute_mSyntaxComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2556)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2556)), object->mAttribute_mSyntaxComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2556)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2557)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2558)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2558)), object->mAttribute_mLexiqueName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2558)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2558)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_104635 (object->mAttribute_mRuleList, kEnumeration_up) ;
  while (enumerator_104635.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_104663 (enumerator_104635.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_104663.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_104699 (enumerator_104663.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_104699.hasCurrentObject ()) {
        switch (enumerator_104699.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_104699.current_mFormalArgumentTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2563)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2563)), enumerator_104699.current_mFormalArgumentTypeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2563)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2563)) ;
            }
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
          }
          break ;
        }
        enumerator_104699.gotoNextObject () ;
      }
      enumerator_104663.gotoNextObject () ;
    }
    enumerator_104635.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                               categoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (defineCategoryMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@lexiqueComponentAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (object->mAttribute_mLexiqueComponentName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2579)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2579)), object->mAttribute_mLexiqueComponentName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2579)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2580)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               categoryMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineCategoryMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2591)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2591)), object->mAttribute_mClassTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2591))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2591)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2592)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2594)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2594)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2594)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2594)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_106641 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_106641.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_106641.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2597)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2597)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2597)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2597)) ;
    }
    enumerator_106641.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               categoryMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2609)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2609)), object->mAttribute_mArrayTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2609))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2609)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2610)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2611)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)), object->mAttribute_mElementTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2611))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2611)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               categoryMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                          GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2622)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2622)), object->mAttribute_mListmapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2622))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2622)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2623)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2624)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2624)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2624))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2624)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2624)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               categoryMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2635)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2635)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2635))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2635)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2636)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_109192 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_109192.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_109192.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("semanticContext.galgas", 2638)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2638)), enumerator_109192.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("semanticContext.galgas", 2638))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2638)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2638)) ;
    }
    enumerator_109192.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               categoryMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2650)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2650)), object->mAttribute_mGraphTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2650))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2650)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2651)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2652)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2652)), object->mAttribute_mAssociatedListTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2652))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2652)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2652)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               categoryMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@externTypeDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                             GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                             GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2663)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2663)), object->mAttribute_mExternTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2663))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2663)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2664)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               categoryMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@externFunctionDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                 GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                 GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                 GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2675)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               categoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@onceFunctionDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                               GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                               GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                               GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                               GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2686)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               categoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@externRoutineDeclarationAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2697)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               categoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@filewrapperDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2708)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               categoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2719)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               categoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryMethodAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  const GALGAS_overridingCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2730)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@overridingCategoryModifierAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                  GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                  GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  const GALGAS_overridingCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2741)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryReaderAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  const GALGAS_overridingAbstractCategoryReaderAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2752)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryMethodAST enterDeclarationInGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                        GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  const GALGAS_overridingAbstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2763)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@overridingAbstractCategoryModifierAST enterDeclarationInGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                          GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                          GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  const GALGAS_overridingAbstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2774)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                               categoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_overridingAbstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryReaderAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                      GALGAS_categoryReaderMapForBuildingContext & ioArgument_ioCategoryReaderMapForBuildingContext,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2785)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2785)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2785)).add_operation (object->mAttribute_mCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2785)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2785)), object->mAttribute_mCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2785))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2785)) ;
  {
  const GALGAS_categoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2786)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2787)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2787)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2787))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2787)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2787)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2789)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2789)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2789)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2792)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2790)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_118363 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2795)) ;
  if (NULL != objectArray_118363) {
      macroValidSharedObject (objectArray_118363, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_118363->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderReturnedTypeName, object->mAttribute_mCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2796)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                               categoryMethod_categoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_categoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryMethodAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                      GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                      GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                      GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2812)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2812)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2812)).add_operation (object->mAttribute_mCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2812)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2812)), object->mAttribute_mCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2812))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2812)) ;
  {
  const GALGAS_categoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2813)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2814)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2814)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2814))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2814)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2814)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2816)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2816)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2816)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2819)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2817)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_119687 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2822)) ;
  if (NULL != objectArray_119687) {
      macroValidSharedObject (objectArray_119687, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_119687->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2823)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                               categoryMethod_categoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_categoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@categoryModifierAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                        GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                        GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2838)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2838)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2838)).add_operation (object->mAttribute_mCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2838)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2838)), object->mAttribute_mCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2838))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2838)) ;
  {
  const GALGAS_categoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2839)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2840)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2840)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2840))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2840)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2840)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2842)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2842)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2842)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2845)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2843)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_120979 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2848)) ;
  if (NULL != objectArray_120979) {
      macroValidSharedObject (objectArray_120979, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_120979->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2849)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                               categoryMethod_categoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_categoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryReaderAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioCategoryOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  const GALGAS_overridingCategoryReaderAST temp_0 = object ;
  ioArgument_ioCategoryOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 2864)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                               categoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_overridingCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryReaderAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                              GALGAS_categoryReaderMapForBuildingContext & ioArgument_ioCategoryReaderMapForBuildingContext,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category reader @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2875)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2875)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2875)).add_operation (object->mAttribute_mAbstractCategoryReaderName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2875)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2875)), object->mAttribute_mAbstractCategoryReaderName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2875))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2875)) ;
  {
  const GALGAS_abstractCategoryReaderAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2876)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2877)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2877)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2877))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2877)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2877)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryReaderMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2879)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2879)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2879)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryReaderMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryReaderMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2882)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2880)) ;
    }
  }
  cMapElement_categoryReaderMapForBuildingContext * objectArray_122928 = (cMapElement_categoryReaderMapForBuildingContext *) ioArgument_ioCategoryReaderMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryReaderMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2885)) ;
  if (NULL != objectArray_122928) {
      macroValidSharedObject (objectArray_122928, cMapElement_categoryReaderMapForBuildingContext) ;
    {
    objectArray_122928->mAttribute_mCategoryReaderMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderReturnedTypeName, object->mAttribute_mAbstractCategoryReaderFormalInputParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2886)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                               categoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryReaderAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryMethodAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_categoryMethodMapForBuildingContext & ioArgument_ioCategoryMethodMapForBuildingContext,
                                                                              GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                              GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category method @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2902)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2902)).add_operation (object->mAttribute_mAbstractCategoryMethodName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2902)), object->mAttribute_mAbstractCategoryMethodName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2902))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2902)) ;
  {
  const GALGAS_abstractCategoryMethodAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2903)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2904)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2904)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2904))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2904)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2904)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryMethodMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2906)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2906)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2906)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryMethodMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryMethodMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2909)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2907)) ;
    }
  }
  cMapElement_categoryMethodMapForBuildingContext * objectArray_124300 = (cMapElement_categoryMethodMapForBuildingContext *) ioArgument_ioCategoryMethodMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryMethodMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2912)) ;
  if (NULL != objectArray_124300) {
      macroValidSharedObject (objectArray_124300, cMapElement_categoryMethodMapForBuildingContext) ;
    {
    objectArray_124300->mAttribute_mCategoryMethodMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2913)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                               categoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryMethodAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@abstractCategoryModifierAST enterDeclarationInGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                                GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                                GALGAS_categoryModifierMapForBuildingContext & ioArgument_ioCategoryModifierMapForBuildingContext,
                                                                                GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("category setter @").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2928)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2928)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2928)).add_operation (object->mAttribute_mAbstractCategoryModifierName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2928)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2928)), object->mAttribute_mAbstractCategoryModifierName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2928))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2928)) ;
  {
  const GALGAS_abstractCategoryModifierAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2929)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2930)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2930)), object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticContext.galgas", 2930))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2930)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2930)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioCategoryModifierMapForBuildingContext.reader_hasKey (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticContext.galgas", 2932)) COMMA_SOURCE_FILE ("semanticContext.galgas", 2932)).operator_not (SOURCE_FILE ("semanticContext.galgas", 2932)).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioCategoryModifierMapForBuildingContext.modifier_insertKey (object->mAttribute_mTypeName, GALGAS_categoryModifierMapForType::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 2935)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2933)) ;
    }
  }
  cMapElement_categoryModifierMapForBuildingContext * objectArray_125632 = (cMapElement_categoryModifierMapForBuildingContext *) ioArgument_ioCategoryModifierMapForBuildingContext.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, object->mAttribute_mTypeName, kSearchErrorMessage_categoryModifierMapForBuildingContext_searchKey  COMMA_SOURCE_FILE ("semanticContext.galgas", 2938)) ;
  if (NULL != objectArray_125632) {
      macroValidSharedObject (objectArray_125632, cMapElement_categoryModifierMapForBuildingContext) ;
    {
    objectArray_125632->mAttribute_mCategoryModifierMapForType.modifier_insertKey (object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2939)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                               categoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_enterDeclarationInGraph (defineCategoryMethod_abstractCategoryModifierAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapDeclarationAST addAssociatedElement'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2956)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("lstring").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2959)), GALGAS_string ("lkey").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2960)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2961))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2957)) ;
  cEnumerator_propertyInCollectionListAST enumerator_126570 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_126570.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_126570.current_mPropertyTypeName (HERE), enumerator_126570.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2967))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2963)) ;
    enumerator_126570.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2971)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2971)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2971)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 2969))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2969)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                            categoryMethod_mapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineCategoryMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listmapDeclarationAST addAssociatedElement'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2980)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("string").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2983)), GALGAS_string ("key").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2984)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2985))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2981)) ;
  var_structAttributeList.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").reader_nowhere (SOURCE_FILE ("semanticContext.galgas", 2989)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 2990))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2986)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2994)), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 2994)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticContext.galgas", 2994)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 2992))  COMMA_SOURCE_FILE ("semanticContext.galgas", 2992)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterCategoryMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                            categoryMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineCategoryMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@semanticTypeForGeneration implementationCppFileName'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outName = object->mAttribute_mTypeProxy.reader_mHeaderFileName (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 502)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                 categoryReader_semanticTypeForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_implementationCppFileName (defineCategoryReader_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@semanticTypeForGeneration hasCppHeaderFile'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticTypeForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (true) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                        categoryReader_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_hasCppHeaderFile (defineCategoryReader_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@semanticTypeForGeneration isPredefined'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outResult = object->mAttribute_mTypeProxy.reader_mIsPredefined (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 514)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                    categoryReader_semanticTypeForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_isPredefined (defineCategoryReader_semanticTypeForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@semanticTypeForGeneration headerKind'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outHeaderKind = object->mAttribute_mTypeProxy.reader_mHeaderKind (inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 520)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                  categoryReader_semanticTypeForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_headerKind (defineCategoryReader_semanticTypeForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outName = object->mAttribute_mImplementationCppFileName ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                 categoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  result_outHasHeader = object->mAttribute_mHasHeader ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                        categoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@semanticDeclarationWithHeaderForGeneration headerKind'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 549)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                  categoryReader_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_headerKind (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@semanticDeclarationWithHeaderForGeneration isPredefined'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                    categoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticDeclarationWithHeaderForGeneration_isPredefined (defineCategoryReader_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@selfCopyInExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                        categoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_selfCopyInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@selfCopyInExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionAST * object = (const cPtr_selfCopyInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 440)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'selfcopy' cannot be used in this context")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 441)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_selfCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    outArgument_outExpression = GALGAS_selfCopyInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSelfCopyTypeProxy, object->mAttribute_mSelfLocation, var_selfCppName  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 444)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionAST.mSlotID,
                                                 categoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_selfCopyInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@hereExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_hereExpressionAST.mSlotID,
                                                        categoryMethod_hereExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_hereExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@hereExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_hereExpressionAST * object = (const cPtr_hereExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_hereExpressionAST) ;
  outArgument_outExpression = GALGAS_hereExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLocationType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 462)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_hereExpressionAST.mSlotID,
                                                 categoryMethod_hereExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionAST_analyzeSemanticExpression (defineCategoryMethod_hereExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@trueExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                        categoryMethod_trueExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_trueExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@trueExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_trueExpressionAST * object = (const cPtr_trueExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_trueExpressionAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 479)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_trueExpressionAST.mSlotID,
                                                 categoryMethod_trueExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionAST_analyzeSemanticExpression (defineCategoryMethod_trueExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@falseExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                        categoryMethod_falseExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_falseExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@falseExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_falseExpressionAST * object = (const cPtr_falseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_falseExpressionAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 496)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_falseExpressionAST.mSlotID,
                                                 categoryMethod_falseExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionAST_analyzeSemanticExpression (defineCategoryMethod_falseExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalCharExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                        categoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalCharExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalCharExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionAST * object = (const cPtr_literalCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mCharacter.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 513)), object->mAttribute_mCharacter.reader_char (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 513))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 513)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalCharExpressionAST.mSlotID,
                                                 categoryMethod_literalCharExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalCharExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalStringExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                        categoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalStringExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalStringExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionAST * object = (const cPtr_literalStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_36806 (object->mAttribute_mStringSequence, kEnumeration_up) ;
  while (enumerator_36806.hasCurrentObject ()) {
    var_s.dotAssign_operation (enumerator_36806.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 532)) ;
    enumerator_36806.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 534)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalStringExpressionAST.mSlotID,
                                                 categoryMethod_literalStringExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalStringExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalDoubleExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                        categoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalDoubleExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalDoubleExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionAST * object = (const cPtr_literalDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 551)), object->mAttribute_mValue.reader_double (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 551))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 551)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionAST.mSlotID,
                                                 categoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalDoubleExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalUIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                        categoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalUIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalUIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionAST * object = (const cPtr_literalUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 568)), object->mAttribute_mValue.reader_uint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 568))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 568)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUIntExpressionAST.mSlotID,
                                                 categoryMethod_literalUIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalUInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                        categoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalUInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionAST * object = (const cPtr_literalUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 587)), object->mAttribute_mValue.reader_uint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 588))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 585)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalUInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@literalSIntExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                        categoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalSIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@literalSIntExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionAST * object = (const cPtr_literalSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605)), object->mAttribute_mValue.reader_sint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 605)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSIntExpressionAST.mSlotID,
                                                 categoryMethod_literalSIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalSInt64ExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                        categoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalSInt_36__34_ExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalBigIntExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                        categoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalBigIntExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSInt64ExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionAST * object = (const cPtr_literalSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 632)), object->mAttribute_mValue.reader_sint_36__34_ (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 633))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 630)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST.mSlotID,
                                                 categoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalSInt_36__34_ExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalBigIntExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionAST * object = (const cPtr_literalBigIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBigIntType, object->mAttribute_mValue.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 647)), object->mAttribute_mValue.reader_bigint (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 648))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 645)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionAST.mSlotID,
                                                 categoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalBigIntExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@defaultConstructorExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_45392 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_45392 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 727)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                        categoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_defaultConstructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@defaultConstructorExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionAST * object = (const cPtr_defaultConstructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = constinArgument_inType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 740)) ;
  }
  const enumGalgasBool test_1 = var_type.reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 742)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 743)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_type.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 746)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 746)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an abstract class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 747)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_type.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 748)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("this class does not support the default constructor")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 749)) ;
      }
    }
    outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 752)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionAST.mSlotID,
                                                 categoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_defaultConstructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@constructorExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_46768 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mAttribute_mTypeName, joker_46768 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 764)) ;
    }
  }
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 766)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                        categoryMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@constructorExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList ;
  GALGAS_bool var_hasCompilerArgument ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mAttribute_mTypeName, object->mAttribute_mConstructorName, object->mAttribute_mExpressions, var_returnedType, var_constructorType, var_constructorEffectiveParameterList, var_hasCompilerArgument, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 776)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mConstructorName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 791)), var_constructorType, object->mAttribute_mConstructorName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 793)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 789)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                 categoryMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readerCallExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readerCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readerCallExpressionAST * object = (const cPtr_readerCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readerCallExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 803)) ;
  categoryMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 804)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readerCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_readerCallExpressionAST.mSlotID,
                                                        categoryMethod_readerCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readerCallExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_readerCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@readerCallExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readerCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readerCallExpressionAST * object = (const cPtr_readerCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readerCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiver.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 817)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 816)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 822)) ;
  GALGAS_getterMap var_getterMap = var_receiverType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 824)) ;
  GALGAS_functionSignature var_readerFormalArgumentTypeList ;
  GALGAS_methodKind var_kind ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_stringlist var_fieldList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 830)) ;
  const cMapElement_getterMap * objectArray_49014 = (const cMapElement_getterMap *) var_getterMap.readAccessForWithInstruction (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 831))) ;
  if (NULL != objectArray_49014) {
      macroValidSharedObject (objectArray_49014, cMapElement_getterMap) ;
    var_readerFormalArgumentTypeList = objectArray_49014->mAttribute_mArgumentTypeList ;
    var_hasCompilerArgument = objectArray_49014->mAttribute_mHasCompilerArgument ;
    var_returnedType = objectArray_49014->mAttribute_mReturnedType ;
    var_kind = objectArray_49014->mAttribute_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_49014->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, objectArray_49014->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 837)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 841)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 841)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_readerFormalArgumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 842)) ;
      var_hasCompilerArgument = GALGAS_bool (true) ;
      var_returnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 844)) ;
      var_kind = GALGAS_methodKind::constructor_definedAsCategory (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 845)) ;
      cEnumerator_typedPropertyList enumerator_49616 (var_receiverType.reader_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 846)), kEnumeration_up) ;
      while (enumerator_49616.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (enumerator_49616.current_mAttributeTypeProxy (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 847)) ;
        GALGAS_getterMap var_aMap = var_attributeType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 851)) ;
        const cMapElement_getterMap * objectArray_49874 = (const cMapElement_getterMap *) var_aMap.readAccessForWithInstruction (object->mAttribute_mReaderName.mAttribute_string) ;
        if (NULL != objectArray_49874) {
            macroValidSharedObject (objectArray_49874, cMapElement_getterMap) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 853)).objectCompare (enumerator_49616.current_mAttributeName (HERE).mAttribute_string)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_matchingReaderCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 854)) ;
            var_readerFormalArgumentTypeList = objectArray_49874->mAttribute_mArgumentTypeList ;
            var_hasCompilerArgument = objectArray_49874->mAttribute_mHasCompilerArgument ;
            var_returnedType = objectArray_49874->mAttribute_mReturnedType ;
            var_kind = objectArray_49874->mAttribute_mKind ;
            var_fieldList.addAssign_operation (enumerator_49616.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 859)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_49874->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              GALGAS_location location_5 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_5, objectArray_49874->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 861)) ;
            }
          }
        }
        enumerator_49616.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 868))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 867)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_50768 (var_fieldList, kEnumeration_up) ;
          while (enumerator_50768.hasCurrentObject ()) {
            var_s.dotAssign_operation (enumerator_50768.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 874)) ;
            if (enumerator_50768.hasNextObject ()) {
              var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 875)) ;
            }
            enumerator_50768.gotoNextObject () ;
          }
          GALGAS_location location_9 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 878)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 879)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 879))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 877)) ;
          var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
          var_hasCompilerArgument.drop () ; // Release error dropped variable
          var_returnedType.drop () ; // Release error dropped variable
          var_kind.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_getterMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 882)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_location location_11 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_11, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 884)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 884)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 884))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 883)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_10) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_getterMap enumerator_51428 (var_getterMap, kEnumeration_up) ;
        while (enumerator_51428.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_51428.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 889)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 889))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 889)) ;
          cEnumerator_functionSignature enumerator_51496 (enumerator_51428.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_51496.hasCurrentObject ()) {
            GALGAS_string temp_12 ;
            const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_51496.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              temp_12 = enumerator_51496.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)) ;
            }else if (kBoolFalse == test_13) {
              temp_12 = GALGAS_string::makeEmptyString () ;
            }
            var_s.dotAssign_operation (GALGAS_string (" \?").add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)).add_operation (enumerator_51496.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 891)) ;
            enumerator_51496.gotoNextObject () ;
          }
          var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_51428.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 893))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 893)) ;
          enumerator_51428.gotoNextObject () ;
        }
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_getterMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 897)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string ("readers are") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string ("reader is") ;
        }
        GALGAS_location location_16 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_16, GALGAS_string ("the '@").add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)).add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)).add_operation (GALGAS_string ("' reader; available "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 896)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 897)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 898))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 895)) ;
        var_readerFormalArgumentTypeList.drop () ; // Release error dropped variable
        var_hasCompilerArgument.drop () ; // Release error dropped variable
        var_returnedType.drop () ; // Release error dropped variable
        var_kind.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 903)).objectCompare (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 903)))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_location location_18 (object->mAttribute_mReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_18, GALGAS_string ("calling the '").add_operation (object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)).add_operation (GALGAS_string ("' reader of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)).add_operation (var_receiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)).add_operation (var_readerFormalArgumentTypeList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905)).add_operation (object->mAttribute_mExpressions.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 906)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 906)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 905)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 906))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 904)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_17) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 908)) ;
    cEnumerator_actualOutputExpressionList enumerator_52508 (object->mAttribute_mExpressions, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_52544 (var_readerFormalArgumentTypeList, kEnumeration_up) ;
    while (enumerator_52508.hasCurrentObject () && enumerator_52544.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_52508.current_mExpression (HERE).ptr (), enumerator_52544.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 910)) ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_52544.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_52508.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_string temp_20 ;
        const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, enumerator_52544.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_21) {
          temp_20 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_21) {
          temp_20 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_22 (enumerator_52508.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_22, GALGAS_string ("the selector should be '!").add_operation (enumerator_52544.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)).add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 917)) ;
      }
      {
      routine_checkAssignmentTypes (enumerator_52544.current_mFormalArgumentType (HERE), var_exp.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)), enumerator_52508.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 919)) ;
      }
      var_constructorEffectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 920)) ;
      enumerator_52508.gotoNextObject () ;
      enumerator_52544.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_readerCallExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mReaderName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 924)), var_kind, var_receiverExpression, var_fieldList, object->mAttribute_mReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 928)), var_constructorEffectiveParameterList, var_hasCompilerArgument  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 922)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readerCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_readerCallExpressionAST.mSlotID,
                                                 categoryMethod_readerCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readerCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_readerCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                        categoryMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_bool var_optionComponentIsPredefined ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 970)) ;
  GALGAS_bool var_found = var_boolOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 978)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 978)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 980)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found = var_uintOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 981)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 981)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 984)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found = var_stringOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 985)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 988)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found = var_stringListOptionMap.reader_hasKey (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 989)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 996)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 998)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 999))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 994)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1000)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1003)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1005)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1006))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1001)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1007)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1010)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1012)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1013))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1008)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionReaderName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1014)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1017)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1019)), object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1015)) ;
          }else if (kBoolFalse == test_7) {
            GALGAS_location location_8 (object->mAttribute_mOptionReaderName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_8, GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_57159 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_57159.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_57159.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)) ;
      enumerator_57159.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_57245 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_57245.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_57245.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1030)) ;
      enumerator_57245.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_57333 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_57333.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("\n"
        "-  '").add_operation (enumerator_57333.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1033)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1033)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1033))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1033)) ;
      enumerator_57333.gotoNextObject () ;
    }
    GALGAS_location location_9 (object->mAttribute_mOptionEntryName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)).add_operation (object->mAttribute_mOptionEntryName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1036))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1035)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                 categoryMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@concatExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionAST * object = (const cPtr_concatExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1105)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_concatExpressionAST.mSlotID,
                                                        categoryMethod_concatExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_concatExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@concatExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionAST * object = (const cPtr_concatExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1121)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1121)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1126)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1127)).operator_and (function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1127)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1127)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("."), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1124)) ;
  }
  outArgument_outExpression = GALGAS_concatExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1133)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_concatExpressionAST.mSlotID,
                                                 categoryMethod_concatExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionAST_analyzeSemanticExpression (defineCategoryMethod_concatExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@orExpressionAST enterExpressionInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1145)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1146)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                        categoryMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1157)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1165)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1164)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1171)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1174)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)).operator_and (function_binaryOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1175)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1172)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1181)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                 categoryMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineCategoryMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@orShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1193)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1194)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                        categoryMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@orShortExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1205)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1213)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1222)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)).operator_and (function_binaryOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1220)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1229)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                 categoryMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineCategoryMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@andExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1241)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1242)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                        categoryMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@andExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1261)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1260)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1267)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1270)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1271)).operator_and (function_binaryAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1271)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1271)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1268)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1277)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                 categoryMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineCategoryMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@andShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1289)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1290)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                        categoryMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@andShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1302)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1309)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1308)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1315)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1318)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)).operator_and (function_binaryAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1316)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1325)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                 categoryMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineCategoryMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@xorExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1337)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1338)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                        categoryMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@xorExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1350)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1349)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1357)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1356)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1363)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1366)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1367)).operator_and (function_binaryXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1367)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1367)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1364)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1373)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                 categoryMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineCategoryMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@closedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1386)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1387)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                        categoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@closedSliceExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1400)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1399)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1407)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1413)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1414)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1417)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1418)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1419)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1419)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1423)), object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1422)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                 categoryMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineCategoryMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@openedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1435)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1436)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                        categoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@openedSliceExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1449)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1448)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1456)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1455)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1462)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1463)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_leftExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1464)), GALGAS_string ("the left expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1464)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1466)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1467)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_rightExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)), GALGAS_string ("the right expression or '...' operator should an @uint")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1468)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1472)), object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1471)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                 categoryMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineCategoryMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@equalExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1484)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1485)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                        categoryMethod_equalExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_equalExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@equalExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1497)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1497)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1498)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1501)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1503)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)).add_operation (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1506))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1505)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1510)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                 categoryMethod_equalExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionAST_analyzeSemanticExpression (defineCategoryMethod_equalExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@notEqualExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1524)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1525)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                        categoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_notEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@notEqualExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1537)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1536)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1542)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1544)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1551)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1552)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1552)).objectCompare (var_rightType.reader_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1552)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1552)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1554))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1553)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1558)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                 categoryMethod_notEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lowerOrEqualExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1572)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                        categoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lowerOrEqualExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1584)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1583)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1591)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1590)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1597)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1598)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1599)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1599)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1599)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1601)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1601)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1601))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1600)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1603)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1603)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1605))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1604)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1609)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@greaterOrEqualExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1622)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1623)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                        categoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@greaterOrEqualExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1635)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1640)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1642)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1649)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1650)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1650)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1650)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1652))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1651)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1654)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1656))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1655)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1660)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                 categoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (defineCategoryMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@strictGreaterExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1673)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1674)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                        categoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@strictGreaterExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1686)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1685)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1691)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1693)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1700)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1701)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1701)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1701)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1702)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1705)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1705)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1707))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1706)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1711)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                 categoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictGreaterExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@strictLowerExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1724)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1725)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                        categoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_strictLowerExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@strictLowerExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1737)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1736)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1742)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), var_leftType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1744)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1751)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1752)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1752)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1752)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1754))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1753)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1756)).objectCompare (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1756)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)).add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1762)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                 categoryMethod_strictLowerExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_analyzeSemanticExpression (defineCategoryMethod_strictLowerExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@rightShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1775)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1776)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                        categoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_rightShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@rightShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1788)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1787)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1795)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1794)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1801)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1802)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1803)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1803)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1803)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1805))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1804)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1807)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1809))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1808)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                 categoryMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@leftShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1826)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1827)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                        categoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_leftShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@leftShiftExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1839)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1838)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1846)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1845)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1852)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1853)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)).operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1856))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1855)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1858)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1860)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1860)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1860))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1859)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1864)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                 categoryMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineCategoryMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1877)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1878)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@addExpressionNoOverflowAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1890)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1898)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1897)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1904)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1907)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)).operator_and (function_binaryAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1908)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1905)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1914)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_addExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@addExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1927)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1928)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                        categoryMethod_addExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_addExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@addExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1940)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1939)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1947)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1946)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1953)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1956)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)).operator_and (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1954)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1963)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                 categoryMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineCategoryMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1976)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1977)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@subExpressionNoOverflowAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1990)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1989)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1997)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1996)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2003)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2006)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)).operator_and (function_binarySubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2007)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2004)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2013)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_subExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@subExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2026)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                        categoryMethod_subExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_subExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@subExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2039)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2038)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2045)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2052)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2055)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2056)).operator_and (function_binarySubOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2056)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2056)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2053)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2062)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                 categoryMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineCategoryMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2075)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2076)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2088)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2094)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2101)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2104)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2105)).operator_and (function_binaryMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2105)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2105)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2102)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2111)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@multiplicationExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2123)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2124)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                        categoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_multiplicationExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2136)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2135)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2143)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2142)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2149)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2152)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153)).operator_and (function_binaryMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2153)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2159)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                 categoryMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineCategoryMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2171)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2172)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                        categoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (defineCategoryMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2184)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2183)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2191)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2190)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2197)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2200)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)).operator_and (function_binaryDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2198)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2207)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                 categoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (defineCategoryMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@divisionExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2220)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2221)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                        categoryMethod_divisionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_divisionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2233)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2232)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2240)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2239)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2246)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2249)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2250)).operator_and (function_binaryDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2250)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2250)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2247)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2256)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                 categoryMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineCategoryMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@moduloExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2268)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2269)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                        categoryMethod_moduloExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_moduloExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mLeftExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2281)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2280)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mRightExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2288)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2287)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2294)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2297)), GALGAS_bool (kIsNotEqual, var_leftType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2298)).operator_and (function_binaryModOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2298)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2298)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2295)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2304)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                 categoryMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineCategoryMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@unaryMinusNoOverflowExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                        categoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@unaryMinusNoOverflowExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2328)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2328)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2330)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2331)).operator_and (function_unaryMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2331)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2333)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2333)).add_operation (GALGAS_string ("' and does not support the unary minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2333))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2332)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2337)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                 categoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@unaryMinusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2349)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                        categoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@unaryMinusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2361)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2361)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2363)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2364)).operator_and (function_unaryMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2364)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2364)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2366)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2366)).add_operation (GALGAS_string ("' and does not support the unary minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2366))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2365)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2370)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                 categoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@unaryPlusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2382)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                        categoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@unaryPlusExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2393)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2393)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = outArgument_outExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2395)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2396)).operator_and (function_unaryPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2396)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2398)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2398)).add_operation (GALGAS_string ("' and does not support the unary '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2398))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2397)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                 categoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_analyzeSemanticExpression (defineCategoryMethod_unaryPlusExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@notExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2408)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                        categoryMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@notExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2420)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2420)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2422)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)).operator_and (function_unaryNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2423)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2424)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2429)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                 categoryMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineCategoryMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@structFieldAccessExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                        categoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@structFieldAccessExpressionAST analyzeSemanticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2453)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2452)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2459)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2460)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2460)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '.' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2461)) ;
  }
  GALGAS_attributeMap var_attributeMap = var_type.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2463)) ;
  var_attributeMap.method_searchKey (object->mAttribute_mStructFieldName, var_type, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2464)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2470)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                 categoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineCategoryMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@complementExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_complementExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2483)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_complementExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                        categoryMethod_complementExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_complementExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2495)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2495)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2497)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2498)).operator_and (function_unaryTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2498)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2498)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2500)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2500)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2500))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2499)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2504)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                 categoryMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineCategoryMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ifExpressionAST enterExpressionInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2516)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2517)) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2518)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                        categoryMethod_ifExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_ifExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@ifExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mIfExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2530)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2530)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2533)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2536)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2538)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2538)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2539)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2542)).objectCompare (var_else_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2542)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)).add_operation (var_else_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2544))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2543)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2549)), object->mAttribute_mOperatorLocation, var_if_5F_expression, var_then_5F_expression, var_else_5F_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2548)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                 categoryMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineCategoryMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@functionCallExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_113087 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_113087.hasCurrentObject ()) {
    callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_113087.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2564)) ;
    enumerator_113087.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                        categoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_functionSignature var_functionSignature ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultType, var_isInternal, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2576)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.reader_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2584)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2585)).objectCompare (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2585)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2586)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2590)).objectCompare (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2590)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFunctionName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)).add_operation (var_functionSignature.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2592)).add_operation (object->mAttribute_mExpressionList.reader_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)).reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2593))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2591)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2597)) ;
    cEnumerator_functionSignature enumerator_114610 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_actualOutputExpressionList enumerator_114633 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_114610.hasCurrentObject () && enumerator_114633.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_114633.current_mExpression (HERE).ptr (), enumerator_114610.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2599)) ;
      {
      routine_checkAssignmentTypes (enumerator_114610.current_mFormalArgumentType (HERE), var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2605)), enumerator_114633.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2605)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_114610.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_114633.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_114610.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_114610.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2607)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_114633.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2607)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2607))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2607)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2609)) ;
      enumerator_114610.gotoNextObject () ;
      enumerator_114633.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2613)), object->mAttribute_mFunctionName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2614)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2611)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                 categoryMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineCategoryMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@varInExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                        categoryMethod_varInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_varInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@varInExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_sourceVariableCppName ;
  GALGAS_string var_nameForCheckingFormalParameterUsing ;
  {
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mVarName, var_type, var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2633)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mVarName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2641)), var_sourceVariableCppName, var_nameForCheckingFormalParameterUsing  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2639)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                 categoryMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@literalTypeInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                        categoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalTypeInExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_bool joker_117075_26 ; // Joker input parameter
  GALGAS_bool joker_117075_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_117075_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_117075_23 ; // Joker input parameter
  GALGAS_bool joker_117075_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_117075_21 ; // Joker input parameter
  GALGAS_attributeMap joker_117075_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_117075_19 ; // Joker input parameter
  GALGAS_constructorMap joker_117075_18 ; // Joker input parameter
  GALGAS_getterMap joker_117075_17 ; // Joker input parameter
  GALGAS_setterMap joker_117075_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_117075_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_117075_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_117075_13 ; // Joker input parameter
  GALGAS_stringlist joker_117075_12 ; // Joker input parameter
  GALGAS_uint joker_117075_11 ; // Joker input parameter
  GALGAS_functionSignature joker_117075_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_117075_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_117075_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_117075_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_117075_6 ; // Joker input parameter
  GALGAS_bool joker_117075_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_117075_4 ; // Joker input parameter
  GALGAS_string joker_117075_3 ; // Joker input parameter
  GALGAS_string joker_117075_2 ; // Joker input parameter
  GALGAS_headerKind joker_117075_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mLiteralTypeName, joker_117075_26, joker_117075_25, joker_117075_24, joker_117075_23, joker_117075_22, joker_117075_21, joker_117075_20, joker_117075_19, joker_117075_18, joker_117075_17, joker_117075_16, joker_117075_15, joker_117075_14, joker_117075_13, joker_117075_12, joker_117075_11, joker_117075_10, joker_117075_9, joker_117075_8, joker_117075_7, joker_117075_6, joker_117075_5, joker_117075_4, joker_117075_3, joker_117075_2, joker_117075_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2662)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665)), object->mAttribute_mLiteralTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2666)), object->mAttribute_mLiteralTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2667))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2664)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                 categoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2675)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                        categoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@testDynamicClassInExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2687)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2687)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2689)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2691)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2691)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2691)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_castType ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2694)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2695)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2695)).isValid ()) {
      uint32_t variant_118620 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2695)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2695)).uintValue () ;
      bool loop_118620 = true ;
      while (loop_118620) {
        loop_118620 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).isValid () ;
        if (loop_118620) {
          loop_118620 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2696)).boolValue () ;
        }
        if (loop_118620 && (0 == variant_118620)) {
          loop_118620 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2695)) ;
        }
        if (loop_118620) {
          variant_118620 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2697)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2698)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2700)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)).add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2702))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2701)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2705)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2706)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2706)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2705)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2706))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2705)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2711)), var_expression, object->mAttribute_mTypeComparisonKind, var_castType  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2709)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                 categoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@castInExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_castInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  callCategoryMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_castInExpressionAST_enterExpressionInSemanticContext (void) {
  enterCategoryMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                        categoryMethod_castInExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_enterExpressionInSemanticContext (defineCategoryMethod_castInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@castInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2734)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2733)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2740)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2744)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = var_type ;
    GALGAS_bool var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2747)))) ;
    if (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).isValid ()) {
      uint32_t variant_120645 = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.reader_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)).uintValue () ;
      bool loop_120645 = true ;
      while (loop_120645) {
        loop_120645 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).isValid () ;
        if (loop_120645) {
          loop_120645 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_and (var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).reader_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2749)).boolValue () ;
        }
        if (loop_120645 && (0 == variant_120645)) {
          loop_120645 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2748)) ;
        }
        if (loop_120645) {
          variant_120645 -- ;
          var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2750)) ;
          var_found = GALGAS_bool (kIsEqual, var_t.objectCompare (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2751)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2753)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '@").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2756)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2756)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2755)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2756))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2754)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      inCompiler->emitSemanticError (var_expression.reader_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2765)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2765)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2764)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2765))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)) ;
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2768)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2768)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mEndOfReceiverExpression, var_expression, object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2773))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2769)) ;
  }else if (kBoolFalse == test_4) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mTypeName.reader_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2777)), var_expression, object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2779))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2775)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterCategoryMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                 categoryMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineCategoryMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

