#include<iostream>
using namespace std;
long long int findsqrt(int x);
double moreprecision(int sqrt, int n, int mynum);
int main()
{
    int mynum;
    cout<< " Enter number : ";
    cin>>mynum;
   int sqrt=findsqrt( mynum);
   cout<< moreprecision( sqrt, 7, mynum);
}

long long int findsqrt(int x)
{
    int s=0,e=x;
  long long int ans=-1;

    while(s<=e)
    {
  long long int   mid= s+(e-s)/2;
    long long   int sqrt=mid*mid;
        if(sqrt==x)
        {
        return mid;

        }
        if(sqrt<x)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }

        }


 return ans;

}
double moreprecision(int sqrt, int n, int mynum)
{
    double ans=sqrt;
    double factor =1;
    for(int i=0; i<n; i++)
    {
      factor=factor/10;

        for(double j=ans; j*j<mynum; j=j+factor)
        {
           ans= j;
        }

    }


    return ans;
}
