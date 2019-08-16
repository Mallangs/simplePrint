#include "SelectMenu.h"
#include "PrintMenu.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*
	simple safety input stream in cpp 
	char firstName[4];
	cin >> setw(4) >> firstName;	
*/

namespace input
{
	void SelectMenu()
	{
		char string[20];
		//in menu max length is not over 20 size
		cout << "Select Menu" << endl;
		cin >> setw(20) >> string;
		//select something in menu
		example::StoredData(string);
	}
}
