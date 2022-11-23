#include<iostream>
using namespace std;
int main()
{
    int num;
    int reverse_number,sum=0;
    cout<< " Enter numbers : ";
    cin>>num;
    while(num>0)
    {
        reverse_number=num%10;
        sum=sum*10 +reverse_number ;
        num=num/10;
    }

    cout<<sum;
    return 0;
}
