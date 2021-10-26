name = joke.out
HEADERS = -I./headers -I../joke/headers
LIBRARIES = -L../joke -ljoke

trash = $(shell find ./ -name '*.o') $(name)
sources = $(shell find ./sources -name '*.c')
objects = $(sources:.c=.o)

SHELL := /bin/bash
CC = clang
CFLAGS = -Weverything -Wall -Wextra -Werror -Wpedantic $(HEADERS)
LDFLAGS = $(LIBRARIES)

all: release

release: $(name)

debug: CFLAGS += -g
debug: $(name)

$(name): $(objects)
	$(CC) $(LDFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) $(headers) -o $@ -c $< 

clean:
	rm -rf $(trash)

.ONESHELL: