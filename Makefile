CC=gcc
CFLAGS= -Wall -std=c99

all: roman

roman:
	$(CC) $(CFLAGS) roman.c -o roman

clean:
	rm *.o roman
