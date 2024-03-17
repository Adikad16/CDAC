/*Volume of a sphere
take input as radius and calculate its volume
formula v=(4/3)pi r3*/

#include<iostream>
using namespace std;
int main()
{
    float radius,volume;
    cout << "Enter the Radius of a sphere : ";
    cin >> radius;
    volume = (4/3) * 3.14159265359 * (radius*radius*radius);
    cout << "Volume of Circle : " << volume << " cubic units ";
    return 0;
}
