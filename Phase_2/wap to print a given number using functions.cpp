#include<iostream>
using namespace std;
void printnum(int num);
int main()
{
    int num;
    cout<< " Enter a number :";
    cin>>num;
    printnum(num);
    return 0;
}
void printnum(int num)
{
    cout<<num;
}
