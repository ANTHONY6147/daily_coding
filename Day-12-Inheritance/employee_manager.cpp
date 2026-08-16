#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;

public:

    Employee(string n, double s)
    {
        name = n;
        salary = s;
    }

    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: ₹" << salary << endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:

    Manager(string n, double s, string d)
        : Employee(n, s)
    {
        department = d;
    }

    void displayManager()
    {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager manager(
        "Anthony",
        80000,
        "Software Development"
    );

    manager.displayManager();

    return 0;
}