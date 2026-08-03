
//Area = Length × Breadth
#include <iostream>
using namespace std;

int main()
{
    float length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    float area = length * breadth;

    cout << "Area = " << area << endl;

    return 0;
}