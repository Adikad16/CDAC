/*Surface Area of a sphere
take input as radius and calculate its surface area
SA = 4*pi*r*r */

#include<iostream>
using namespace std;
int main()
{
    float radius,area;
    cout << "Enter the Radius : " <<endl;
    cin >> radius;
    area = 4 * 3.14159265359 * radius *radius;
    cout << "Surface Area of Sphere : " << area << " Square Units ";
    return 0;
}