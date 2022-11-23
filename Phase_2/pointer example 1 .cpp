#include<iostream>
using namespace std;
int main()
{
    int first =3;
    int second=5;
    int *ptr=&second;
    *ptr=8;
    cout<<first << "   "<<second<<endl;
    return 0;
}
