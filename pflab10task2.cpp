#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your alhpabet: ";
    char alpha;
    cin >> alpha;
    switch (alpha)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "The alphabet is a vowel.";
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        cout << "The Alphabet is a constant.";
        break;
    default:
        cout << "Neither a vowel, nor a constant.";
        break;
    }
    return 0;
}