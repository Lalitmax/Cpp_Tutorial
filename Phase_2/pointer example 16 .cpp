#include<iostream>
using namespace std;
int main()

{
    char arr[]="abcd";
    char *p=&arr[0];
    p++;
    cout<<p<<endl;
    return 0;
}
