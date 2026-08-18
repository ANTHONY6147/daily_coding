#include <iostream>
using namespace std;

class Computer
{
public:

    class CPU
    {
    public:

        void process()
        {
            cout << "CPU processing..." << endl;
        }
    };
};

int main()
{
    Computer::CPU cpu;

    cpu.process();

    return 0;
}