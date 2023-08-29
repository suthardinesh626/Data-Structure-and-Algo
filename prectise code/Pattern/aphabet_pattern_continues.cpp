#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter number of row: "<<endl;
    cin>>d;
    int i=1;
    while(i<=d){
        int j=1;

        char start ='A';
        while(j<=d){
            cout<<start<<" ";
            start=start +  1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}