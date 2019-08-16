// ConsoleApplication6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

//	cin 위험함 then 
//	other way
//	in C style use fgets(array, size, stdin) 
//	in Cpp style use setw(size) 

#include <iostream>
#include "PrintMenu.h"
#include "SelectMenu.h"

using namespace std;


int main()
{
	
	example::PrintMenuExample();
	input::SelectMenu();

}