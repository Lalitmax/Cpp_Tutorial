#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< " Enter  numbers : ";
    cin>>num;
     int reverse_number =0;
    while(num>0)
    {
        int lastdifits=num%10;

        reverse_number=reverse_number*10+ lastdifits;
        num=num/10;
    }

    cout<<reverse_number;
}
