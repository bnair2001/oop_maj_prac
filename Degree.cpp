#include <iostream>
using namespace std;
#include <string>
#include "Degree.h"

Degree::Degree()              // a default constructor
{
	degnum = 0;
	names = "default_value";
}

Degree::Degree(int dNumber, string dName)    // a constructor that takes the degree number and degree name
{
	names = dName;
	degnum = dNumber;
}

string Degree::get_name()        // returns the name of the Degree
{
	return names;
}

int Degree::get_degree_number()  // returns the Degree's Degree number
{
	return degnum;
}

Degree::~Degree()                //A default destructor
{

}
