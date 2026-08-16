#include <iostream>
using namespace std;

class Vehicle
{
public:

    void start()
    {
        cout << "Vehicle started." << endl;
    }

    void stop()
    {
        cout << "Vehicle stopped." << endl;
    }
};

class Car : public Vehicle
{
public:

    void drive()
    {
        cout << "Car is driving." << endl;
    }
};

class Bike : public Vehicle
{
public:

    void ride()
    {
        cout << "Bike is riding." << endl;
    }
};

int main()
{
    Car car;
    Bike bike;

    car.start();
    car.drive();
    car.stop();

    cout << endl;

    bike.start();
    bike.ride();
    bike.stop();

    return 0;
}