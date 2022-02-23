all: testPA5

functionsPA5.o: functionsPA5.c functionsPA5.h
	gcc -c functionsPA5.c

testPA5.o: testPA5.c functionsPA5.h
	gcc -c testPA5.c

testPA5: testPA5.o functionsPA5.o
	gcc testPA5.o functionsPA5.o -o testPA5

clean:
	rm -rf *.o
