#include<iostream>
using namespace std;
int main()
{
     int num;
    cout<< "ENTER A NUMBER : ";
    cin>>num;
        for(int i=1; i<=num; i++)
        {
            for(int j=1; j<=num-i; j++)
            {
                cout<< " ";
            }

            for(int k=1; k<=i; k++)
            {
               if(k==i|| k==1)
                {
                     cout<<"* ";

                }
                else
                {
               cout<< "  ";
               }

            }
            cout<< endl;
        }

            for(int i=num; i>=1; i--)
        {
            for(int j=1; j<=num-i; j++)
            {
                cout<< " ";
            }

            for(int k=1; k<=i; k++)
            {
               if(k==i|| k==1)
                {
                     cout<<"* ";

                }
                else
                {
               cout<< "  ";
               }

            }
            cout<< endl;
        }



         return 0;
}
