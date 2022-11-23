#include<iostream>
using namespace std;
void fibonacci(int num);
int main()
{
    int num;
    cout<< " Enter a number : ";
    cin>>num;
    fibonacci(num);
    return 0;

}
void fibonacci(int num)
{

    int n1=0,n2=1,nextterm;

    for(int i=1; i<=num; i++)
{
    cout<<n1<< " ";
              nextterm=n1+n2;

        n1=n2;
        n2=nextterm;


        }




}
