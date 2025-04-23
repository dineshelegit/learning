# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Output directory and executable
OUTPUT_DIR = output
TARGET = $(OUTPUT_DIR)/my_program

# Source and object files
SRCS = main.c c1.c c2.c c3.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(OUTPUT_DIR) $(TARGET)

# Create output directory if it doesn't exist
$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compiling each .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f *.o $(TARGET)

# Phony targets
.PHONY: all clean

