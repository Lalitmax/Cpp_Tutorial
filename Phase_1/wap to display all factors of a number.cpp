#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< " Enter a number : ";
    cin>>num;
    for(int i=num; i>=1; i--)
{
    if(i==1)
        {
        cout<<1;
       }
       else
      {
          cout<<i<<"*";
      }
}
    return 0;
}
