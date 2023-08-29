#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
    // if you want to update a vlaue of in array it can be done by pointer.
}

int getSum(int arr[], int n)
{

    cout << endl << "Size of:   " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int value = 5;
    // // print(p);
    // int *p = &value;
    // cout << "Before the update of p: " << *p << endl;
    // update(p);
    // cout << "After the update of p:" << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "This is the sum of array: " << getSum(arr, 5) << endl;

    return 0;
}