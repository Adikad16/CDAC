/*Find perimeter of rectangle
input length and width
calculate its perimeter
P = 2l + 2w*/

#include<iostream>
using namespace std;
int main()
{
	float perimeter, length, width;
	cout << "Enter length of rectangle: " << endl;
	cin >> length;
	cout << "Enter width of rectangle: " << endl;
	cin >> width;
	perimeter = 2 * length + 2 * width;
	cout << "Perimeter of rectangle is: " << perimeter << "units" << endl;
	return 0;
}