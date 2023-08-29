#include <iostream>
using namespace std;

int main(){
    int p;
    cout<<"Enter a number:"<<endl;
    cin>>p;

    int i=2;

    while(i<p){
        if(p%i==0){
            cout<<"It is not a prime number: "<<i<<endl;
        }
        else{
            cout<<"Enter number is prime for: "<<i<<endl ;
        }
        i=i+1;
    }
}