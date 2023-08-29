#include <iostream>
using namespace std;

int main(){

    //ponter is created at some garbage address.
    // int *p=0;
    // cout<<*p;

    char ch[50]= "This is the best array every written ";

    // char  *ptr = &ch; // never do this, it is too risky for the system  never use ponter for char!!!!!!

    cout << "the printing array you wanted " << ptr << endl;

    return 0;
}