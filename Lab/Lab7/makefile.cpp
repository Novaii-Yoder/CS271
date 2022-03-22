all: testLab7
	./testLab7 < savings.txt
	rm testLab7
	rm *.o
	
testLab7: testLab7.o SavingsAccount.o
	g++ testLab7.o SavingsAccount.o -o testLab7
	
testLab7.o: testLab7.cpp SavingsAccount.h
	g++ -c testLab7.cpp
	
SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h
	g++ -c SavingsAccount.cpp
