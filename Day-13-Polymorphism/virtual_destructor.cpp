#include <iostream>
using namespace std;

class Animal
{
public:

    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:

    void sound() override
    {
        cout << "Dog bark" << endl;
    }
};

int main()
{
    Dog dog;

    Animal* ptr = &dog;

    ptr->sound();

    return 0;
}