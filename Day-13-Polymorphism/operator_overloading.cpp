#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    Number operator+(Number other)
    {
        return Number(value + other.value);
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number result = n1 + n2;

    cout << "Result = " << result.value << endl;

    return 0;
}