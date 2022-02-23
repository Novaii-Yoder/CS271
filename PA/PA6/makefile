all: testPA6
	
pointerFunctions.o: pointerFunctions.c pointerFunctions.h
	gcc -c pointerFunctions.c
	
testPA6.o: testPA6.c pointerFunctions.h
	gcc -c testPA6.c
	
testPA6: testPA6.o pointerFunctions.o
	gcc testPA6.o pointerFunctions.o -o testPA6
	
clean:
	rm -rf *.o
