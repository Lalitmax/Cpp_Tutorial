#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number : ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<"\t";
    }
    return 0;
}
