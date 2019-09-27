#ifndef ADMIN_H
#define ADMIN_H

using namespace std;

#include <string>
#include "Registration.h"

class Admin
{
public:
        bool student_registration_approval();
        bool staff_registration_approval();
        bool course_addition_approval();
        bool course_enrollment_approval();
        bool fee_approval();
};

#endif