# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall

# Source file and target executable
SRC = main.c
TARGET = main

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
