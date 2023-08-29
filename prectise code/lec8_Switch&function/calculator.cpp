#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the vlaue of a and b: ";
    cin >> a >> b;

    char op;
    cout << "Enter a operation: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Invalid input!";
    }
}