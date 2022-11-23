#include<iostream>
using namespace std;
int main()
{
     int num;
    cout<< "ENTER A NUMBER : ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num-i +1; j++)
        {
            cout<< "  ";
        }
        int k=i;
        for(int l=1; l<=i; l++)
        {
            cout<<k--<< " ";
        }

        k=2;
        for(int m=1; m<=i-1; m++)
        {
            cout<< k++<< " ";
        }
        cout<<endl;
    }

    return 0;
}


