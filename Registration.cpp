#include <iostream>
#include "Registration.h"

using namespace std;

Registration::Registration(string aname)
{
    registration_id = 0;
    name = "student_name";
    role = "student_description" ;    
    date = "1st of the first month of 2020";
    national_ID = "abcd12345";
}

bool Registration::register_user()
{
    bool go = true;

    return go;
}