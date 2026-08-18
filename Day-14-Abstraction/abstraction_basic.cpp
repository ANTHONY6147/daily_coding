#include <iostream>
using namespace std;

class ATM
{
public:

    void withdraw(double amount)
    {
        if(amount > 0)
        {
            processTransaction(amount);
            cout << "Withdrawal successful." << endl;
        }
    }

private:

    void processTransaction(double amount)
    {
        cout << "Processing ₹" << amount << "..." << endl;
    }
};

int main()
{
    ATM atm;

    atm.withdraw(500);

    return 0;
}