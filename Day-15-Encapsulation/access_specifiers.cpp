#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 10;

protected:
    int protectedVar = 20;

public:
    int publicVar = 30;

    void showFromBase() {
        // Base class can access all three
        cout << "Inside Base -> private: " << privateVar
             << ", protected: " << protectedVar
             << ", public: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void showFromDerived() {
        // privateVar is NOT accessible here
        // cout << privateVar; // ERROR

        // protectedVar IS accessible (inherited access)
        cout << "Inside Derived -> protected: " << protectedVar
             << ", public: " << publicVar << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.showFromBase();

    // From outside the class (main is "outside"):
    // b.privateVar;    // ERROR - private
    // b.protectedVar;  // ERROR - protected
    cout << "From main -> public: " << b.publicVar << endl; // OK

    d.showFromDerived();
    cout << "From main -> Derived's public: " << d.publicVar << endl; // OK

    return 0;
}