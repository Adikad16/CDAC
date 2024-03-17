/*Find the area of right angle triangle
base and height as input and calculate its area
A = (1/2)bh*/

#include<iostream>
using namespace std;
int main()
{
    float height,base,area;
    cout << "Enter the height of a rectangle : ";
    cin >> height;

    cout << "Enter the base of a rectangle : ";
    cin >> base;

    area = 0.5 * (height * base);
    cout << " Area of Right angle triangle : " << area << " square units ";
    return 0;
}