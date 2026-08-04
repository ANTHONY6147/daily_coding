#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n===== Student Information =====" << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;

    return 0;
}