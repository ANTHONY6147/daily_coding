#include <iostream>
using namespace std;

void changeValue(int* ptr)
{
    *ptr = 100;
}

int main()
{
    int number = 10;

    cout << "Before: " << number << endl;

    changeValue(&number);

    cout << "After: " << number << endl;

    return 0;
}