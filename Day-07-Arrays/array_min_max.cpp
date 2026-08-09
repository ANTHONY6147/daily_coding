#include<iostream>
using namespace std;
int main(){
int numbers[5]={10,20,30,40,50};

int maximum = numbers[0];
int minimum = numbers[0];
for(int i=0;i<5;i++)
    {
     if(numbers[i]>maximum)
     {
        maximum=numbers[i];
     }
     if (numbers[i]<minimum)
     {
        minimum=numbers[i];
     }
    }


    return 0;
}