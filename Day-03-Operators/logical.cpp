#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    bool hasID = true;

    cout << "Logical AND (&&): " << (age >= 18 && hasID) << endl;
    cout << "Logical OR (||): " << (age < 18 || hasID) << endl;
    cout << "Logical NOT (!): " << (!hasID) << endl;

    return 0;
}