
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
int a,b;
 a=firstposition(arr,n,key);
 b=lastposition(arr,n,key);
// cout<<a<<b;
 cout<<  " Total no of occurrence = " <<(b-a) + 1;

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
    int totalnoofoccurrence= -1;

    while(s<=e)
    {
 int mid=s+(e-s)/2;

        if(arr[mid]==key)
        {
           totalnoofoccurrence = mid;
            s=mid+1;
             cout<<totalnoofoccurrence;
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

return totalnoofoccurrence;

}

