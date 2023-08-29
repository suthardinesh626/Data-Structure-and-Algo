#include <iostream>
using namespace std;

class Hero{
    public:
    //propertise of the class
   
    char level;
    private:
    int health;

    void print(){
        cout << level <<endl;
     }
    
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};

int main(){

    Hero a;
    
    

    // cout << "ramesh health is : " << ramesh.getHealth()<<endl;
    // ramesh.setHealth(70);
    // ramesh.level= 'D';

    // cout << "Size: "<< sizeof(ramesh)<< endl;
    // cout << "Size: "<< ramesh.getHealth()<< endl;
    // cout << "Size: "<< ramesh.level<< endl;

    return 0;
}