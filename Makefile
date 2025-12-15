# Makefile for building the project

CC = gcc
CFLAGS = -g
TARGET = myprogram
SRCS = main.c helper.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compiling .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)
