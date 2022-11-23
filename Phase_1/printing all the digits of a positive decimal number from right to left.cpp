#include<iostream>
using namespace std;

int main()
{
   int n,reverse;
   cout<< "Enter a  number : ";
   cin>>n;
while(n>0)
{
    reverse=n%10;
    cout<<reverse<< " ";
    n=n/10;
}
 return 0;
}
