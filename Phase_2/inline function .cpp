#include<iostream>
using namespace std;
int getmax(int a, int b)
{
    return a>b ? a : b;
}
int main()
{
    int a,b;
    cout<< "Enter value of a and b : ";
    cin>>a>>b;
     int ans=0;

    ans = getmax(a,b);
    cout<< "before answer is "<<ans<<endl;
    a=a+3;
    b=b+4;
    ans = getmax(a,b);
    cout<< "after  answer is "<<ans<<endl;

}
