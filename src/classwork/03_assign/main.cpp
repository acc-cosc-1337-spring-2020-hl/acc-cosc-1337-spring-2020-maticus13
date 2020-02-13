//#write includes statements
#include"loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;

	do 
	{
		int num;

		cout << "enter a number";
		cin >> num;
		cout << funky_factoral(num) << "\n";

		cout << "Continue?... Enter 1 for yes";
		cin >> choice;

	} while (choice == 1);

	return 0;
}