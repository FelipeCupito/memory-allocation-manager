CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../include
LDFLAGS =

SRCS = example.c
OBJS = $(SRCS:.c=.o)
TARGET = example

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS) -L.. -lmemmanager

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)