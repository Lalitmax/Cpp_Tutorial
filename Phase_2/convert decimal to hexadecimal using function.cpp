#include<iostream>
using namespace std;
void decimaltohexadecimal(int num);
int main()
{
    int num;
    cout<< " Enter decimal number = ";
    cin>>num;
    decimaltohexadecimal(num);
    return 0;

}

void decimaltohexadecimal(int num)
{
    int i=0;
    char hexa[200];
    while(num>0)
    {
        int lastdigit=num%16;
        if(lastdigit<10)
        {
            hexa[i++]=48+lastdigit;
        }
        else
        {
            hexa[i++]=55+lastdigit;
        }

        num=num/16;
    }

    for(int j=i-1; j>=0; j--)
    {
        cout<< hexa[j];
    }

}



