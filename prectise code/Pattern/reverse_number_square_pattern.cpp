#include <iostream>
using namespace std;

int main(){
    int d;
    
    cout<<"Enter your numbewr for square pattern:";
    cin>>d;

    int i=1;

    while(i<=d){
        int j=1;
        while(j<=d){
            cout<<d-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}