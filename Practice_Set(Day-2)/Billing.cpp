/*Take the total bill amount from user and then depending on sell give discount
if total_bill>10000 10% off, if bill is between 9999 to 5000 5% off on bill ,if bill in 4999 to 2000 2% off
below 2000 just 100INR off.
*/

#include<iostream>
using namespace std;
int main()
{
	float bill;
	float discount,amount;
	cout << "Enter the Amount: " << endl;
	cin >> bill;
	if(bill >= 10000)
	{
		discount = bill * (10.0/100);
		cout << "Congrats you got 10% discount" << endl;
		cout << "Discount given = "<< discount << endl;
	}
	else if(bill <= 99999 && bill >= 5000)
	{
		discount = bill * (5.0/100);
		cout << "Congrats you got 5% discount" << endl;
		cout << "Discount given = " << discount << endl;
	}
	else if(bill <= 5000 && bill >= 2000)
	{
		discount = bill * (2.0/100);
		cout << "Congrats you got 2% discount" << endl;
		cout << "Discount given = "<<discount << endl;
	}
	else
	{
		discount = (bill-100);
		cout << "Congrats you got 100 INR discount" << endl;
		cout << "Discount given = " << discount << endl;
	}
	amount = bill-discount;
	cout << "\nAmount paid = " << amount << endl;
	return 0;
}