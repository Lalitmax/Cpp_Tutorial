#include<iostream>
using namespace std;
int main()
{
    int n , reverse_number;
    cout<< " Enter numbers : ";
    cin>>n;
    for(; n>0; n=n/10)
    {
        reverse_number=n%10;
        cout<< reverse_number<< " ";
    }

    return 0;
}
