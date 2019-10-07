#include <iostream>
using namespace std;
#include <string>
#include "Faculty.h"
#include "Degree.h"

Faculty::Faculty():Degree()
{
	facultysize = 0;
	facultyname = "ECMS";
	degnum = 0;
}

Faculty::Faculty(int max_size, string name)
{
	facultysize = max_size;
	facultyname = name;
}

int Faculty::get_current_number_of_Degrees()
{
	return degnum;
}

string Faculty::get_name()
{
	return facultyname;
}

bool Faculty::add_degree(Degree new_degree)
{
	if(degnum < facultysize)
		{
			roster[degnum] = new_degree;
			degnum++;
			return true;
		}
	else
	{
		return false;
	}
}

Degree * Faculty::get_roster()
{
		return roster;
}

Faculty::~Faculty()
{

}
