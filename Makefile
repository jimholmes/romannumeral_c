all: roman

roman:
	gcc roman.c -o roman

clean:
	rm *.o roman
