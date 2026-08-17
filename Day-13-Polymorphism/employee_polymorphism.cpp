#include <iostream>
using namespace std;

class Employee
{
public:

    virtual void work()
    {
        cout << "Employee is working." << endl;
    }

    virtual ~Employee() = default;
};

class Developer : public Employee
{
public:

    void work() override
    {
        cout << "Developer is writing code." << endl;
    }
};

class Designer : public Employee
{
public:

    void work() override
    {
        cout << "Designer is creating UI." << endl;
    }
};

class Tester : public Employee
{
public:

    void work() override
    {
        cout << "Tester is testing software." << endl;
    }
};

int main()
{
    Employee* employees[3];

    employees[0] = new Developer();
    employees[1] = new Designer();
    employees[2] = new Tester();

    for(int i = 0; i < 3; i++)
    {
        employees[i]->work();
    }

    for(int i = 0; i < 3; i++)
    {
        delete employees[i];
    }

    return 0;
}