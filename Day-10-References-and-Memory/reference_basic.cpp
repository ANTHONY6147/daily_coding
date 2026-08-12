#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int& reference = number;

    cout << "Number = " << number << endl;
    cout << "Reference = " << reference << endl;

    return 0;
}