#include <iostream>
using namespace std;

int main()
{
    cout << "Grade converter: ";
    cout << "Enter Grade: ";
    char grade;
    cin >> grade;
    switch (grade)
    {
    case 'A':
    case 'a':
        cout << "AMAZING!"; 
        break;
    case 'B':
    case 'b':
        cout << "VERY GOOD!"; 
        break;
    case 'C':
    case 'c':
        cout << "GOOD!";
        break;
    case 'D':
    case 'd':
        cout << "BAAD!";
        break;
    case 'E':
    case 'e':
        cout << "OH NO!";
        break;
    case 'F':
    case 'f':
        cout << "FLUNK!";
        break;
    default:
        cout<<"Who can say really!";
        break;
    }
}