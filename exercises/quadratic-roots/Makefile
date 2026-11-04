CC = gcc
CPPFLAGS ?=
CFLAGS ?= -Wall -Wextra
LDFLAGS ?=
LDLIBS = -lm
BUILD_DIR := build

.PHONY: all clean
all: $(BUILD_DIR)/quadratic-roots

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/quadratic-roots: main.c quadraticroots.c quadraticroots.h | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) main.c quadraticroots.c $(LDLIBS) -o $@

clean:
	rm -rf $(BUILD_DIR)
