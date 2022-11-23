#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key);
int main()
{
    int size;
    cout<< " Enter size of array : ";
    cin>>size;
    int arr[size];
cout<< " Enter sorted order array min to max : ";
for(int i=0; i<size; i++)
{
    cin>>arr[i];
}

int key;
cout<< " Enter key : ";
cin>>key;

cout<<binarysearch(arr,size,key);
return 0;
}

int binarysearch(int arr[], int n, int key)
{
   int s=0,e=n-1;

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
