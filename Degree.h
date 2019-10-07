#ifndef DEGREE_H
#define DEGREE_H
using namespace std;
#include <string>

class Degree
{
public:
	Degree();                  // a default constructor
	Degree(int dNumber, std::string dName);    // a constructor that takes the degree number and degree name
	string get_name();        // returns the name of the degree
	int get_degree_number();  // returns the degree's number
	~Degree();                //A default destructor
	int degnum;
	string names;
};
#endif
