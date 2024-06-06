CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../include
LDFLAGS =

SRCS = test_MemMang.c
OBJS = $(SRCS:.c=.o)
TARGET = test_MemMang

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJS) -L.. -lmemmanager

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)