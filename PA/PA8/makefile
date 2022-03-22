all: EmployeeTest
	./EmployeeTest
	rm EmployeeTest
	rm *.o

EmployeeTest: EmployeeTest.o Employee.o
	g++ EmployeeTest.o Employee.o -o EmployeeTest

EmployeeTest.o: EmployeeTest.cpp Employee.h
	g++ -c EmployeeTest.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp
