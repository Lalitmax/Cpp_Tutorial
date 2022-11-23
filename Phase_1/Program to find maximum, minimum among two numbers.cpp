#include<iostream>
using namespace std;
int main()
{
 int n1,n2;
 cout<< "enter two number :";
 cin>>n1>>n2;
 int max,min;
     if(n1>n2)
     {
         max=n1;
         min=n2;
     }
     else
     {
         max=n2;
         min=n1;
     }

     cout<< "maximum number is "<<max<<endl;
     cout<< "minimum number is "<<min<<endl;
 return 0;
}
