#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Google";

    cout << "First character: " << text[0] << endl;
    cout << "Second character: " << text[1] << endl;
    cout << "Last character: " << text[text.length() - 1] << endl;

    return 0;
}