#include <iostream>
using namespace std;

int main()
{
    int numbers[7] = {10, 20, 30, 20, 40, 10, 50};

    cout << "Duplicate elements: ";

    for(int i = 0; i < 7; i++)
    {
        for(int j = i + 1; j < 7; j++)
        {
            if(numbers[i] == numbers[j])
            {
                cout << numbers[i] << " ";
                break;
            }
        }
    }

    return 0;
}