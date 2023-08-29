#include <iostream>
using namespace std;

int main(){
    char chstring;

    cout<<"Enter a string below"<<endl;
    cin>>chstring;

    if( chstring <= 122 &&  chstring >= 97){
        cout<<chstring<<"it is lower case"<<endl;
    }
    else if( chstring <=90 && chstring >=65){
        cout<<chstring<<"is a uppercase"<<endl;
    }
    else{
        cout<<"It is a number"<<endl;
    }
    return 0;
}