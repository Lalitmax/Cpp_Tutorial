#include<iostream>
using namespace std;
  int pascaltriangle(int num);
  int main()
  {
      int n;
      cout<< "Enter rows and columns for print pascal triangle :  ";
      cin>>n;

      for(int i=0; i<n; i++)
      {
          for(int j=0; j<=i;j++ )
          {
            int ans=pascaltriangle(i)/(pascaltriangle(j)*pascaltriangle(i-j));
            cout<<ans << " ";
          }
          cout<<endl;
      }

      return 0;
  }

int pascaltriangle(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }
    return fact;

}
