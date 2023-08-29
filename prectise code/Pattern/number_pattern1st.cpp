#include <iostream>
using namespace std;

int main(){
    int d;
    int i=1;
    cout<<"Enter a value for pattern:"<<endl;
    cin>>d;

    while(i<=d){
        
        int j=1;
        while(j<=d){
            cout<<" "<< i ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}