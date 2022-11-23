#include<iostream>
using namespace std;
int main()
{
    int num;
       int i;
       int count=0;
    cout<< "Enter a number : ";
    cin>>num;
    for(i=2;i<num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
if(count==0)
{
    cout<< "prime number ";
}
else
{
    cout<< "not prime number";
}

return 0;
}
