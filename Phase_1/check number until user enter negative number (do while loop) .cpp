#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter number : ";
    cin>>n;
    do
    {
        cout<< "you enterd "<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}
