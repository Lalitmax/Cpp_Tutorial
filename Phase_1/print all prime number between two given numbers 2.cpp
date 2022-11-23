#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<< " Enter two numbers : ";
    cin>>num1>>num2;
   for(int i=num1; i<=num2; i++)
   {
       int j;
       for(j=2; j<i; j++)
       {
           if(i%j==0)
           {
               break;
           }
       }

       if(i==j)
       {
           cout<<i<< " ";
       }
   }


    return 0;
}
