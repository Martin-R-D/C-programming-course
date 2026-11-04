CC = gcc
CPPFLAGS ?=
CFLAGS ?= -Wall -Wextra
LDFLAGS ?=
LDLIBS =
BUILD_DIR := build

.PHONY: all clean
all: $(BUILD_DIR)/task-manager

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/task-manager: task-manager.c processes.c processes.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) task-manager.c processes.c $(LDLIBS) -o $@

clean:
	rm -rf $(BUILD_DIR)
