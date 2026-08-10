#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    cin >> text;

    for(int i = 0; i < text.length(); i++)
    {
        cout << text[i] << endl;
    }

    return 0;
}