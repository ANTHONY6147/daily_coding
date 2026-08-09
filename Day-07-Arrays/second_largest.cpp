#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int numbers[5] = {10, 50, 30, 80, 60};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if(numbers[i] > secondLargest && numbers[i] != largest)
        {
            secondLargest = numbers[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}