all: testpractice

testpractice: practice.o testpractice.o
	gcc practice.o testpractice.o -o testpractice -lm

practice.o: practice.c practice.h
	gcc -c practice.c
	
testpractice.o: testpractice.c practice.h
	gcc -c testpractice.c
	
clean:
	rm -rf *.o
