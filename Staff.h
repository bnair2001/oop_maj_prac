#ifndef STAFF_H
#define STAFF_H

using namespace std;

#include <string>

class Staff
{
public:
  Staff();
  string name;
  string setname();

  string email;
  string setemail();

  string date;
  string setdate();
  
  string staff_ID;
  string setstaffID();
  
  string national_ID;
  string setNaID();

  int age;
  string setage();

  string staff_rank;
  string setrank();
  
  string uni_enrolled_staff[];
  string enrollstaff();
};

#endif 
