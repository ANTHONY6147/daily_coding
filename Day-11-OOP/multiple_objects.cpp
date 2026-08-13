#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << name << " - " << marks << endl;
    }
};

int main()
{
    Student student1("Anthony", 90);
    Student student2("Rahul", 85);
    Student student3("Sam", 95);

    student1.display();
    student2.display();
    student3.display();

    return 0;
}