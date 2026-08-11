#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    int* ptr = &age;

    cout << "Age = " << age << endl;
    cout << "Address of age = " << &age << endl;
    cout << "Pointer contains = " << ptr << endl;

    return 0;
}