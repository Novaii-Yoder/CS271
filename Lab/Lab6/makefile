all: testLab6

testLab6: testLab6.o letters.o
	gcc testLab6.o letters.o -o testLab6
	
testLab6.o: testLab6.c letters.h
	gcc -c testLab6.c
	
letters.o: letters.c letters.h
	gcc -c letters.c
	
clean:
	rm -rf *.o
