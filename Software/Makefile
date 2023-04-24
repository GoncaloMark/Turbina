OUTPUT_DIR := Debug
OUTPUT_FILE := ${OUTPUT_DIR}/turbinada.elf

C_SRC := main.c io.c

C_OBJS := $(C_SRC:%.c=${OUTPUT_DIR}/%.p1)

CCOMPILER := /mnt/c/microchip/bin/xc8-cc
CFLAGS := -mcpu=16F18324 -c  -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -DXPRJ_default=default  -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits   -std=c99 -gdwarf-3 -mstack=compiled:auto:auto

LFLAGS:= -mcpu=16F18324 -Wl,-Map=$(OUTPUT_DIR)/out.map  -DXPRJ_default=default  -Wl,--defsym=__MPLAB_BUILD=1 -fno-short-double -fno-short-float -O0 -fasmfile -maddrqual=ignore -xassembler-with-cpp -mwarn=-3 -Wa,-a -msummary=-psect,-class,+mem,-hex,-file  -ginhx32 -Wl,--data-init -mno-keep-startup -mno-osccal -mno-resetbits -mno-save-resetbits -mno-download -mno-stackcall -mdefault-config-bits -std=c99 -gdwarf-3 -mstack=compiled:auto:auto      -Wl,--memorysummary,$(OUTPUT_DIR)/memoryfile.xml

# compile

$(C_OBJS): $(OUTPUT_DIR)/%.p1 : %.c
	@echo Compiling: $<
	@mkdir -p $(@D)
	$(CCOMPILER) $(CFLAGS) -o "$@" "$<"

# link

all:	$(OUTPUT_FILE)

$(OUTPUT_FILE) : $(C_OBJS)
	@echo Linking: $@
	@$(CCOMPILER) $(LFLAGS) -o "$(OUTPUT_FILE)" $(C_OBJS)

.PHONY: clean
clean: 
	@echo Cleaning Debug
	@rm -rf $(OUTPUT_DIR)



