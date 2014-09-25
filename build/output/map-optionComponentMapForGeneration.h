#ifndef map_2D_optionComponentMapForGeneration_DEFINED
#define map_2D_optionComponentMapForGeneration_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "map-optionComponentMapForGeneration-1.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "struct-guiAnalysisContext.h"
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@optionComponentMapForGeneration' map                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_optionComponentMapForGeneration : public cMapElement {
//--- Map attributes
  public : GALGAS_guiAnalysisContext mAttribute_mGuiComponentContext ;

//--- Constructor
  public : cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                        const GALGAS_guiAnalysisContext & in_mGuiComponentContext
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

