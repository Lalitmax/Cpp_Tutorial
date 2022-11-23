#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int num);
int main()
{
   int num;
   cout<< " Enter binary number : ";
   cin>>num;
   cout<<binarytodecimal(num);
   return 0;

}
int binarytodecimal(int num)
{
      int convert=0;
     int inc=1;
   while(num>0)
   {
   int  lastdigit=num%10;
   if(lastdigit==0 || lastdigit==1){

       convert+= lastdigit*inc;
num=num/10;

   }
   else
   {

        cout<<"wrong binary numaber "<< " ";
        break;
   }

 inc*=2;
   }

   return convert;
}

