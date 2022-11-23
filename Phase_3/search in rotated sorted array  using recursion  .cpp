#include<iostream>
 using namespace std;             // rotated array = 7,8,9,1,2,3,4

bool binarysearch(int *arr, int s, int e, int key)
{
    if(s>e)
    {
      return   false;
    }
    int mid= s+(e-s)/2;
      if(arr[mid]==key)
      {
          return true;
      }
     if(arr[mid]<key)
     {
         return binarysearch(arr, mid+1, e,key);
     }
     else
     {
         return binarysearch(arr, s, mid-1, key);
     }

}

int findpivot(int *arr, int s, int e)
{
    if(s>=e)
    {
        return s;
    }

    int mid= s+(e-s)/2;
     if(arr[mid]>=arr[0])
     {
         return findpivot(arr, mid+1, e);
     }
     else
     {
         return findpivot(arr,s,mid);
     }

}
int main()
{
    int size;
    cout<< "Enter size of array : ";
    cin>>size;
    int arr[100000];
    cout<< "Enter rotated array : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<< "Enter key : ";
    cin>>key;
    int pivot= findpivot(arr, 0, size-1);
    if(arr[pivot]<=key && arr[size-1]>=key)
    {
        if(binarysearch(arr, pivot, size-1, key))
        {
            cout<< "key is present "<<endl;
        }
        else
        {
            cout<< "key is not present "<<endl;
        }

    }
    else
    {
    if(binarysearch(arr, 0 , pivot-1, key))
         {
            cout<< "key is present "<<endl;
        }
        else
        {
            cout<< "key is not present "<<endl;
        }
    }
    return 0;

}
