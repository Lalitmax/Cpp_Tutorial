#include<iostream>
using namespace std;
  int fib(int n)
  {
      // base case
      if(n==0)
        return 0;
      if(n==1)
        return 1;
        // recursive call
      return fib(n-1) + fib(n-2);
  }
int main()
{
    int n;
    cout<< " enter n : ";
    cin>>n;
    // function call
    for(int i=0; i<n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}
