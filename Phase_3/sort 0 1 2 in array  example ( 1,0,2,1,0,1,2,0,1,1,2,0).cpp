#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[10000];
    cout<< " Enter array ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

 for(int i=0; i<n-1; i++)
 {
     for(int j=1+i;j<n; j++)
     {
         if(arr[i]>arr[j])
         {
             //swap
             int temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;

         }
     }

 }
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<< "   " ;
     }
     return 0;








}
