// This program will output the circumference and area

// of the circle with a given radius.

// Micheal E. English III

#include <iostream>

using namespace std;

const double PI = 3.14;

const double RADIUS = 5.4;

int main()

{

float area;// definition of area of circle 

int circumference; // definition of circumference
				   
				   // Answer to Exercise 3: By changing the data type
				   // of the circumference to int, the precision of 
				   // the value displayed will be a real number vice
				   // to the hundredths. 
				   // 
				   // 
				   // The circumference of the circle is: 33.
				   // The area of the circle is: 91.5624.
circumference = 2 * PI * RADIUS; // computes circumference

area = PI * (RADIUS * RADIUS); // computes area

cout << "The circumference of the circle is "<< circumference << endl;

cout << "The area of the circle is "<< area << endl;

return 0;

}
