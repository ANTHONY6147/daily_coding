#include <iostream>
using namespace std;

int calculateSum(int* numbers, int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter numbers:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Sum = " << calculateSum(numbers, size) << endl;

    delete[] numbers;

    return 0;
}