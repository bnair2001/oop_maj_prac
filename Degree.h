#ifndef DEGREE_H
#define DEGREE_H

#include "Faculty.h"

class Degree : public Faculty
{
    private:
        string degree_name;
        //int cutoff_mark;

    public:
        Degree();
        Degree(string faculty_name, string degree_name);
        string get_degree();

};


#endif
