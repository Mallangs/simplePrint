// Select Menu 
#include "SelectMenu.h"
#include "PrintMenu.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*

	char firstName[4];
	cin >> setw(4) >> firstName;
	saft input stream;
*/

namespace input
{
	void SelectMenu()
	{
		char string[512];
		int maxLength = 512;


		cout << "Select Menu" << endl;
		cin >> setw(512) >> string;
		example::StoredData(string);


	}
}