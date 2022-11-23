#include<iostream>
using namespace std;
int findpivot(int arr[],int n);
int binarysearch(int arr[], int pivot, int n, int key);
int findposition(int arr[], int n, int key);

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
int key;
cout<<" Enter key";
cin>>key;
   cout<<findposition(arr,n,key);
    return 0;
}
int findpivot(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
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



int binarysearch(int arr[], int pivot, int n, int key)
{
   int s,e;
   s=pivot;
   e=n;
   while(s<=e)
   {
       int mid=(s+e)/2;

       if(key==arr[mid])
       {
           return mid;
       }
       else if(key<arr[mid])
       {

        e=mid-1;

       }
       else
       {
        s=mid+1;

       }

   }
   return -1;
}

int findposition(int arr[], int n, int key)
{

      int pivot=findpivot(arr,n);
      if(key>=arr[pivot] && key<=arr[n-1])
      {
          // BS  on second line
          return binarysearch(arr, pivot, n-1, key);

      }
      else
      {
          // BS on first line
          return binarysearch(arr,0, pivot-1, key );
      }

}
