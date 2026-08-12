#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter " << size << " numbers:" << endl;

    for(int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Array: ";

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    delete[] numbers;

    return 0;
}
