#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< " Enter a number : ";
    cin>>num;
    int factorial=1,sum;
    for(int i=num; i>=1; i--)
    {
        factorial=factorial*i;

    }

  cout<<factorial;
    return 0;
}

