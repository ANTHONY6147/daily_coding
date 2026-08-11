#include <iostream>
using namespace std;

int main()
{
    int numbers[4] = {10, 20, 30, 40};

    int* ptr = numbers;

    cout << *ptr << endl;

    ptr++;

    cout << *ptr << endl;

    ptr++;

    cout << *ptr << endl;

    return 0;
}