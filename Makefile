CC=gcc
CFLAGS=-Ofast -march=native -flto
bullit: main.c
	$(CC) $(CFLAGS) -o testfire main.c bullit.c	
.PHONY: clean
clean:
	rm -f testfire.exe testfire
