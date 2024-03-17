/* Write a program that takes the radius of a circle as input and calculate its area */
#include<iostream>
using namespace std;
int main()
{
    float radius,area;
    cout << "Enter the Radius of a circle : ";
    cin >> radius;
    area = 3.14159265359 * (radius*radius);
    cout << "Area of Circle : " << area << "square units ";
    return 0;
}

