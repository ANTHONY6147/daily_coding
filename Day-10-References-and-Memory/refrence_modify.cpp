#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int& reference = number;

    reference = 50;

    cout << "Number = " << number << endl;

    return 0;
}