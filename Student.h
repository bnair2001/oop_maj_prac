#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

#include <string>

class Student
{
public:
  Student();
  string name;
  string setname();

  string email;
  string setemail();

  string date;
  string setdate();

  string national_ID;
  string setNaID();

  int age;
  string setage();

  string uni_enrolled_students[];
  string enrolluni();
};

#endif 
