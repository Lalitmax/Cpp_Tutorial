#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
   return 1;

   int smallerproblem= power(n-1);
   int biggerproblem=2*smallerproblem;
    return biggerproblem;
}
int main()
{
    int n;
    cout<< "Enter number of power on 2^";
    cin>>n;
    cout<<endl;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;

}
