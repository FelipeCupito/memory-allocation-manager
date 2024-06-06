CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
LDFLAGS =

LIB_NAME = libmemmanager.a

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
TARGET = $(LIB_NAME)

.PHONY: all clean test examples

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

test: $(TARGET)
	$(MAKE) -C tests

examples: $(TARGET)
	$(MAKE) -C examples