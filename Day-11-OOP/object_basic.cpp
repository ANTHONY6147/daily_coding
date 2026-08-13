#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int year;
};

int main()
{
    Car car1;
    Car car2;

    car1.brand = "Toyota";
    car1.year = 2022;

    car2.brand = "BMW";
    car2.year = 2024;

    cout << car1.brand << " " << car1.year << endl;
    cout << car2.brand << " " << car2.year << endl;

    return 0;
}