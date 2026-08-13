#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    double balance;

public:

    BankAccount(string name, double initialBalance)
    {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid withdrawal." << endl;
        }
    }

    void displayBalance()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main()
{
    BankAccount account("Anthony", 5000);

    account.deposit(2000);
    account.withdraw(1000);

    account.displayBalance();

    return 0;
}