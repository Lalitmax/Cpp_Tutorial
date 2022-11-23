#include<iostream>
using  namespace std;
int sum(int n);
int main()
{
    int n;
    cout<< " Enter a number : ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;

}

int sum(int n)
{
    int total=0;
    for(int i=1; i<=n; i++)
    {
        total+=i;
    }
    return total;


}
