#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore Swapping\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Swapping\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}