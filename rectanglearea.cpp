// This program will output the circumference and area

// of the circle with a given radius.

// Micheal E. English III

#include <iostream>

using namespace std;

const int length = 8;

const int width = 3;

int main()

{

int area;// definition of area of the rectangle 

int perimeter; // definition of perimeter of the rectangle
				   
perimeter = (length * 2) + (width * 2); // computes perimeter

area = length * width ; // computes area

cout << "The perimeter of the rectangle is "<< perimeter << endl;

cout << "The area of the rectangle is "<< area << endl;

return 0;

}
