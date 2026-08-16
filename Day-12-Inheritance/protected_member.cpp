#include<iostream>
using namespace std;
class Animal
{
    protected:
    string name;
    public:
    void setName(string n)
    {
        name=n;
    }
};
class Dog :public Animal
{
    public:
     void display()
     {
        cout<<"Dog name :"<< name <<endl;
     }
};
int main()
{
    Dog dog ;
    dog.setName("Bruno");
    dog.display();

    return 0;
}