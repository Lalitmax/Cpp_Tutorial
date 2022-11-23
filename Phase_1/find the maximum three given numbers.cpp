#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<< "Enter three numbers ";
cin>>a>>b>>c;
if(a>b)
{
    if(a>c)
    {
        cout<< " the max= "<<a;

    }
    else
    {
        cout<< "the max= "<<c;
    }
}
else
{
    if(b>c)
    {
        cout<<"the max= "<<b;
    }
    else
    {
        cout<<"the max= "<<c;
    }
}

return 0;
}
