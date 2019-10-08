#include "Degree.h"

Degree::Degree() : Faculty(), degree_name("Not Initialised") {}


Degree::Degree(string faculty_name, string degree_name) : Faculty(faculty_name), degree_name(degree_name) {}
        
        
string Degree::get_degree() {return degree_name;}
