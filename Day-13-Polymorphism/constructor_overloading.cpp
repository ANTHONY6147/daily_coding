#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student()
    {
        name = "Unknown";
        age = 0;
    }

    Student(string n)
    {
        name = n;
        age = 0;
    }

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << name << " - " << age << endl;
    }
};

int main()
{
    Student student1;
    Student student2("Anthony");
    Student student3("Anthony", 20);

    student1.display();
    student2.display();
    student3.display();

    return 0;
}