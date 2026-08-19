#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    // ---- Setters (with validation) ----
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0 && a < 120)
            age = a;
        else
            cout << "Invalid age! Must be between 1 and 119." << endl;
    }

    void setGpa(double g) {
        if (g >= 0.0 && g <= 4.0)
            gpa = g;
        else
            cout << "Invalid GPA! Must be between 0.0 and 4.0." << endl;
    }

    // ---- Getters ----
    string getName() const { return name; }
    int getAge() const { return age; }
    double getGpa() const { return gpa; }

    void display() const {
        cout << name << " | Age: " << age << " | GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;

    s1.setName("Aisha");
    s1.setAge(20);
    s1.setGpa(3.8);
    s1.display();

    cout << "\nTrying invalid values:" << endl;
    s1.setAge(-5);      // rejected
    s1.setGpa(5.0);      // rejected

    cout << "\nData remains safe:" << endl;
    s1.display();

    return 0;
}