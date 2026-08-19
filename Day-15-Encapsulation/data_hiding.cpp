#include <iostream>
using namespace std;

class UserAccount {
private:
    string username;
    string password;      // never exposed directly
    int failedAttempts;
    bool locked;

public:
    UserAccount(string uname, string pwd) {
        username = uname;
        password = pwd;
        failedAttempts = 0;
        locked = false;
    }

    bool login(string enteredPassword) {
        if (locked) {
            cout << "Account is locked. Contact support." << endl;
            return false;
        }

        if (enteredPassword == password) {
            cout << "Login successful. Welcome, " << username << "!" << endl;
            failedAttempts = 0;
            return true;
        } else {
            failedAttempts++;
            cout << "Incorrect password. Attempt " << failedAttempts << "/3" << endl;
            if (failedAttempts >= 3) {
                locked = true;
                cout << "Account locked due to too many failed attempts." << endl;
            }
            return false;
        }
    }

    // Notice: there's no getPassword() -- that data stays hidden forever
    string getUsername() const {
        return username;
    }
};

int main() {
    UserAccount user("neha_2004", "SecurePass123");

    user.login("wrongpass1");
    user.login("wrongpass2");
    user.login("wrongpass3");
    user.login("SecurePass123"); // even correct password fails now, account locked

    return 0;
}