#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << arr[i];
    }
    cout << endl;
}
void swapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i+1<size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int odd[9] = {1, 2, 3, 4, 5, 6, 7, 8, 10};

    swapArray(odd, 9);
    printarray(odd, 9);

    swapArray(even, 10);
    printarray(even, 10);

    return 0;
}