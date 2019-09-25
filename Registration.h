#ifndef REGISTRATION_H
#define REGISTRATION_H

using namespace std;

#include <string>

class Registration
{
public:
        Registration();
        bool register_user();
        int registration_id;
        string name;
        string description;
        string date;
        string national_ID;
};

#endif 