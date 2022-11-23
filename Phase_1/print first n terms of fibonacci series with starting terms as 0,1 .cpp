#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< " Enter a number : ";
    cin>>num;
    if(num==1)
    {
        cout<<"0"<< " ";
    }
    else if(num==2)
    {
        cout<<"0 1"<<" ";
    }
    else
    {
        int a,b,sum_f,i;
        a=0;
        b=1;
        i=3;
        cout<<a<<" "<<b<< " ";
        while(i<=num)
        {
            sum_f=a+b;
            cout<<sum_f<< " ";
            a=b;
            b=sum_f;
            i++;
        }
    }

    return 0;
}
