#include <iostream>
using namespace std;

int main()
{
    int size;
    int sum = 0;

    cout << "Enter array size: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter numbers:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;

    delete[] numbers;

    return 0;
}