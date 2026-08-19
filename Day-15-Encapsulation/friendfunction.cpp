#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double l) : length(l) {}

    // Declare the friend function inside the class
    friend void printLength(const Box& b);

    // Friend function comparing two Box objects (needs access to both)
    friend bool isLarger(const Box& a, const Box& b);
};

// Definition -- note: no "Box::" prefix, it's not a member function
void printLength(const Box& b) {
    cout << "Box length (accessed via friend function): " << b.length << endl;
}

bool isLarger(const Box& a, const Box& b) {
    return a.length > b.length;
}

int main() {
    Box box1(10.5);
    Box box2(7.2);

    printLength(box1);

    if (isLarger(box1, box2))
        cout << "box1 is larger than box2" << endl;
    else
        cout << "box2 is larger than or equal to box1" << endl;

    return 0;
}