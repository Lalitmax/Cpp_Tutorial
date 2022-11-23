#include<iostream>
using namespace std;
int addbinary(int n);
int dtob(int c);
int main()
{
 int n1,n2;
 cout<< " Enter two binary numbers : ";
 cin>>n1>>n2;
 int a,b,c;
 a=addbinary(n1);
 b=addbinary(n2);
 c=a+b;
 cout<<dtob(c);


return 0;
}

int addbinary(int n)
{
    int total=0;
    int inc=1;
    while(n>0)
    {
        int lastdigit=n%10;

        total=total + lastdigit*inc;
        n=n/10;
        inc=inc*2;
    }
   return total;

}

int dtob(int c)
{
    int t, inc2=1;
    int total2=0;
    while(c>0)
    {
      t=c%2;
        total2=total2+ t*inc2;
        c=c/2;
        inc2=inc2*10;

    }
    return total2;

}

