#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<< " Enter a number :";
    cin>>num;
    int flag=0;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            cout<< " Not prime number";
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        cout<< " Prime Number ";
    }

    return 0;
}
