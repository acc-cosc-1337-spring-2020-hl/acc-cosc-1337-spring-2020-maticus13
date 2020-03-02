//write include statemetns
#include "rectangle.h"
#include <vector>
#include <iostream>
using std::vector;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<Rectangle> rec_list();
	Rectangle rec1;
	rec1.set_length(5);
	rec1.set_width(4);
	rec_list.pushback(rec1);
	Rectangle rec2;
	rec2.set_length(10);
	rec2.set_width(10);
	rec_list.pushback(rec2);
	Rectangle rec3;
	rec3.set_length(100);
	rec3.set_width(10);
	rec_list.pushback(rec3);

	for (int i = 0, i <= 3, i++) {
		cout<< rec_list[i]
	}

	return 0;
}