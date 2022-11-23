#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<< "input two numbers : ";
    cin>>n1>>n2;
    char ch;
    cout<< "input arithmetic sign ";
    cin>>ch;
    switch(ch)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<< n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
    cout<<n1/n2;
       break;
    default:
        cout<< "enter another character : ";
          break;
    }
    return 0;
}
