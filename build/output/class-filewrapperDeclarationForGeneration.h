#ifndef class_2D_filewrapperDeclarationForGeneration_DEFINED
#define class_2D_filewrapperDeclarationForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "class-filewrapperDeclarationForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "list-filewrapperTemplateListForGeneration.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperFileMap.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @filewrapperDeclarationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_string mAttribute_mFilewrapperAbsolutePath ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateListForGeneration mAttribute_mFilewrapperTemplateListForGeneration ;

//--- Constructor
  public : cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mhasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFilewrapperName,
                                                     const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                     const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                     const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                     const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperAbsolutePath (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperFileMap reader_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperDirectoryMap reader_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration reader_mFilewrapperTemplateListForGeneration (UNUSED_LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

