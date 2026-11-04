CC = gcc
CPPFLAGS ?=
CFLAGS ?= -Wall -Wextra
LDFLAGS ?=
LDLIBS =
BUILD_DIR := build

.PHONY: all clean
all: $(BUILD_DIR)/help $(BUILD_DIR)/strlength $(BUILD_DIR)/strconcat $(BUILD_DIR)/strcompare

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/help: help.c mystrings.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) help.c $(LDLIBS) -o $@

$(BUILD_DIR)/strlength: strlength.c mystrings.c mystrings.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) strlength.c mystrings.c $(LDLIBS) -o $@

$(BUILD_DIR)/strconcat: strconcat.c mystrings.c mystrings.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) strconcat.c mystrings.c $(LDLIBS) -o $@

$(BUILD_DIR)/strcompare: strcompare.c mystrings.c mystrings.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) strcompare.c mystrings.c $(LDLIBS) -o $@

clean:
	rm -rf $(BUILD_DIR)
