#include <iostream>
using namespace std;

int main()
{
    int number = 50;

    int* ptr = &number;

    int** ptr2 = &ptr;

    cout << "Number = " << number << endl;
    cout << "Using ptr = " << *ptr << endl;
    cout << "Using ptr2 = " << **ptr2 << endl;

    return 0;
}