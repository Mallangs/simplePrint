
#include <iostream>
#include <iomanip>
#include "PrintMenu.h"

using namespace std;

namespace example
{
	void PrintMenuExample()
	{
		cout << "+----------------------------+" << endl;
		cout << "|     Print Menu Example     |" << endl;
		cout << "+----------------------------+" << endl;
		// Menu Prices
		const float americanoPrice = 1.5f;
		const float lattePrice = 4.25f;
		const float breakfastComboPrice = 12.05f;
		// print Length 
		const size_t nameColumnLength = 20;
		const size_t priceColumnLength = 10;
		// set left, show .2f
		cout << left << fixed << showpoint <<
			setprecision(2);

		cout << setfill('-') << setw(nameColumnLength
			+ priceColumnLength)
			<< "" << endl << setfill('-');
		cout << setw(nameColumnLength) << "Name"
			<< setw(priceColumnLength) << "Price" << endl;
		cout << setfill('-') << setw(nameColumnLength + priceColumnLength)
			<< "" << endl << setfill('-');

		cout << setw(nameColumnLength) << "Americano" <<
			setw(priceColumnLength) << americanoPrice << endl;
		cout << setw(nameColumnLength) << "Latte" <<
			setw(priceColumnLength) << lattePrice << endl;
		cout << setw(nameColumnLength) << "BreakfastCombo" <<
			setw(priceColumnLength) << breakfastComboPrice << endl;
	}
	//stored and check
	void StoredData(char* string)
	{
		char storedData[3][15] = 
		{
			"Americano",
			"Latte",
			"BreakfastCombo"
		};
		float storedPrice[3] =
		{
			1.5f,
			4.25f,
			12.05f
		};
		int i,j;
		
		// check
		for (i = 0; i < 3; i++)
		{
			for ( j = 0; j < strlen(string); j++)
			{
				if (storedData[i][j] != string[j])
				{
					break;
				}
			}
			if (j == strlen(string))
			{
				cout<< setw(15) << storedData[i] << " "
					<< setw(10) << "Price "
					<< storedPrice[i];
				break;
			}
		}
		if (i == 3)
		{
			cout <<setw(30) <<"Other One Please";
		}
	}
}