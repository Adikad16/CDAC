/*Find simple interest
principle, time period and interest rate as input 
calculate SI
SI = p*r*t*/
#include<iostream>
using namespace std;
int main()
{
	float p, r, t, si;
	cout << "Principle: ";
	cin >> p;
	cout << "Rate of interest: ";
	cin >> r;
	cout << "Time: ";
	cin >> t;
	
	si = p*r*t/100;
	cout << "Simple Interest is: " << si;
	return 0;
}