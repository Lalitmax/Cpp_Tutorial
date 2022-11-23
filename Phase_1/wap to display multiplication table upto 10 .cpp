#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter number to print table upto ten : ";
    cin>>n;
    for(int i=1; i<=10; i++)
    {
        cout<<i*n<<"\t";
    }
    return 0;
}
