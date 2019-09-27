#ifndef REGISTRATION_H
#define REGISTRATION_H

using namespace std;

#include <string>

class Registration
{
public:
        Registration(string aname);
        bool register_user();
        string return_deets();
        void set_NID(string id);
        void set_role(string rol);
        int registration_id;
        string name;
        string role;
        string date;
        string national_ID;
};

#endif