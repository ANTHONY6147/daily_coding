#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int* ptr = &number;

    cout << "Before: " << number << endl;

    *ptr = 50;

    cout << "After: " << number << endl;

    return 0;
}