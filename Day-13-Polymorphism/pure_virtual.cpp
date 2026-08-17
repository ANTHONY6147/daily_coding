#include <iostream>
using namespace std;

class Animal
{
public:

    virtual void sound() = 0;
};

class Dog : public Animal
{
public:

    void sound() override
    {
        cout << "Dog barks." << endl;
    }
};

int main()
{
    Dog dog;

    dog.sound();

    return 0;
}