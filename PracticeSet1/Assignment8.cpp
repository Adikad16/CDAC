/*Area of a equilateral triangle
input as a side and calculate area*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float side, area;
	cout << "Enter the length side: " << endl;
	cin >> side;
	area = (sqrt(3)/(4)) * side * side;
	cout << "Area of a equilateral triangle is: " << area << "square units" ;
	return 0;
}