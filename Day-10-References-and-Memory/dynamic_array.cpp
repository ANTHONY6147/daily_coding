#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* numbers = new int[size];

    for(int i = 0; i < size; i++)
    {
        numbers[i] = i + 1;
    }

    cout << "Array: ";

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    delete[] numbers;

    return 0;
}