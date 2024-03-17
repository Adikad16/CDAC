/*Find area of square
input side length of a square and calculate its area
A = s2*/


#include<iostream>
using namespace std;
int main()
{
    float side,area;
    cout << "Enter the side of the square : " <<endl;
    cin >> side;
    area = side * side;
    cout << " Area of Square : " << area << " Square Units ";
    return 0;
}