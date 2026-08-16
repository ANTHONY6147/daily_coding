#include <iostream>
using namespace std;

class Animal
{
public:

    Animal()
    {
        cout << "Animal constructor" << endl;
    }
};

class Dog : public Animal
{
public:

    Dog()
    {
        cout << "Dog constructor" << endl;
    }
};

int main()
{
    Dog dog;

    return 0;
}