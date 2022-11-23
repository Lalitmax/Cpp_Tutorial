#include<iostream>
 using namespace std;

 double afterdecimal(int num, int tak, int temp)
 {
    double factor=1;
  double ans=temp;
    for(int i=0; i<tak; i++)
    {
        factor/=10;
        for(double j=ans; j*j<num; j+=factor)
        {
            ans=j;
        }
    }
     return ans;
 }
  long long int sqrofx(int num, int s, int e)
  {
      if(s>e)
      {
          return e;
      }
    long long   int mid= s+(e-s)/2;
       int  sqr =mid*mid;
       if(sqr==num)
       {
           return mid;
       }
       else if(sqr<num)
       {
           return sqrofx(num, mid+1, e);
       }
       else
       {
           return sqrofx(num, s, mid-1);
       }
  }
 int main()
 {
     int x;
     cout<< "Enter value of x  : ";
     cin>>x;
     int temp=sqrofx(x,0,x);
     cout<<afterdecimal(x,11,temp);

    return 0;
 }
