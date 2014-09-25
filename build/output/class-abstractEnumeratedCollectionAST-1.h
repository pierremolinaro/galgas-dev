#ifndef class_2D_abstractEnumeratedCollectionAST_1_DEFINED
#define class_2D_abstractEnumeratedCollectionAST_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @abstractEnumeratedCollectionAST class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractEnumeratedCollectionAST : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractEnumeratedCollectionAST (void) ;

//---
  public : inline const class cPtr_abstractEnumeratedCollectionAST * ptr (void) const { return (const cPtr_abstractEnumeratedCollectionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;



//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractEnumeratedCollectionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractEnumeratedCollectionAST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

