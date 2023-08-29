#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter your number for verfication of prime: ";
    cin>>n;
    bool prime=1;
    for (int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
        if(prime==0){
            cout<<"It is a not a prime number!";
        }
        else{    
            cout<<"It is prime number";
        }
}