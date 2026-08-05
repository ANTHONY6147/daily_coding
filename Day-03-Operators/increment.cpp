#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Initial Value : " << a << endl;

    cout << "Pre Increment (++a): " << ++a << endl;
    cout << "Current Value       : " << a << endl;

    cout << "Post Increment (a++): " << a++ << endl;
    cout << "Current Value       : " << a << endl;

    cout << "Pre Decrement (--a): " << --a << endl;
    cout << "Current Value      : " << a << endl;

    cout << "Post Decrement (a--): " << a-- << endl;
    cout << "Current Value       : " << a << endl;

    return 0;
}