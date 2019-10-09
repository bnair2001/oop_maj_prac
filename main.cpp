#include <iostream>
//#include "conio.h"
#include <vector>
using namespace std;

void first_input();


int main()
{

	int input_number;
	first_input();
	cin >> input_number;

	if (0 < input_number && input_number < 5)
	{
		while (0 > input_number && input_number > 5)
	{
		first_input();
		cin >> input_number;

	}
	}

	

}	

void first_input()
{
	cout << "Welcome to The Registration System\n" << endl;
	cout << "Please Select One of The Following" << endl;
	cout << "1. Undergraduate Registration" << endl;
	cout << "2. Postgraduate registration" << endl;
	cout << "3. Staff registration" << endl;
	cout << "4. Admin login" << endl;
	cout << "5. Quit" << endl;
}

