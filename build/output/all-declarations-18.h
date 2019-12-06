#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-17.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @templateBlockInstructionForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateBlockInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_templateBlockInstructionForGeneration * ptr (void) const { return (const cPtr_templateBlockInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateBlockInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBlockInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBlockInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @templateBlockInstructionForGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public : GALGAS_location mProperty_mLocation ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;

//--- Constructor
  public : cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBlockInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBlockInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @templateInstructionForeachForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionForeachForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionForeachForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionForeachForGeneration * ptr (void) const { return (const cPtr_templateInstructionForeachForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionForeachForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionForeachForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                        const class GALGAS_string & inOperand5,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                        const class GALGAS_templateInstructionListForGeneration & inOperand7
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAfterInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBeforeInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBetweenInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (class GALGAS_templateInstructionListForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexCppName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsAscending (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mDoInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratorCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mIndexCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @templateInstructionForeachForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mIsAscending ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public : GALGAS_string mProperty_mEnumeratorCppName ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public : GALGAS_string mProperty_mIndexCppName ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public : GALGAS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;

//--- Constructor
  public : cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                         const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                         const GALGAS_string & in_mEnumeratorCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                         const GALGAS_string & in_mIndexCppName,
                                                         const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                         const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsAscending (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mEnumeratorCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBeforeInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBeforeInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mDoInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDoInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mIndexCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIndexCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mBetweenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBetweenInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration getter_mAfterInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAfterInstructionList (GALGAS_templateInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @templateInstructionSwitchForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--- Constructor
  public : GALGAS_templateInstructionSwitchForGeneration (void) ;

//---
  public : inline const class cPtr_templateInstructionSwitchForGeneration * ptr (void) const { return (const cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_templateInstructionSwitchForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEnumType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionSwitchBranchList (class GALGAS_templateInstructionSwitchBranchListForGeneration inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mEnumType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @templateInstructionSwitchForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mEnumType ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public : GALGAS_templateInstructionSwitchBranchListForGeneration mProperty_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public : cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mEnumType,
                                                        const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                        const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mEnumType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSwitchExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListForGeneration getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTemplateInstructionSwitchBranchList (GALGAS_templateInstructionSwitchBranchListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @optionComponentForGeneration class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_optionComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionComponentForGeneration * ptr (void) const { return (const cPtr_optionComponentForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_commandLineOptionMap & inOperand4,
                                                                             const class GALGAS_commandLineOptionMap & inOperand5,
                                                                             const class GALGAS_commandLineOptionMap & inOperand6,
                                                                             const class GALGAS_commandLineOptionMap & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBoolOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPredefined (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStringListOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStringOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUIntOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @optionComponentForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mIsPredefined ;
  public : GALGAS_string mProperty_mOptionComponentName ;
  public : GALGAS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mProperty_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mProperty_mStringListOptionMap ;

//--- Constructor
  public : cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mOptionComponentName,
                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsPredefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap getter_mBoolOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBoolOptionMap (GALGAS_commandLineOptionMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap getter_mUIntOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUIntOptionMap (GALGAS_commandLineOptionMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap getter_mStringOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStringOptionMap (GALGAS_commandLineOptionMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap getter_mStringListOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStringListOptionMap (GALGAS_commandLineOptionMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @arrayTypeForGeneration class                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_arrayTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_arrayTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayTypeForGeneration * ptr (void) const { return (const cPtr_arrayTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                       const class GALGAS_uint & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDimension (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDimension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mElementTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayTypeForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @arrayTypeForGeneration class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mElementTypeProxy ;
  public : GALGAS_uint mProperty_mDimension ;

//--- Constructor
  public : cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                        const GALGAS_uint & in_mDimension
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mElementTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMElementTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mDimension (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDimension (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @selfCopyInExpressionForGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selfCopyInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_selfCopyInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selfCopyInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selfCopyInExpressionForGeneration * ptr (void) const { return (const cPtr_selfCopyInExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfCopyInExpressionForGeneration (const cPtr_selfCopyInExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfCopyInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfCopyInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfCopyInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfCopyInExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @selfCopyInExpressionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_selfCopyInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mSelfCppName ;

//--- Constructor
  public : cPtr_selfCopyInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mSelfCppName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelfCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @defaultConstructorExpressionForGeneration class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_defaultConstructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_defaultConstructorExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_defaultConstructorExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_defaultConstructorExpressionForGeneration * ptr (void) const { return (const cPtr_defaultConstructorExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_defaultConstructorExpressionForGeneration (const cPtr_defaultConstructorExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultConstructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_defaultConstructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                          const class GALGAS_location & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Pointer class for @defaultConstructorExpressionForGeneration class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_defaultConstructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                           const GALGAS_location & in_mLocation
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @constructorExpressionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_constructorExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_constructorExpressionForGeneration * ptr (void) const { return (const cPtr_constructorExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_constructorExpressionForGeneration (const cPtr_constructorExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_semanticExpressionListForGeneration & inOperand4,
                                                                                   const class GALGAS_bool & inOperand5
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMConstructorName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstructorType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterList (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mConstructorName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mConstructorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mEffectiveParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @constructorExpressionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_constructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mConstructorType ;
  public : GALGAS_string mProperty_mConstructorName ;
  public : GALGAS_semanticExpressionListForGeneration mProperty_mEffectiveParameterList ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mConstructorType,
                                                    const GALGAS_string & in_mConstructorName,
                                                    const GALGAS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mConstructorType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMConstructorType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mConstructorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMConstructorName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration getter_mEffectiveParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterList (GALGAS_semanticExpressionListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @getterCallExpressionForGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_getterCallExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_getterCallExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_getterCallExpressionForGeneration * ptr (void) const { return (const cPtr_getterCallExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_getterCallExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_getterCallExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_methodKind & inOperand2,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                  const class GALGAS_stringlist & inOperand4,
                                                                                  const class GALGAS_string & inOperand5,
                                                                                  const class GALGAS_semanticExpressionListForGeneration & inOperand6,
                                                                                  const class GALGAS_bool & inOperand7
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_getterCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpressions (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFieldList (class GALGAS_stringlist inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_methodKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mExpressions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFieldList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @getterCallExpressionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_getterCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_methodKind mProperty_mKind ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public : GALGAS_stringlist mProperty_mFieldList ;
  public : GALGAS_string mProperty_mGetterName ;
  public : GALGAS_semanticExpressionListForGeneration mProperty_mExpressions ;
  public : GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_getterCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_methodKind & in_mKind,
                                                   const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GALGAS_stringlist & in_mFieldList,
                                                   const GALGAS_string & in_mGetterName,
                                                   const GALGAS_semanticExpressionListForGeneration & in_mExpressions,
                                                   const GALGAS_bool & in_mHasCompilerArgument
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_methodKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mFieldList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFieldList (GALGAS_stringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration getter_mExpressions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpressions (GALGAS_semanticExpressionListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @optionValueExpressionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionValueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionValueExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionValueExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionValueExpressionForGeneration * ptr (void) const { return (const cPtr_optionValueExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionValueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionValueExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (class GALGAS_bool inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @optionValueExpressionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionValueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public : GALGAS_string mProperty_mOptionComponentName ;
  public : GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                    const GALGAS_string & in_mOptionComponentName,
                                                    const GALGAS_string & in_mOptionEntryName
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @optionCharExpressionForGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionCharExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionCharExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionCharExpressionForGeneration * ptr (void) const { return (const cPtr_optionCharExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (class GALGAS_bool inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @optionCharExpressionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public : GALGAS_string mProperty_mOptionComponentName ;
  public : GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                   const GALGAS_string & in_mOptionComponentName,
                                                   const GALGAS_string & in_mOptionEntryName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @optionStringExpressionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionStringExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionStringExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionStringExpressionForGeneration * ptr (void) const { return (const cPtr_optionStringExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (class GALGAS_bool inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @optionStringExpressionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public : GALGAS_string mProperty_mOptionComponentName ;
  public : GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                     const GALGAS_string & in_mOptionComponentName,
                                                     const GALGAS_string & in_mOptionEntryName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @optionCommentExpressionForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optionCommentExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_optionCommentExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionCommentExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionCommentExpressionForGeneration * ptr (void) const { return (const cPtr_optionCommentExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionCommentExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optionCommentExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_string & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (class GALGAS_bool inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @optionCommentExpressionForGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_optionCommentExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public : GALGAS_string mProperty_mOptionComponentName ;
  public : GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public : cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                      const GALGAS_string & in_mOptionComponentName,
                                                      const GALGAS_string & in_mOptionEntryName
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mOptionComponentIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentIsPredefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOptionEntryName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOptionEntryName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @orShortExpressionForGeneration class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_orShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_orShortExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orShortExpressionForGeneration * ptr (void) const { return (const cPtr_orShortExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @orShortExpressionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_orShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @orExpressionForGeneration class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_orExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_orExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orExpressionForGeneration * ptr (void) const { return (const cPtr_orExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orExpressionForGeneration (const cPtr_orExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_orExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @orExpressionForGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_orExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_orExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                           const GALGAS_location & in_mLocation,
                                           const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                           const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @xorExpressionForGeneration class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_xorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_xorExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_xorExpressionForGeneration * ptr (void) const { return (const cPtr_xorExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorExpressionForGeneration (const cPtr_xorExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @xorExpressionForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_xorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_xorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @openedSliceExpressionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_openedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_openedSliceExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_openedSliceExpressionForGeneration * ptr (void) const { return (const cPtr_openedSliceExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_openedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_openedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @openedSliceExpressionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_openedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @closedSliceExpressionForGeneration class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_closedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_closedSliceExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_closedSliceExpressionForGeneration * ptr (void) const { return (const cPtr_closedSliceExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_closedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_closedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @closedSliceExpressionForGeneration class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_closedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @andExpressionForGeneration class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_andExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_andExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andExpressionForGeneration * ptr (void) const { return (const cPtr_andExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andExpressionForGeneration (const cPtr_andExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_andExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @andExpressionForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_andExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_andExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @andShortExpressionForGeneration class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_andShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_andShortExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andShortExpressionForGeneration * ptr (void) const { return (const cPtr_andShortExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_andShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @andShortExpressionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_andShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                 const GALGAS_location & in_mLocation,
                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @multiplicationExpressionForGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_multiplicationExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_multiplicationExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionForGeneration * ptr (void) const { return (const cPtr_multiplicationExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionForGeneration (const cPtr_multiplicationExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @multiplicationExpressionForGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_multiplicationExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                       const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @multiplicationExpressionNoOverflowForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_multiplicationExpressionNoOverflowForGeneration : public GALGAS_semanticExpressionForGeneration {
//--- Constructor
  public : GALGAS_multiplicationExpressionNoOverflowForGeneration (void) ;

//---
  public : inline const class cPtr_multiplicationExpressionNoOverflowForGeneration * ptr (void) const { return (const cPtr_multiplicationExpressionNoOverflowForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_multiplicationExpressionNoOverflowForGeneration (const cPtr_multiplicationExpressionNoOverflowForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_multiplicationExpressionNoOverflowForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_multiplicationExpressionNoOverflowForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                const class GALGAS_location & inOperand1,
                                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @multiplicationExpressionNoOverflowForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_multiplicationExpressionNoOverflowForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Attributes
  public : GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public : GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_multiplicationExpressionNoOverflowForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                 const GALGAS_location & in_mLocation,
                                                                 const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                 const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionForGeneration getter_mRightExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightExpression (GALGAS_semanticExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

