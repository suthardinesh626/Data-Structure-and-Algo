#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[7] = {1, 4, 9, 4, 7, 78, 56};
    cout << "Enter your number for search: ";
    int key;
    cin>>key;
    bool eureka = search(arr, 10 , key);

    if (eureka)
    {
        cout << "The key is present!";
    }
    else
    {
        cout << "The key ain't present!";
    }
  
}