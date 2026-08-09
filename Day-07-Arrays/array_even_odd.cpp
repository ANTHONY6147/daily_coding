#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 15, 22, 33, 40};

    cout << "Even numbers: ";

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            cout << numbers[i] << " ";
        }
    }

    cout << "\nOdd numbers: ";

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] % 2 != 0)
        {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}