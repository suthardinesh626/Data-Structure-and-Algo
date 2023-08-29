#include <iostream>
using namespace std;

int main(){
    int d;
    cout<<"Enter this number";
    cin>>d;

    int i=1;
    while (i<=d)
    {
        int j=1;
        while (j<=d)
        {
            int start =1;
            cout<<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}