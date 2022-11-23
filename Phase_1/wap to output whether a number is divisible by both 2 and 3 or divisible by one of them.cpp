#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;
if(n%2==0 && n%3==0)
{
    cout<< "Divisible by both";
}
else if(n%2==0)
{
    cout<< "only Divisible by 2";
}
else if(n%3==0)
{
    cout<< "only Divisible by 3";
}
else
{
    cout<< " Divisible by none";
}
}
