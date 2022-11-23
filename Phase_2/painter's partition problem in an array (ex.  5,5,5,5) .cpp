#include<iostream>
using namespace std;
int panterspartition(int arr[], int n, int m);
bool ispossible(int arr[],int n,int m,int mid);
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[10000];
    cout<< " Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter number of pantres : " ;
    cin>>m;
 cout<< " painters allocate  = " << panterspartition(arr,n,m);
return 0;
}

int panterspartition(int arr[], int n, int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    int e=sum;
    while(s<=e)
    {
        int mid= s+(e-s)/2;
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
bool ispossible(int arr[],int n,int m,int mid)
{
    int paintercount=1;
    int partitionsum=0;

    for(int i=0; i<n; i++)
    {
        if(partitionsum +arr[i]<=mid)
        {
            partitionsum+=arr[i];
        }
        else
        {
            paintercount++;
            if(paintercount > m || arr[i]>mid)
            {
                return false;
            }
            partitionsum = arr[i];
        }
    }
    return true;
}

