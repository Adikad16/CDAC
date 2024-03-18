/*
Accept a number from user only if number is perfectly div by 5 and 3 else 
till it is not given keep taking number
*/
#include<iostream>
using namespace std;
int main()
{
	int no;
	do
	{
	cout << " Enter a number : " << endl;
	cin >> no;
	if(no % 5 == 0 && no % 3 == 0)
	cout<<" Number divisible by 5 and 3 is " << no <<endl;
	else
	cout<<" Number is not divisible by 5 and 3 " << endl;
	}
	while(no % 5 !=0 && no % 3 !=0);
	return 0;
}