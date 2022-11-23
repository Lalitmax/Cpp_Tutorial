#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<< " Enter  numbers : ";
    cin>>num;
    int copy_number=num;
    int sum=0;
    while(num>0)
    {
        int lastdigit=num%10;
        sum=sum+pow(lastdigit,3);
        num=num/10;
    }
    if(copy_number==sum)
    {
        cout<< " Armstrong number ";
    }
    else
    {
        cout<< "  Not Armstrong number ";
    }

}
