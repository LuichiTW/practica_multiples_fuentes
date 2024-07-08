CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCS = main.c tabla.c conversion.c
OBJS = $(SRCS:.c=.o)
EXEC = programa
all: $(EXEC)
$(EXEC): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@
clean:
    rm -f $(OBJS) $(EXEC)
.PHONY: all clean