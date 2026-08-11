#include <iostream>
using namespace std;

void changeValue(int& number)
{
    number = 100;
}

int main()
{
    int value = 10;

    cout << "Before: " << value << endl;

    changeValue(value);

    cout << "After: " << value << endl;

    return 0;
}