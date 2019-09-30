#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include "Registration.h"

using namespace std;
string convertToString(char[],int);
string currentDateTime();

Registration::Registration(string aname)
{
    registration_id = 0;
    name = aname;
    role = "student_description" ;
    date = "1st of the first month of 2020";
    national_ID = "abcd12345";
}

void Registration::set_role(string rol)
{
    role = rol;
}

void Registration::set_NID(string id)
{
    national_ID = id;
}

bool Registration::register_user()
{
    bool go = false;
    if((role != "student_description")&&(national_ID != "abcd1234"))
    {
        go = true;
        date = currentDateTime();
    }
    return go;
}

string Registration::return_deets()
{
    string details;
    details = "Name:" + name + "\n" + "Role: " + role + "\n" + "Date: " + date+ "\n" + " NNational ID: " + national_ID;
    return details;
}

string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    int a_size = sizeof(buf) / sizeof(char);
    string ab = convertToString(buf,a_size);
    return ab;
}

string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}