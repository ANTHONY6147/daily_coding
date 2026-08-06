#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 10000.0;
    float amount;

    cout << "========== ATM MENU ==========" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "\nCurrent Balance = Rs. " << balance << endl;
            break;

        case 2:
            cout << "\nEnter amount to deposit: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Deposit Successful!" << endl;
            cout << "Updated Balance = Rs. " << balance << endl;
            break;

        case 3:
            cout << "\nEnter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance = balance - amount;

                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance = Rs. " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }

            break;

        case 4:
            cout << "\nThank you for using our ATM." << endl;
            break;

        default:
            cout << "\nInvalid Choice!" << endl;
    }

    return 0;
}