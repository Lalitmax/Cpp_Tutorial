#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
cout<< " Enter a number : ";
cin>>num;
while(num>0)
{
    int lastdigit=num%10;

    cout<<lastdigit<< " ";
    num=num/10;
}
return 0;
}
