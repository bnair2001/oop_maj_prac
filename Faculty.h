#ifndef FACULTY_H
#define FACULTY_H
using namespace std;
#include <string>
#include "Degree.h"

class Faculty : public Degree
{
public:
	Faculty();                            // default constructor
	Faculty(int max_size, string name);  // constructor with given Faculty size and Faculty name
		int facultysize;
		string facultyname;

	// returns the number of Degrees who have joined the Faculty
	int get_current_number_of_Degrees();
		int degnum;


	string get_name();                // returns the Faculty's name


	Degree * get_roster();        // returns the array of Degrees currently on the Faculty
		Degree roster[200];

	// returns true and adds new Degree to the Faculty if the Faculty is not full
	// otherwise returns false
	bool add_degree(Degree new_degree);

	~Faculty();
};
#endif
