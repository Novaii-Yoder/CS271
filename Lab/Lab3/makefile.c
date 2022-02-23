all: test3

functions3.o: functions3.c functions3.h
	gcc -c functions3.c

test3.o: test3.c functions3.h
	gcc -c test3.c

test3: functions3.o  test3.o
	gcc functions3.o test3.o -o test3 -lm

clean:
	rm -rf *.o


