CC=gcc

all:
	$(CC) -Wall -pedantic -O3 -o iaq iaq.c scores.c

install:
	install iaq /usr/local/bin/
