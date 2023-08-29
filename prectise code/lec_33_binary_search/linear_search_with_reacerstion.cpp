#include <iostream>
using namespace std;

bool search(int arr[], int size , int k){
    // base case
    if (size==0){
        return false;
    }
    if (arr[0]= k){
        return true;
    }

    else {
        bool reameaningPart = search(arr+1, size-1, k);
        return reameaningPart; 
    }
}


int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    int key = 8;
    bool ans = search(arr, size, key);

    if (ans){
        cout<<"The key is present!" <<endl;
    }
    else{
        cout << "key is ABSENT!!!"<<endl;;
    }
    return 0;
}