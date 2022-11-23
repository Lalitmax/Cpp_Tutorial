#include<iostream>
using namespace std;
void saydigit( string arr[], int n)
{
    // base case
    if(n==0)
        return ;
    int digit=n%10;
    n/=10;
    // recursive call
    saydigit(arr,n);
    // coutput
    cout<<arr[digit]<< " ";
}
int main()
{
    int n;
    cout<< "Enter digit : ";
    string arr[]={"zero", "one", "two", "three","four","five","six", "seven", "eight", "nine"};
    cin>>n;
   //  function call
    saydigit(arr,n);
    return 0;
}
