#include <iostream>
using namespace std;

int main(){
    // int d;

    // cout<<"Enter a number for sum:"<<endl;
    // cin>>d;

    // int sum = 0;
    // int i=1;

    // while(i<=d){
    //     sum=sum+i ;
    //     i=i+1;
    // }
    // cout <<"Value of sum is:"<<sum<<endl;
    // return 0;

    int d;

    cout<<"Enter a number for sum:"<<endl;
    cin>>d;

    int sum = 0;
    int i=1;

    while(i<=d)
    {
        if(i%2==0)
        {
            sum=sum+i ;   
        }
        i=i+1;
    }
    cout <<"Value of sum is:"<<sum<<endl;
    return 0;


   
}