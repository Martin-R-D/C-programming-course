CC = gcc
CPPFLAGS ?=
CFLAGS ?= -Wall -Wextra
LDFLAGS ?=
LDLIBS =
BUILD_DIR := build

.PHONY: all clean
all: $(BUILD_DIR)/safeadd $(BUILD_DIR)/safesubtract $(BUILD_DIR)/safemultiply $(BUILD_DIR)/safedivide

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/safeadd: safeadd.c safeint.c safeint.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) safeadd.c safeint.c $(LDLIBS) -o $@

$(BUILD_DIR)/safesubtract: safesubtract.c safeint.c safeint.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) safesubtract.c safeint.c $(LDLIBS) -o $@

$(BUILD_DIR)/safemultiply: safemultiply.c safeint.c safeint.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) safemultiply.c safeint.c $(LDLIBS) -o $@

$(BUILD_DIR)/safedivide: safedivide.c safeint.c safeint.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) safedivide.c safeint.c $(LDLIBS) -o $@

clean:
	rm -rf $(BUILD_DIR)
