#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char oper;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter operator(+,-,*,/): ";
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout<<"No operation found";
        break;
    }
    return 0;
}