#
# CIS330: Lab 5
#
# Makefile to build libraries and test applications.
#

CC=gcc
AR=ar

CFLAGS=-g -O2 -I./include -L./lib
LIBS=-llab5 -lm

all: lab5

obj:
	mkdir -p obj

lib:
	mkdir -p lib

obj/stats.o: src/stats.c include/stats.h obj
	$(CC) $(CFLAGS) -c -o $@ $<

obj/ohno.o: src/ohno.c include/ohno.h obj
	$(CC) $(CFLAGS) -c -o $@ $<

lib/liblab5.a: obj/stats.o obj/ohno.o lib
	$(AR) rc lib/liblab5.a obj/stats.o obj/ohno.o

lab5: src/lab5.c lib/liblab5.a
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

clean:
	rm lab5 lib/liblab5.a obj/ohno.o obj/stats.o
	rmdir obj
	rmdir lib
