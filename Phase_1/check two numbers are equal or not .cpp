#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<< "Enter value x and y"<<endl;

   cin>>x;
   cin>>y;

    if(x==y)
    {
        cout<< " both the numbers are equal";
    }
    else if(x>y)
    {
        cout<< x<<" is greater than "<<y;
    }
    else
    {
        cout<<y<< " is greater  than "<<x;
    }

    return 0;
}
