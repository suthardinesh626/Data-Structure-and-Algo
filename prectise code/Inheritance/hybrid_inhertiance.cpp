#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout << "Barking" << endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speaking(){
        cout << " Spaeking "<< endl; 
    }
};

class Hybrid: public Animal, public Human{
     
};

int main(){

    Hybrid obj1;
    obj1.speaking();
    obj1.bark();
        
    return 0;
}