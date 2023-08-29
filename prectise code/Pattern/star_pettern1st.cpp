#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter  value for pattern: "<<endl;
    cin>>d;
    int i=1;

    while(i<=d){
        
        int j=1;
        while(j<=d){
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}