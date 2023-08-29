#include <iostream>
using namespace std;

int sumArray(int *arr , int size){
    // base case
    if (size == 0){ //if there is no element present there it will retunr 0.
        return 0;
    }
    if(size == 1){  // if there is only one element then it will retun thats sam elment
        return arr[0];
    }
   int reaminingpart = sumArray(arr+1, size-1);  // here we are increment the the index by one and derease thesize by one.
   int sum = arr[0]+ reaminingpart;

   return sum;

}

int main(){
    
    int arr[9]= {1,2,3,4,5,6, 8, 9};
    int size =9;   // size if the array it stored.
    cout << "The valur is check."<< endl;

    int sum = sumArray(arr, size);  // the funtion it called.
    cout << "Sum of the array is: "<< sum <<endl;



    return 0;
}