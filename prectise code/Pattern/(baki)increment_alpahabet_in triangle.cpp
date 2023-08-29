#include <iostream>
using namespace std;

int main()
{
    // wrong hai shai kar
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = 1;

        char value = 1;
        while (col <= row)
        {
            char ch = ('A' + row - 1);
            cout << ch;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}