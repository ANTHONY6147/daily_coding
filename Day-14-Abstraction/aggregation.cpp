#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;

    Teacher(string n)
    {
        name = n;
    }
};

class Department
{
private:
    Teacher* teacher;

public:

    Department(Teacher* t)
    {
        teacher = t;
    }

    void display()
    {
        cout << "Teacher: "
             << teacher->name
             << endl;
    }
};

int main()
{
    Teacher teacher("Anthony");

    Department department(&teacher);

    department.display();

    return 0;
}