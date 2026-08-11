#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {10, 20, 30};

    int* ptr = numbers;

    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;

    return 0;
}