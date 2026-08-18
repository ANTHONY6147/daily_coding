#include <iostream>
using namespace std;

class Calculator
{
public:

    static int square(int number)
    {
        return number * number;
    }
};

int main()
{
    cout << Calculator::square(5) << endl;

    return 0;
}