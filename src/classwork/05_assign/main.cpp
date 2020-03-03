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
	vector<Rectangle> rec_list(Rectangle(4, 5), Rectangle(10, 10), Rectangle(100, 10));


	for (auto rec : Rectangle) {
		cout << rec.get
	}

	return 0;
}