CC = gcc
CFLAGS =  -Wall -Wextra -pedantic -std=c99
LDFLAGS = -lSDL2

SRC = src/main.c
OBJ = $(SRC:.c=.o)
INC = headers/headers.h

all: maze

maze: $(OBJ) $(CC) $(CFLAGS) -o maze $(OBJ) $(LDFLAGS)

clean: rm -f $(OBJ) maze
