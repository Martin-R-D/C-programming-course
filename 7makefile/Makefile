all: help.out strlength.out strconcat.out strcompare.out

help.out: help.c
	gcc help.c -o help.exe

mystrings.o: mystrings.c
	gcc -c mystrings.c -o mystrings.o


strlength.out: strlength.c mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe

strconcat.out: strlength.c mystrings.o strconcat.c
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.out: strlength.c mystrings.o strcompare.c
	gcc strcompare.c mystrings.o -o strcompare.exe

clear:
	rm -f *.o *.out *.exe
 
	
