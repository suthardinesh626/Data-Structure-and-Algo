#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter your number of row: ";
    cin>>d;

    int i=1;
    while (i<=d){
        int j=1;
        while (j<=d){
            char ch ='A' + j - 1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}