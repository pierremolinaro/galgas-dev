#ifndef enum_2D_typeKindEnum_1_DEFINED
#define enum_2D_typeKindEnum_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindEnum enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_classType,
    kEnum_enumType,
    kEnum_listType,
    kEnum_sortedListType,
    kEnum_mapType,
    kEnum_uniqueMapType,
    kEnum_mapProxyType,
    kEnum_listMapType,
    kEnum_structType,
    kEnum_graphType,
    kEnum_externType,
    kEnum_arrayType,
    kEnum_predefinedType
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKindEnum extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_typeKindEnum constructor_arrayType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_classType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_enumType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_externType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_graphType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_listMapType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_listType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_mapProxyType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_mapType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_predefinedType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_sortedListType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_structType (LOCATION_ARGS) ;

  public : static GALGAS_typeKindEnum constructor_uniqueMapType (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isArrayType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isClassType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isExternType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGraphType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isListMapType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMapProxyType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMapType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPredefinedType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSortedListType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isStructType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isUniqueMapType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKindEnum class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

