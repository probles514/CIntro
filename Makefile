# Compiler
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Target executable
TARGET = calculator

# Source files
SRCS = calculator.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target: Compile the program
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Rule to compile the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)