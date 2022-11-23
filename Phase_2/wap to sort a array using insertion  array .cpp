#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter array of size : ";
    cin>>n;
    int arr[n];
    cout<< " Enter unsorted array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //insertion array

   for(int i=1; i<n; i++)
   {
       int temp=arr[i];
       int j=i-1;
       while(j>=0 && temp<arr[j])
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
   }

    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }

    return 0;
}
