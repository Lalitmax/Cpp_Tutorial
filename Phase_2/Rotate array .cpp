#include<iostream>
using namespace std;
void rotatearray(int arr[], int k, int n);
int main()
{
    int k=2;
    int n;
    cout<<" Enter size of array : ";
    cin>>n;
    cout<< " Enter aarray : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

rotatearray(arr,k,n);
return 0;
}
void rotatearray(int arr[], int k, int n)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        temp[(i+k)%n]=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<temp[i]<< " ";
    }
}
