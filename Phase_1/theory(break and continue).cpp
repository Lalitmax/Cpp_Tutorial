#include<iostream>
using namespace std;
int main()
{
    int pocketmoney;
    cout<< "enter pocket money : ";
    cin>>pocketmoney;
    for(int date=1; date<=30; date++)
    {
        if(date%2==0)
        {
            continue;
        }

        if(pocketmoney==0)
        {
            break;
        }
        cout<< "go to today"<<endl;
        pocketmoney+=-300;

    }
    return 0;
}
