#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    int* pointer = &number;
    int& reference = number;

    cout << "Original value: " << number << endl;
    cout << "Using pointer: " << *pointer << endl;
    cout << "Using reference: " << reference << endl;

    return 0;
}