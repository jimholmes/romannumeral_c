CC=gcc
CFLAGS= -Wall -std=c99 `pkg-config --cflags check`
LIBS = `pkg-config --libs check`

all: roman

roman:
	$(CC) $(CFLAGS) roman.c -o roman $(LIBS)

clean:
	rm *.o roman
