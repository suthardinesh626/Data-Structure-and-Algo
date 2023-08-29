#include <iostream>
using namespace std;

bool isSorted(int *arr, int size){
    // base case
    if (size == 0 || size ==1){  // agar koi size 0 ya 1 hai matlab ke woh soted hai kyu ki koi elmented comperiton ke hai he nahi.
        return true;
    }
    if (arr[0] >arr[1]){  // agar left element is biger tha the roght element then it is not sorted so the out put will come outas false.
        return false;
    }
    else{
        bool reamingPart = isSorted(arr+1, size -1);  // it is call the sam function but increasing the element index by one and recuding 
        return reamingPart;                           //the size bye one
    }
}

int main(){
    
    int arr[    5]={2, 4, 9, 8, 9};
    int size =5;

    bool ans = isSorted(arr, size);

    if (ans){
        cout << "array is sorted";    // agr sorted hai toh 
    }
    else{
        cout << "array is not sorted";  // agar array is not sorted
    }

    return 0;
}