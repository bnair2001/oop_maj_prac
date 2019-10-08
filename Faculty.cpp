#include "Faculty.h"

Faculty::Faculty() : faculty_name("Not Initialised") {}

Faculty::Faculty(string faculty_name) : faculty_name(faculty_name) {}

string Faculty::get_fac_name() {return faculty_name;}
