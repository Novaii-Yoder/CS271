all: testPA4

functionsPA4.o: functionsPA4.c functionsPA4.h
	gcc -c functionsPA4.c

testPA4.o: testPA4.c functionsPA4.h
	gcc -c testPA4.c

testPA4: functionsPA4.o  testPA4.o
	gcc functionsPA4.o testPA4.o -o testPA4 -lm

clean:
	rm -rf *.o


