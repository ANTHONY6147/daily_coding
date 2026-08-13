#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor called!" << endl;
    }
};

int main()
{
    Student student;

    return 0;
}