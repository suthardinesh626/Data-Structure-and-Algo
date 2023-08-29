#include <iostream>
using namespace std;

int power(int a , int b){
    //base case
    if(b==0)
        return 1;
    
    if (b==1)
        return a;

    //recursion call
    int ans =power(a, b/2);

    if (b%2==0){
        //id b is even
        return ans*ans;
    }
    else{
        //if b is odd
        return a*ans *ans;
    }
}
int main(){
    int a, b;
    cin>>a>>b;

    int ans= power(a, b);
    
    cout << ans <<endl;
    return 0;
}