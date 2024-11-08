#VARIABLES
CC = gcc
CFLAGS = -I./include
TARGET = bin
SOURCE = bst.c main.c
OBJECT = $(SOURCE:.c=.o)

#ALL RULE
all: $(TARGET)

#BUILD EXECUTABLE
$(TARGET): $(OBJECT)
		$(CC) $(OBJECT) -o $(TARGET)

#BUILD OBJECT-FILES
%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

#CLEAN
clean:
		rm -f $(TARGET) $(OBJECT)