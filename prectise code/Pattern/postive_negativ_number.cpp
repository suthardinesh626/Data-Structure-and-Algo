#include <iostream>
using namespace std;

int main(){
    int num;

    cout<< "Enter your number:"<<endl;
    cin>> num;
    cout<<"value you enter is:"<<num<<endl;

    if(num>0) {
        cout<<"It is a positive number"<<endl;
    }
    else{
        if (num==0) {
            cout<<"It is equal to Zero"<<endl;
        }
        else{
            cout<<"It is a negative number"<< endl;
        }
    }

    return 0;
}