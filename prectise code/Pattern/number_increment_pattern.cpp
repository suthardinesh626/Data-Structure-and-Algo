#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter number for increment";
    cin>>d;

    int i=1;
    int count=1;

    while(i<=d){

        int j=1;
        while(j<=d){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i+i+1;
    }

}