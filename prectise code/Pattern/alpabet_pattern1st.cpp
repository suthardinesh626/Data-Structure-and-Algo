#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter your number"<<endl;
    cin>>d;

    int row=1;

    while(row<=d){

        int col =1;
        while (col<=d){    
            char ch = 'A' + row -1;
            cout<<ch<<"";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}