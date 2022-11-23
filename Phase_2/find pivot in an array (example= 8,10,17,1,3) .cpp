#include<iostream>
using namespace std;
int findpivot(int arr[],int n);
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

    cout<<findpivot(arr,n);
    return 0;
}
int findpivot(int arr[],int n)
{
    int s=0, e=n-1;

    while(s<e)
    {
        int mid= s+ (e-s)/2;
        if(arr[mid]>=arr[0])
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
