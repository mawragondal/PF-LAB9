#include<iostream>
using namespace std;
int main()
{
    char colour;
    cout<<"enter the traffic light"<<endl;
    cin>>colour;
    switch(colour)
    {
    case 'R':
    cout<<"stop";
    break;
    case 'G':
    cout<<"GO";
    break;
    case 'Y':
    cout<<"slow down";
    break;
    
}
return 0;
}