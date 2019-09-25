#ifndef REGISTRATION_H
#define REGISTRATION_H

using namespace std;

#include <string>

class Registration
{
public:
        Registration();
        bool register_user();
        void set_name();

        int registration_id;
        string name;
        string role;
        string date;
        string national_ID;
};

#endif 