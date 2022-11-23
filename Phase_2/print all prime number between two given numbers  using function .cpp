
#include<iostream>
using namespace std;
bool isprime(int i);
int main()
{
    int n1,n2;
  cout<<"Enter a number : ";
    cin>>n1>>n2;
    int c=0;
    for(int i=n1; i<n2; i++)
    {

    if(isprime(i))
    {
        cout<<i<< " ";
    }

    }

    return 0;
}
bool isprime(int i)
{
     // check prime or not
    if(i<=1)
        return false;


    for(int j=2; j<i; j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;

}
