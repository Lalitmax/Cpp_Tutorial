#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
        cout<< "Enter a number : ";
    cin>>num;
    int lastdigit,sum=0, copy_num;
    copy_num=num;


    while(num>0)
    {
        lastdigit=num%10;
        sum= sum+ pow(lastdigit,3);
    num=num/10;
    }
    if(copy_num==sum)
    {
        cout<< " Armstrong Number ";
    }
    else

    {
        cout<< " Not Armstrong number ";
    }

    return 0;
}
