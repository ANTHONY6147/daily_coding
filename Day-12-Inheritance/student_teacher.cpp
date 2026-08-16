#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : public Person
{
private:
    int marks;

public:

    Student(string n, int a, int m)
        : Person(n, a)
    {
        marks = m;
    }

    void display()
    {
        cout << "Student: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student student("Anthony", 20, 90);

    student.display();

    return 0;
}