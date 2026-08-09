#include <iostream>
using namespace std;

int main()
{
    int numbers[7] = {10, 20, 10, 30, 10, 40, 10};
    int target;
    int count = 0;

    cout << "Enter number to count: ";
    cin >> target;

    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] == target)
        {
            count++;
        }
    }

    cout << "Count = " << count << endl;

    return 0;
}