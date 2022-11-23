#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    i=1;
    j=2;
       //1 //2 //1     //2         //3     //4
    k=i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<  j<<" "<<  k  <<endl;
    return 0;
}
