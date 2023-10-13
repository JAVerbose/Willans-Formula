# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -lm

# Source file and target executable
SRC = willans.c
TARGET = willans

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
