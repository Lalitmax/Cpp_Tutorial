#include<iostream>
using namespace std;
int decimaltooctal(int num);
int main()
{
    int num;
    cout<< "Enter Decimal number : ";
    cin>>num;
    cout<<decimaltooctal(num);
    return 0;
}
int decimaltooctal(int num)
{
    int inc=1;
    int total =0;
    while(num>0)
    {
        int lastdigit=num%8;
        total=total + lastdigit*inc;

        num=num/8;
        inc=inc*10;

    }
    return total;
}

