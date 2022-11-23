// butterfly pattern
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< " Enter a number : ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        int space=2*num-2*i;
        for(int k=1; k<=space; k++)
        {
            cout<<"  ";
        }

        for(int l=1; l<=i; l++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }


    for(int i=num; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        int space=2*num-2*i;
        for(int k=1; k<=space; k++)
        {
            cout<<"  ";
        }

        for(int l=1; l<=i; l++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }

        return 0;

}
