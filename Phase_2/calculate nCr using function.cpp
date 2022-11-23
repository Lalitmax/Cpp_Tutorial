#include<iostream>
using namespace std;
  int factorial(int num);
  int main()
  {
      int n,r;
      cout<< " Input n and r value for calculate nCr  :";
      cin>>n>>r;

      if(n==r)
      {
        int ans2=factorial(n);
        cout<<ans2;
      }
      else
      {
           int ans=factorial(n)/(factorial(r)*factorial(n-r));
            cout<<ans;
      }

      return 0;


  }
   int factorial(int num)
   {
       int fact=1;
       for(int i=1; i<=num; i++)
       {
           fact*=i;
       }
       return fact;
   }
