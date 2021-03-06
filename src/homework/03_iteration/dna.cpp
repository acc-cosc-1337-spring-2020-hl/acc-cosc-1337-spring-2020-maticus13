#include "dna.h"
using std::cin; using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/



double get_gc_content(const string str1)
{
	int total=0;
	int G_and_C=0;

	for (int i = 0; i < str1.size(); ++i)
	{
		if (str1[i] == 'G' || str1[i] == 'C')
		{
			total = total + 1;
			G_and_C = G_and_C + 1;
		}
		else
		{
			total = total + 1;
		}

	}

	return G_and_C / total;

}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string str2)
{
	string reverse_dna;
	for (int i = str2.length() - 1; i >= 0; i--)
	{
		reverse_dna = reverse_dna + str2[i];
	}
	return reverse_dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/


string get_dna_complement(string str3)
{
	str3 = get_reverse_string(str3);

	for (int i = str3.length() - 1; i >= 0; i--)
	{
		if (str3[i] == 'A') 
		{
			str3[i] = 'T';
		}
		else if (str3[i] == 'T') 
		{
			str3[i] = 'A';
		}
		else if (str3[i] == 'G') 
		{
			str3[i] = 'C';
		}
		else if (str3[i] == 'C') 
		{
			str3[i] = 'G';
		}
	}
	
	return str3;
}
