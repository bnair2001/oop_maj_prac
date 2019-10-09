#include "Degree.h"


int main()
{
    Degree d1("ecms", "computer science");
    Degree d2("ecms", "engineering");
    Degree d3("ecms", "software engineering");
    Degree d4("arts", "indigenous studies");
    Degree d5("arts", "history");

    cout << d1.get_fac_name() << endl;
    cout << d2.get_degree() << endl;


    return 0;
}