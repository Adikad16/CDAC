/*Calculate area of rectangle lenghth and width as input and calculate its area
formula A=lw*/

#include<iostream>
using namespace std;
int main()
{
    float length,width,area;
    cout << "Enter the length of a rectangle : ";
    cin >> length;

    cout << "Enter the width of a rectangle : ";
    cin >> width;

    area = length * width;
    cout << " Area of Rectangle : " << area << " square units ";
    return 0;
}