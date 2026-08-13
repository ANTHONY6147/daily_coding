#include <iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    Calculator calculator;

    cout << "Addition = "
         << calculator.add(10, 20) << endl;

    cout << "Multiplication = "
         << calculator.multiply(10, 20) << endl;

    return 0;
}