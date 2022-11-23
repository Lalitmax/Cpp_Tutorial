#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter number : ";
    cin>>num;
    int sum=0;
   while(num>=0 || num<=0)
   {
       if(num>=0){

       cin>>num;
       sum+=num;
       }
   }
   cout<<sum;

    return 0;
}
