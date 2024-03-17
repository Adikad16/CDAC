/* Write a program that takes the radius of a circle as input and calculate its circumference */
#include<iostream>
using namespace std;
int main()
{
    float radius,circumference;
    cout << "Enter the Radius of a circle : ";
    cin >> radius;
    circumference = 2 * 3.14159265359 * radius;
    cout << "Circumference of Circle : " << circumference << " units ";
    return 0;
}

