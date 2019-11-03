all: main.o linkedList.o library.o
	$gcc -o tunesTest main.o linkedList.o library.o

main.o: main.c linkedList.h library.h
	$gcc -c main.c

linkedList.o: linkedList.c linkedList.h
	$gcc -c linkedList.c

library.o: library.c library.h
	$gcc -c library.c

run:
	./tunesTest

clean:
	rm *.o
	rm *~
