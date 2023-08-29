#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number for triangle: "<<endl;
    cin>>n;
    int row=1;
    
    while(row<=n){
        
        int col=1;
        int value=row;
        while(col<=row){
        cout<<value<<" ";
        value =value +1;
        col=col+1;
        }
         cout<<endl;
        row=row+1;
    }

    //without using int value
    int d;
    cout<<"Enter a number for triangle: "<<endl;
    cin>>d;
    int row1=1;
    
    while(row1<=d){
        
        int col1=1;
        // int value=row1;
        while(col1<=row1){
        cout<<col1<<" ";
    
        col1=col1+1;
        }
         cout<<endl;
        row1=row1+1;
    }
}