#----------------------------------------------------------------------*
#                                                                      *
#  Don't call this makefile directly                                   *
#                                                                      *
#----------------------------------------------------------------------*

ifneq ($(words $(TEMP_SOURCE_DIRS)), 0)

#----------------------------------------------------------------------*
#                                                                      *
#  Building inference rules                                            *
#                                                                      *
#----------------------------------------------------------------------*

A_DIR := $(word 1, $(TEMP_SOURCE_DIRS))

#----------------------------------------------------------------------*
#   Calling C compiler                                                 *
#----------------------------------------------------------------------*

#--- Without debug
$(OBJECTS_DIR)/%.c.o:$(A_DIR)/%.c $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE): $<"
	$(SILENT_CHAR)$(C_COMPILER_CALL_RELEASE) $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(OBJECTS_DIR)/$(@F).d

#--- With debug
$(DEBUG_OBJECTS_DIR)/%.c.o:$(A_DIR)/%.c $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(DEBUG_OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE) (debug): $<"
	$(SILENT_CHAR)$(C_COMPILER_CALL_DEBUG) $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(DEBUG_OBJECTS_DIR)/$(@F).d

#----------------------------------------------------------------------*
#   Calling C ++ compiler                                              *
#----------------------------------------------------------------------*

#--- Without debug
$(OBJECTS_DIR)/%.cpp.o:$(A_DIR)/%.cpp $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE): $<"
	$(SILENT_CHAR)$(CPP_COMPILER_CALL_RELEASE) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(OBJECTS_DIR)/$(@F).d

#--- With debug
$(DEBUG_OBJECTS_DIR)/%.cpp.o:$(A_DIR)/%.cpp $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(DEBUG_OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE) (debug): $<"
	$(SILENT_CHAR)$(CPP_COMPILER_CALL_DEBUG) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(DEBUG_OBJECTS_DIR)/$(@F).d

#----------------------------------------------------------------------*
#   Calling Objective-C compiler                                       *
#----------------------------------------------------------------------*

#--- Without debug
$(OBJECTS_DIR)/%.m.o:$(A_DIR)/%.m $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE): $<"
	$(SILENT_CHAR)$(OC_COMPILER_CALL_RELEASE) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(OBJECTS_DIR)/$(@F).d

#--- With debug
$(DEBUG_OBJECTS_DIR)/%.m.o:$(A_DIR)/%.m $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(DEBUG_OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE) (debug): $<"
	$(SILENT_CHAR)$(OC_COMPILER_CALL_DEBUG) $(OC_COMPILER_OPTIONS) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(DEBUG_OBJECTS_DIR)/$(@F).d

#----------------------------------------------------------------------*
#   Calling Objective-C++ compiler                                     *
#----------------------------------------------------------------------*

#--- Without debug
$(OBJECTS_DIR)/%.mm.o:$(A_DIR)/%.mm $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE): $<"
	$(SILENT_CHAR)$(OCPP_COMPILER_CALL_RELEASE) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(OBJECTS_DIR)/$(@F).d

#--- With debug
$(DEBUG_OBJECTS_DIR)/%.mm.o: $(A_DIR)/%.mm $(COMPILER_PATH)
	$(SILENT_CHAR)mkdir -p $(DEBUG_OBJECTS_DIR)
	@echo "- $(COMPILATION_MESSAGE) (debug): $<"
	$(SILENT_CHAR)$(OCPP_COMPILER_CALL_DEBUG) -c $< -o $@ $(USER_COMMAND_LINE_OPTIONS) $(INCLUDE_PATHS) -MD -MP -MF $(DEBUG_OBJECTS_DIR)/$(@F).d

#----------------------------------------------------------------------*
#Call recursivly this file, without the first item of TEMP_SOURCE_DIRS *
#----------------------------------------------------------------------*

TEMP_SOURCE_DIRS := $(filter-out $(word 1, $(TEMP_SOURCE_DIRS)), $(TEMP_SOURCE_DIRS))

include $(LIBPM_DIRECTORY_PATH)/included_makefiles/compiler-calls.mak

#----------------------------------------------------------------------*

endif