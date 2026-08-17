#include <iostream>
using namespace std;

class Vehicle
{
public:

    virtual void start()
    {
        cout << "Vehicle starts." << endl;
    }
};

class Car : public Vehicle
{
public:

    void start() override
    {
        cout << "Car starts with a key." << endl;
    }
};

int main()
{
    Car car;

    car.start();

    return 0;
}