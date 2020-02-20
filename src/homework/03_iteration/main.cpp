//write include statements
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/



string choice;


int main() 
{
	do
	{
		string main_choice;
		int function_choice;

		cout << "Enter 1 for GC Content or 2 for DNA complement";
		cin >> function_choice;
		
		if (function_choice = 1)
		{
			string dna_input;
			cout << "Enter DNA Sequence";
			cin >> dna_input;
			cout << get_gc_content(dna_input);
			
		}
		else
		{

		}

		cout << "Continue?... Enter y for yes";
		cin >> choice;

	} while (choice == y);

	return 0;
}