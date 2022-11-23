#include<iostream>
using namespace std;
int getsum(int *arr, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<< "Enter size of array : ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)

    {
        cin>>arr[i];
    }
    cout<< "answer is "<<getsum(arr,n);
    return 0;wyuio8lp9;'p


}
