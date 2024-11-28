#include<iostream>
using namespace std;
int main()
{
    int x='C';
    switch(x)
    {
        case 'A':
        break;
        cout<<"choice is A";
        case 'B':
        break;
        cout<<"choice is B";
        case 'C':
        break;
        cout<<"choice is C";
        default:
        cout<<"choice other then A,B and C";
        break;
    }
    return 0;
    }
