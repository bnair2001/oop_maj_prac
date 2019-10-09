# Course: Object Oriented Programming
# Major Practical
# Authors:
# Student IDs: a1782891, a, a
# Description: Makefile for our University enrolment system

all: student

student:
	g++ test_regclass.cpp Registration.cpp -o out
	./out

faculty:
	g++ test_faculty.cpp Degree.cpp Faculty.cpp -o out
	./out

clean:
	rm -rf out