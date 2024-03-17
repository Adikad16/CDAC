/*FInd area of triangle
bas and height as input
calculate its area
A = (1/2)bh*/
#include<iostream>
using namespace std;
int main()
{
	float area, base, height;
	cout << "Enter base of rectangle: " << endl;
	cin >> base;
	cout << "Enter height of rectangle: " << endl;
	cin >> height;
	area = 0.5 * base*height;
	cout << "area of triangle is:  " << area <<" square units";
	return 0;
}