#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int;

    *ptr = 100;

    cout << "Value = " << *ptr << endl;

    delete ptr;

    ptr = nullptr;

    if(ptr == nullptr)
    {
        cout << "Memory released and pointer reset." << endl;
    }

    return 0;
}