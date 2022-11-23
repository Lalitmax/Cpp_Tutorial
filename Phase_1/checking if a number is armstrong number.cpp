#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r;
    cout<< " Enter a number :  ";
    cin>>n;
    int a=n;
    int sum=0;
   while(n>0)
   {
       r=n%10;
       sum=sum+pow(r,3);
       n=n/10;
   }
if(a==sum)
{
    cout<< "Armstrong number";
}
else
{
    cout<< " Not Armstrong number";
}
    return 0;
}
