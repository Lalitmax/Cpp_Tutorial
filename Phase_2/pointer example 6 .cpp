#include<iostream>
using namespace std;
int main()

{
    float f=23.5;
    float p=45.6;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;
    cout<<*ptr<< "  "<<f<< " "<<p<<endl;
    return 0;
}
