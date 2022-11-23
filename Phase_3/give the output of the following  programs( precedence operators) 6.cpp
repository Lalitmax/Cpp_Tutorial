// Precedence of Operators
#include<iostream>
using namespace std;
int main()
{
    int a=1, b=3,c;

    c=b<< a; //

    b=c*(b*(++a)--); //36

    a=a>>b; //1

    cout<<b;
    return 0;
}


