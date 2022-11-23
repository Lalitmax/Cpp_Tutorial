#include<iostream>
using namespace std;
int firstposition(int arr[], int n, int key);
int lastposition(int arr[], int n, int key);
int main()
{

    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[100000];
    cout<< " Enter array sorted order : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<  " Enter key : ";
    cin>>key;

 cout<<firstposition(arr,n,key)<< " " ;
 cout<<lastposition(arr,n,key);

return 0;
}

int firstposition(int arr[], int n, int key)
{
    int s,e;
    s=0;
    e=n-1;
    int ans= -1;

    while(s<=e)
    {
 int mid=s+(e-s)/2;

        if(arr[mid]==key)
        {
           ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }



    }

    return ans;


}


int lastposition(int arr[], int n, int key)
{

      int s,e;
    s=0;
    e=n-1;
    int ans= -1;

    while(s<=e)
    {
 int mid=s+(e-s)/2;

        if(arr[mid]==key)
        {
           ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }



    }

    return ans;



}

