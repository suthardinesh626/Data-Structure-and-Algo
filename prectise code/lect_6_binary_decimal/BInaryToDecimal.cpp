#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int d;
    cout << "Enter a decimal number: ";
    cin >> d;

    int i = 0, ans = 0;
     while(d!=0){
        int digit =d%10;
        if (digit){
            ans = ans +pow(2, i);
        }
        d=d/10;
        i++;
     }
     cout<<ans <<endl;
}