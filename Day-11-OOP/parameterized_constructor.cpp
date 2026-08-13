#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student student("Anthony", 20);

    student.display();

    return 0;
}