#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower = 450;

    // Declare Car as a friend class
    friend class Car;
};

class Car {
public:
    void showEngineSpecs(const Engine& e) {
        // Because Car is a friend of Engine, it can access private members
        cout << "Engine horsepower (accessed via friend class): "
             << e.horsepower << " HP" << endl;
    }
};

int main() {
    Engine e;
    Car c;

    c.showEngineSpecs(e);

    // Outside code (not a friend) still cannot access it directly:
    // cout << e.horsepower; // ERROR

    return 0;
}