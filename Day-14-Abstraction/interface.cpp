#include <iostream>
using namespace std;

class Payment
{
public:

    virtual void pay(double amount) = 0;

    virtual ~Payment() = default;
};

class UPI : public Payment
{
public:

    void pay(double amount) override
    {
        cout << "Paid ₹" << amount << " using UPI." << endl;
    }
};

class CreditCard : public Payment
{
public:

    void pay(double amount) override
    {
        cout << "Paid ₹" << amount << " using Credit Card." << endl;
    }
};

int main()
{
    UPI upi;
    CreditCard card;

    upi.pay(500);
    card.pay(1000);

    return 0;
}