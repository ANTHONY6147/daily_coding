#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(20, 30);

    cout << "Sum = " << result << endl;

    return 0;
}