/*Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'*/
#include<iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name,address,phone;
    int roll_no;
};

int main()
{
    Student s1;
    s1.name = "Abhi";
    s1.roll_no = 22;
    s1.phone = "9875641230";
    s1.address = "Mumbai";

    Student s2;
    s2.name = "Aditi";
    s2.roll_no = 20;
    s2.phone = "9786514320";
    s2.address = "Thane";

    s1.name = "Abhi";
    s1.roll_no = 23;
    s1.phone = "9852360147";
    s1.address = "Nashik";

    s2.name = "Aditi";
    s2.roll_no = 21;
    s2.phone = "9654390147";
    s2.address = "Mumbai";

    cout<<" Student Details "<< endl;
    cout<<" Student Name : "<< s1.name << endl;
    cout<<" Student Roll No : "<< s1.roll_no << endl;
    cout<<" Student Cell : "<< s1.phone << endl;
    cout<<" Student Address : "<< s1.address << endl;
    cout<<"\n---------------------------------------" << endl;

    cout<<" Student Name : "<< s2.name << endl;
    cout<<" Student Roll No : "<< s2.roll_no << endl;
    cout<<" Student Cell : "<< s2.phone << endl;
    cout<<" Student Address : "<< s2.address << endl;
    cout<<"\n---------------------------------------" << endl;
}
