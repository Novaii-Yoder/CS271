all: eventSchedule

eventSchedule: eventSchedule.o planning.o
	gcc eventSchedule.o planning.o -o eventSchedule
	
planning.o: planning.c planning.h
	gcc -c planning.c

eventSchedule.o: eventSchedule.c planning.h
	gcc -c eventSchedule.c
	
clean:
	rm -rf *.o
