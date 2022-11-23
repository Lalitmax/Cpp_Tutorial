#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number :";
    cin>>num;
    int i;
    do
    {
        cout<<i+1<<"\t";
        i++;
    }while(i<num);
    return 0;
}
