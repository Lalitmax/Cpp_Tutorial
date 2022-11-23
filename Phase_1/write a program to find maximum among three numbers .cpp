#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<< "Enter three numbers : ";
    cin>>x>>y>>z;
    if(x>y)
    {
        if(x>z)
        {
            cout<< " maximum ="<<x;
        }
        else
        {
            cout<< "maximum = "<<z;
        }
    }
    else
    {
        if(y>z)
        {
            cout<< "maximum = "<<y;
        }
        else
        {
            cout<< "maximum = "<< z;
        }
    }
    return 0;
}
