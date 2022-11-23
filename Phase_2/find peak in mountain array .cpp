#include<iostream>
using namespace std;
int peakmountain(int arr[],int n);
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[100000];
    cout<<"Enter array :  ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<peakmountain(arr,n);
    return 0;
}


int peakmountain(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid= s+ (e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
       return s;
}
