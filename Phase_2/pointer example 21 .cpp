#include<iostream>
using namespace std;
void increament(int **p)
{
    ++(**p);
}
int main()
{
    int num=110;
    int *ptr=&num;
    increament(&ptr);
    cout<<num<<endl;
    return 0;
}
