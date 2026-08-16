#include <iostream>
using namespace std;

class Father
{
public:

    void fatherFeature()
    {
        cout << "Father feature." << endl;
    }
};

class Mother
{
public:

    void motherFeature()
    {
        cout << "Mother feature." << endl;
    }
};

class Child : public Father, public Mother
{
public:

    void childFeature()
    {
        cout << "Child feature." << endl;
    }
};

int main()
{
    Child child;

    child.fatherFeature();
    child.motherFeature();
    child.childFeature();

    return 0;
}