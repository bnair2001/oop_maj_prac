#ifndef FACULTY_H
#define FACULTY_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Faculty
{
    private:
        string faculty_name;
        //int max_student_faculty;

    public:
        Faculty();
        Faculty(string faculty_name);
        string get_fac_name();


};

#endif
