#include<iostream>
using namespace std;
class Animal
{
    public:
     void eat()
     {
        cout<<"Animal eats"<<endl;
     }
};

class Dog : public Animal
{
    public:
    void bark(){
        cout << "Dog barks" <<endl;
    }
};
class cat :public Animal{
 public:
  void meow(){
    cout << "cat meows "<<endl;
  }
};
int main(){
    Dog dog;
    cat cat;
    dog.eat();
    dog.bark();

    cat.meow();
    cat.eat();

    return 0;
    
}