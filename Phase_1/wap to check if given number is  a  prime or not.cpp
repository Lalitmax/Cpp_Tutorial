#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number : ";
    cin>>num;
    int i;
    for( i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cout<< "not prime number";
            break;
        }

    }
    if(i==num)
    {
        cout<< " prime number ";
    }
    return 0;
}
