#include <iostream>
#include "Registration.h"
#include "Faculty.h"
#include "Degree.h"
#include <string>
using namespace std;
int main()
{
    cout <<"Registration"<<endl;
    cout<<"Enter Applicant name"<<endl;
    string name;
    cin>>name;
    Registration one = Registration(name);
    cout<<"Enter role"<<endl;
    string role;
    cin>>role;
    one.set_role(role);
    cout<<"Enter national id"<<endl;
    string id;
    cin>>id;
    one.set_NID(id);
    cout<<"Processing registration..."<<endl;
    if(one.register_user())
    {
        cout<<"Registration succesfull"<<endl;
        cout<<"Details: "<<endl;
        cout<<one.return_deets()<<endl;
    }
    else
    {
        cout<<"Registration failed"<<endl;
    }
    return 0;
}