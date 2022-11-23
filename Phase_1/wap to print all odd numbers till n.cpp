#include<iostream>
using namespace std;
int main()
{
    int num;
       cout<< "how long do you want to print the odd number : ";
       cin>>num;
       for(int i=1; i<=num; i++)
       {
           if(i%2==0)
           {
               continue;
           }
           else
           {
               cout<<i<< "\t";
           }
       }

       return 0;
}
