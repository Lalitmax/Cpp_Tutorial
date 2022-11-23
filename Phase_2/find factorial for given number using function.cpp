#include<iostream>
using namespace std;
  int factorial(int num);

  int main()
  {
      int num;
      cout<< " Enter a number :";
      cin>>num;

      int ans= factorial(num);
      cout<<ans;
      return 0;
  }
int factorial(int num)
{
     int mult=1;
    for(int i=1; i<=num; i++)
    {
       mult=mult*i;
    }

    return mult;
}
