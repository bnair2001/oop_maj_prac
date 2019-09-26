#include <iostream>
#include "Registration.h"

using namespace std;

Registration::Registration(string aname)
{
    registration_id = 0;
    name = aname;
    role = "student_description" ;
    date = "1st of the first month of 2020";
    national_ID = "abcd12345";
}



bool Registration::register_user(string id, string rol)
{
    bool go = false;
    if((rol != "student_description")&&(id != "abcd1234"))
    {
        go = true;
    }
    return go;
}