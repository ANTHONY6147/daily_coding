#include <iostream>
using namespace std;

class BankAccount {
private:
    // Data is hidden from outside code
    string ownerName;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        ownerName = name;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Controlled access via public methods
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive." << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << " | New Balance: " << balance << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getOwnerName() const {
        return ownerName;
    }
};

int main() {
    BankAccount acc("Ravi", 1000.0);

    acc.deposit(500);
    acc.withdraw(200);
    acc.withdraw(5000);   // Blocked by internal validation

    // acc.balance = 999999;  // ERROR: balance is private, can't access directly

    cout << "\nFinal balance for " << acc.getOwnerName()
         << ": " << acc.getBalance() << endl;

    return 0;
}