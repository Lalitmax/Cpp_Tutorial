#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    int smallerproblem= factorial(n-1);
    int biggerproblem= n*smallerproblem;
    return biggerproblem;
}
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>>n;
    int ans = factorial(n);
    cout<<endl;
    cout<< "factorial is --> "<< ans<<endl;
    return 0;
}
