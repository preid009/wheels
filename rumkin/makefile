CC=clang
CFLAGS=-Wall -std=c99 -g

all: affine 

affine: affine.c rumk.h
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm -f *~ *.o *# affine
