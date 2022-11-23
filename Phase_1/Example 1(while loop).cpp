#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter number : ";
    cin>>num;
    int i;
    while(i<num)
        {
        cout<<i+1<<"\t";
        i++;
    }
    return 0;
}
