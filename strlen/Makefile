strlen:main.o strlen.o
	gcc -g main.o strlen.o -o strlen

main.o:main.c
	gcc -g -c main.c

strlen.o:strlen.c
	gcc -g -c strlen.c

.PHONLY:clean

clean:
	-rm strlen *.o 
