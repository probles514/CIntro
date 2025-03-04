CC = gcc
CFLAGS = -Wall -g
TARGET = calculator
SOURCES = calculator.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
    ./$(TARGET)

clean:
    rm -f $(TARGET) $(OBJECTS)