#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:

    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student student("Anthony", 90);

    student.display();

    return 0;
}