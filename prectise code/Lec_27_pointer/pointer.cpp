#include <iostream>
using namespace std;

int main(){

    //Q1

    // int first =8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first<< " " << second <<endl;
    

    //Q2
    // int first =6;
    // int *p= &first;
    // int *q=p;
    // (*q)++;
    // cout<< first <<endl;

    //Q3 In this the value ids first will print then it will be increment so that is why the fiest the number
    // print is 9 then it will incerement so it will print 9.
    // int first =8;
    // int *p= &first;
    // cout<< (*p)++ <<" ";
    // cout << first << endl;

    //Q4
    // int *p =0;
    // int first =110;
    // p = &first;
    // cout << *p << endl;

    //Q5
    // int first = 8;
    // int second = 11;
    // int *third  = &second;
    // first = *third;
    // *third = *third +2;
    // cout << first << " "<< second << endl;

    //Q6
    // float f= 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr )++;
    // *ptr =p;
    // cout << *ptr << " " << f << " " << p << endl;

    //Q7
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl; 

    return 0;
}