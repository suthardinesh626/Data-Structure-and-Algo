#include <iostream>
using namespace std;

int main(){
    for (int i=0;i<=5;i++){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    //2nd Q
    for (int i=0;i<=15;i+=2){
        cout<<i<<" ";
        if (i&1){
            continue;
        }
        i++;
    }
    cout<<endl;
    //3rd q
}