#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n-i; j++)
        {
            cout<< " ";
        }

        for(int j=1; j<=i; j++)
        {
                  if(j<i )
                  {
            cout<<j<< " ";

                  }
        }

        for(int j=1; j<=i+1-i; j++)
        {
            cout<< "1";
        }
        cout<< endl;
    }
}
