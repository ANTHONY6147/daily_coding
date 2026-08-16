#include<iostream>
using namespace std;

class Animal
{
public:

    void eat()
    {
        cout << "Animal eats." << endl;
    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout<<"Dog is barking "<<endl;
    }
};
class puppy:public Dog
{
    public:
     void play()
     {
        cout<<"puupy is playing "<<endl;
     }
};
int main(){
    puppy puppy;
 puppy.eat();
 puppy.bark();
 puppy.play();

 return 0;

}