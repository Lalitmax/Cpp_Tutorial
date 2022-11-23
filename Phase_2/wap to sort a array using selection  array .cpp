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
    // selection array

   for(int i=0; i<n-1; i++)
   {
       for(int j=1+i; j<n; j++)
       {
           if(arr[i]>arr[j])
            //swap
           {
               int temp =arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }

       for(int i=0; i<n; i++)
       {
           cout<<arr[i]<< "  ";
       }
       return 0;
   }




