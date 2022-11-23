#include<iostream>
using namespace std;
int main()
{
    float  n1,n2;
    cout<< "input two numbers : ";
    cin>>n1>>n2;
    char op;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
         break;
    case '*':
        cout<<n1*n2;
         break;
    case '/':
    cout<<n1/n2;
     break;
    default:
        cout<< "thank you";
         break;

    }
    return 0;
}
