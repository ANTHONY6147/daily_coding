#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student student;

    student.name = "Anthony";
    student.age = 20;

    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;

    return 0;
}