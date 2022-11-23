#include<iostream>
using namespace std;
int * fun(int n)
{
    int *ptr=&n;
    return ptr;
}
int & func(int  n)
{
    int num=n;
    int &ans=num;
    return ans;

}
int main()
{
    int n=8;
    func(n);
cout<<n<<endl;
 cout<<fun(n);
    return 0;
}
