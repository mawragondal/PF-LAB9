#include <iostream>
using namespace std;

int main()
{
    cout << "Bank";
    double amount;
    char choice = 'x';
    while (choice != '4')
    {
        cout << "Menu\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            int newAm;
            cout << "Enter your amount: ";
            cin >> newAm;
            amount = amount + newAm;
            break;
        case '2':
            cout << "Enter your amount to withdraw: ";
            cin>>newAm;
            if(newAm > amount)
            {
                cout<<"Not enough funds\n";
                break;
            }
            amount = amount - newAm;
            break;
        case '3':
            cout<<"Your balance: Rs "<<amount<<endl;
            break;
        case '4':
            cout<<"Goobye!";
            break;
        default:
            cout<<"Invalid option, try again!";
            break;
        }
    }
}