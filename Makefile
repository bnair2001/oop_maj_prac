# Course: Object Oriented Programming
# Major Practical
# Authors:
# Student IDs: a1782891, a, a
# Description: Makefile for our University enrolment system

# default target is all
all: driver

#Makefile under construction

# driver is made by linking object files together
driver: Person.o driver.o
	g++ Person.o driver.o -o driver

# the Person.o object file needs recompiled if Person.cpp or Person.h changes
Person.o: Person.cpp Person.h
	g++ -c Person.cpp -o Person.o

# the driver.o object file needs recompiled if driver.cpp or Person.h changes
driver.o: driver.cpp Person.h
	g++ -c driver.cpp -o driver.o

# clean removes all object files and the compiled executable
clean:
	rm -f *.o driver
