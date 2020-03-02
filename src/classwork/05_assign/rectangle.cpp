//Write include statement
#include"rectangle.h"

/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

Rectangle::Rectangle() {
	length = ' ';
	width = ' ';
}

int Rectangle::get_area()
{
	return area;
}

void Rectangle::set_length(int len)
{
	length = len;
}

void Rectangle::set_width(int wid)
{
	width = wid;
}
