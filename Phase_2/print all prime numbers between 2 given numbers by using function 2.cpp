#include<iostream>
using namespace std;
bool printprimen(int num);
int main()
{
   int num1,num2;
   cout<< "Enter a number : ";
   cin>>num1>>num2;
   for(int i=num1; i<=num2; i++)
   {
     if(printprimen(i))
     {
         cout<<i<< " ";
     }

   }
   return 0;

}
bool printprimen(int num)
{
    for(int j=2; j<num; j++)
    {
        if(num%j==0)
        {
           return false;

        }


    }
  return true;

}
