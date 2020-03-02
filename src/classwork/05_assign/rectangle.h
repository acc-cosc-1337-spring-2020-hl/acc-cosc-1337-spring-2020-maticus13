/*
Create the interface for a Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

#include <string>
#include <iostream>
using cout;


class Rectangle
{
public:
	Rectangle(int wid, int len) {
		cout << "Constructor Called" << "\n";
		length = len;
		width = wid;
} 
	void set_length();
	void set_width();
	void get_area();
private:
	int width;
	int length;
	int area = width * length;
};