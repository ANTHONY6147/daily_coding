#include <iostream>
using namespace std;
int main()
{
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin")
    {
        if (password == "1234")
        {
            cout << "Login Successful";
        }
        else
        {
            cout << "Wrong Password";
        }
    }
    else
    {
        cout << "Invalid Username";
    }

    return 0;
}