/*Find compund interest
principle,compounding frequency , time period and interest rate as input 
calculate CI*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p, r, t, cf, ci;
	cout << "Principle: ";
	cin >> p;
	cout << "Rate of interest: ";
	cin >> r;
	cout << "Compound Frequecy: ";
	cin >> cf;
	cout << "Time: ";
	cin >> t;
	
	ci = p*pow(1+ (r/cf), cf*t)- p;
	cout<<"Compound Interest is: " << ci;
	return 0;
}