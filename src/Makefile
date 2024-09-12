#makefile
# Compiler
CC = gcc
# Compiler flags
# CFLAGS = -Wall -Wextra -pedantic -Werror
# Name of the executatables
TARGET = maze
# Source files
SRCS = walls.c
#Libraries
LIBS =  -lSDL2
# Object files
OBJS = $(SRCS:.c=.o)
# Default target
all: $(TARGET)
# Rule to create executables
$(TARGET): $(OBJS)
	$(CC) $< -o $@ $^ $(LIBS)

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
