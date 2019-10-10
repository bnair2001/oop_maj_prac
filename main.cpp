#include <iostream>
//#include "conio.h"
//#include <vector>
using namespace std;

void first_input();


int main()
{

	int input_number;
	cout << "Welcome to The Registration System\n" << endl;
	first_input();

	while(true)
	{
		cin >> input_number;

		if (input_number == 1)
		{

			cout << "reach 1" << endl;
			break;
		}
		else if (input_number == 2)
		{
			cout << "reach 2" << endl;
			break;
		}
		else if (input_number == 3)
		{

			break;
		}
		else if (input_number == 4)
		{

			break;
		}
		else if (input_number == 5)
		{

			break;
		}
		else
		{
			first_input();
			continue;
		}
	}


}

void first_input()
{
	cout << "Please Select One of The Following" << endl;
	cout << "1. Undergraduate Registration" << endl;
	cout << "2. Postgraduate registration" << endl;
	cout << "3. Staff registration" << endl;
	cout << "4. Admin login" << endl;
	cout << "5. Quit" << endl;
}

