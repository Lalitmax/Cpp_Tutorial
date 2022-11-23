#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number : ";
    cin>>n;
    int sum=0;
    for(int counter=1; counter<=n; counter++)
    {
        sum=sum+counter;
    }

    cout<< "N number of sum = "<<sum;
    return 0;

}
