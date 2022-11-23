#include<iostream>
using namespace std;
void primenumber(int a, int b);
int main()
{
    int a,b;
    cout<< " Enter two numbrs : ";
    cin>>a>>b;
    primenumber(a,b);
   return 0;
}
void primenumber(int x, int y)
{

  for(int num=x; num<=y; num++)
  {
      int i;
      for(i=2; i<num; i++)
      {
          if(num%i==0)
          {
              break;
          }
      }
      if(i==num)
      {
          cout<<num<<" ";
      }

  }


}
