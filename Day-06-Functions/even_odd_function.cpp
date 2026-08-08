#include <iostream>
using namespace std;

bool isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if(isEven(number))
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    return 0;
}