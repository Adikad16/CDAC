/*Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int yearOfJoining;
    float salary;
    string address;

public:
    Employee(string n, int y, float s, string a) : name(n), yearOfJoining(y), salary(s), address(a) {}

    void get() {
        cout << name << "\t" << yearOfJoining << "\t" << salary << "\t" << address << endl;
    }
};

int main() {
    Employee emp1("Robert", 1994, 50000.0, "64C- WallsStreat");
    Employee emp2("Sam", 2000, 60000.0, "68D- WallsStreat");
    Employee emp3("John", 1999, 55000.0, "26B- WallsStreat");

    cout << "Name\tYear of joining\tSalary\tAddress" << endl;
    emp1.get();
    emp2.get();
    emp3.get();
}

