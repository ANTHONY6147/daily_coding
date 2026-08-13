#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;

public:

    Student(string n, int r, float m)
    {
        name = n;
        rollNumber = r;
        marks = m;
    }

    void display()
    {
        cout << "\n===== STUDENT DETAILS =====" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks      : " << marks << endl;
    }

    bool isPassed()
    {
        return marks >= 40;
    }
};

int main()
{
    Student student("Anthony", 101, 85);

    student.display();

    if(student.isPassed())
    {
        cout << "Status     : Passed" << endl;
    }
    else
    {
        cout << "Status     : Failed" << endl;
    }

    return 0;
}