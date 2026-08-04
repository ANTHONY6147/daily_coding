#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    int rollNumber;
    float cgpa;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your roll number: ";
    cin >> rollNumber;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "\n===== Student Profile =====" << endl;
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "Roll Number : " << rollNumber << endl;
    cout << "CGPA        : " << cgpa << endl;
    cout << "===========================" << endl;

    return 0;
}