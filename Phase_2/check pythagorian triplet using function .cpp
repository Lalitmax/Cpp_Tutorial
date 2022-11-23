#include<iostream>
using namespace std;
bool check(int x, int y, int z);
int main()
{
    int x,y,z;
    cout<< " input value of x,y and z : ";
    cin>>x>>y>>z;
    if(check(x,y,z))
    {
        cout<< " Pythagorean triplet  ";
    }
    else
    {
        cout<< " Not  Pythagorean triplet  ";
    }
    return 0;
}

bool check(int x, int y, int z)
{
    int a,b,c;
    if(x>y)
    {
        if(x>z)
        {
            a=x;
        }
        else
        {
            a=z;
        }
    }
    else if(y>z)
    {
        a=y;
    }
    else
    {
        a=z;
    }

if(a==x)
   {
       b=z;
        c=y;
   }
   else if(a==y)
   {
       b=x;
       c=z;
   }
   else
   {
       b=x;
       c=y;
   }

if(a*a==b*b+c*c)
{
    return true;
}
else
{
    return false;
}
}
