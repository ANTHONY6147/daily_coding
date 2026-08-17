#include <iostream>
using namespace std;

class Shape
{
public:

    virtual void draw() = 0;

    virtual ~Shape() = default;
};

class Circle : public Shape
{
public:

    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:

    void draw() override
    {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape
{
public:

    void draw() override
    {
        cout << "Drawing Triangle" << endl;
    }
};

int main()
{
    Shape* shapes[3];

    shapes[0] = new Circle();
    shapes[1] = new Rectangle();
    shapes[2] = new Triangle();

    for(int i = 0; i < 3; i++)
    {
        shapes[i]->draw();
    }

    for(int i = 0; i < 3; i++)
    {
        delete shapes[i];
    }

    return 0;
}