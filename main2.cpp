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
            faculty_input();
            cin >> input_number;
            while(input_number>0 || input_number<5)
            {
                switch(input_number)
                {
                    case 1:cout << "hey1" << endl;
            			BA_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing bachelor of music" << endl; break;
           					case 2:cout << "thanks for choosing bachelor of history" << endl; break;
           					case 3:cout << "thanks for choosing bachelor of media" << endl; break;
           					case 4:cout << "thanks for choosing bachelor of philosophy" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    case 2:cout << "hey2" << endl;
            			Beng_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing bachelor of Petroleum" << endl; break;
           					case 2:cout << "thanks for choosing bachelor of Chemical" << endl; break;
           					case 3:cout << "thanks for choosing bachelor of Civil" << endl; break;
           					case 4:cout << "thanks for choosing bachelor of Computer Science" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    case 3:cout << "hey3" << endl;
            			BHMS_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing bachelor of Nursing" << endl; break;
           					case 2:cout << "thanks for choosing bachelor of Medicine" << endl; break;
           					case 3:cout << "thanks for choosing bachelor of Dental" << endl; break;
           					case 4:cout << "thanks for choosing bachelor of Psychology" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                  	case 4:cout << "hey4" << endl;
            			BB_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing bachelor of Entrepreneurship" << endl; break;
           					case 2:cout << "thanks for choosing bachelor of International Trade" << endl; break;
           					case 3:cout << "thanks for choosing bachelor of Economics" << endl; break;
           					case 4:cout << "thanks for choosing bachelor of Law" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;
  		
                    case 5:cout << "hey5" << endl; 
                    	BS_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing bachelor of Physics" << endl; break;
           					case 2:cout << "thanks for choosing bachelor of Biological Sciences" << endl; break;
           					case 3:cout << "thanks for choosing bachelor of Agriculture" << endl; break;
           					case 4:cout << "thanks for choosing bachelor of Veterinary Sciences" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    default: cout << "hey6" << endl; break;
                }
            }

			break;
		}
		else if (input_number == 2)
		{
			cout << "reach 2" << endl;
			faculty_input();
            cin >> input_number;
            while(input_number>0 || input_number<5)
            {
                switch(input_number)
                {
                    case 1:cout << "hey1" << endl;
            			MA_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing master of music" << endl; break;
           					case 2:cout << "thanks for choosing master of history" << endl; break;
           					case 3:cout << "thanks for choosing master of media" << endl; break;
           					case 4:cout << "thanks for choosing master of philosophy" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    case 2:cout << "hey2" << endl;
            			Meng_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing master of Petroleum" << endl; break;
           					case 2:cout << "thanks for choosing master of Chemical" << endl; break;
           					case 3:cout << "thanks for choosing master of Civil" << endl; break;
           					case 4:cout << "thanks for choosing master of Computer Science" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    case 3:cout << "hey3" << endl;
            			MHMS_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing master of Nursing" << endl; break;
           					case 2:cout << "thanks for choosing master of Medicine" << endl; break;
           					case 3:cout << "thanks for choosing master of Dental" << endl; break;
           					case 4:cout << "thanks for choosing master of Psychology" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                  	case 4:cout << "hey4" << endl;
            			MB_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing master of Entrepreneurship" << endl; break;
           					case 2:cout << "thanks for choosing master of International Trade" << endl; break;
           					case 3:cout << "thanks for choosing master of Economics" << endl; break;
           					case 4:cout << "thanks for choosing master of Law" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;
  		
                    case 5:cout << "hey5" << endl; 
                    	MS_input();
           				cin >> input_number;
           				while(input_number>0 || input_number<5)
           				{
           					switch(input_number)
           					{
           					case 1:cout << "thanks for choosing master of Physics" << endl; break;
           					case 2:cout << "thanks for choosing master of Biological Sciences" << endl; break;
           					case 3:cout << "thanks for choosing master of Agriculture" << endl; break;
           					case 4:cout << "thanks for choosing master of Veterinary Sciences" << endl; break;
           					case 5:cout << "quit" << endl; break;
           					default : break;
           					}
           				}
                    	break;

                    default: cout << "hey6" << endl; break;
                }
            }
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

void faculty_input()
{
	cout << "Please Select A Faculty:" << endl;
	cout << "1. Faculty of Arts" << endl;
	cout << "2. Faculty of Engineering, Computer & Mathematical Sciences" << endl;
	cout << "3. Faculty of Health and Medical Sciences" << endl;
	cout << "4. Faculty of the Professions" << endl;
	cout << "5. Faculty of Sciences" << endl;
}

void BA_input()
{
	cout << "Please Select A Bachelor of Arts Degree" << endl;
	cout << "1. Music" << endl;
	cout << "2. History" << endl;
	cout << "3. Media" << endl;
	cout << "4. Philosophy" << endl;
	cout << "5. Quit" << endl;
}

void Beng_input()
{
	cout << "Please Select A Bachelor of Engineering Degree" << endl;
	cout << "1. Petroleum" << endl;
	cout << "2. Chemical" << endl;
	cout << "3. Civil" << endl;
	cout << "4. Computer Science" << endl;
	cout << "5. Quit" << endl;
}
void BHMS_input()
{
	cout << "Please Select A Bachelor of Health and Medical Sciences Degree" << endl;
	cout << "1. Nursing" << endl;
	cout << "2. Medicine" << endl;
	cout << "3. Dental" << endl;
	cout << "4. Psychology" << endl;
	cout << "5. Quit" << endl;
}
void BB_input()
{
	cout << "Please Select A Bachelor of Business Degree" << endl;
	cout << "1. Entrepreneurship" << endl;
	cout << "2. International Trade" << endl;
	cout << "3. Economics" << endl;
	cout << "4. Law" << endl;
	cout << "5. Quit" << endl;
}

void BS_input()
{
	cout << "Please Select A Bachelor of Science Degree" << endl;
	cout << "1. Physics" << endl;
	cout << "2. Biological Sciences" << endl;
	cout << "3. Agriculture" << endl;
	cout << "4. Veterinary Sciences" << endl;
	cout << "5. Quit" << endl;
}



void MA_input()
{
	cout << "Please Select A Master of Arts Degree" << endl;
	cout << "1. Music" << endl;
	cout << "2. History" << endl;
	cout << "3. Media" << endl;
	cout << "4. Philosophy" << endl;
	cout << "5. Quit" << endl;
}

void Meng_input()
{
	cout << "Please Select A Master of Engineering Degree" << endl;
	cout << "1. Petroleum" << endl;
	cout << "2. Chemical" << endl;
	cout << "3. Civil" << endl;
	cout << "4. Computer Science" << endl;
	cout << "5. Quit" << endl;
}
void MHMS_input()
{
	cout << "Please Select A Master of Health and Medical Sciences Degree" << endl;
	cout << "1. Nursing" << endl;
	cout << "2. Medicine" << endl;
	cout << "3. Dental" << endl;
	cout << "4. Psychology" << endl;
	cout << "5. Quit" << endl;
}
void MB_input()
{
	cout << "Please Select A Master of Business Degree" << endl;
	cout << "1. Entrepreneurship" << endl;
	cout << "2. International Trade" << endl;
	cout << "3. Economics" << endl;
	cout << "4. Law" << endl;
	cout << "5. Quit" << endl;
}

void MS_input()
{
	cout << "Please Select A Master of Science Degree" << endl;
	cout << "1. Physics" << endl;
	cout << "2. Biological Sciences" << endl;
	cout << "3. Agriculture" << endl;
	cout << "4. Veterinary Sciences" << endl;
	cout << "5. Quit" << endl;
}



void staff_input()
{
	cout << "Please Select One of The Following" << endl;
	cout << "1. Undergraduate Registration" << endl;
	cout << "2. Postgraduate registration" << endl;
	cout << "3. Staff registration" << endl;
	cout << "4. Admin login" << endl;
	cout << "5. Quit" << endl;
}
