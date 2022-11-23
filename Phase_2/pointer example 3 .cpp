#include<iostream>
using namespace std;
int main()
{
    int first =7;
    int *p=&first;
    cout<<(*p)++<< " ";
    cout<<first<<endl;

    return 0;
}
