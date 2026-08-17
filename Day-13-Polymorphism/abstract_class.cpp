#include <iostream>
using namespace std;

class Shape
{
public:

    virtual double area() = 0;
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

int main()
{
    Rectangle rectangle(10, 5);

    cout << "Area = " << rectangle.area() << endl;

    return 0;
}