#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<< "Enter a number : ";
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cout<< " not prime number ";
            break;
        }
    }
    if(num==i)
    {
        cout<< " prime number ";
    }

    return 0;

}
