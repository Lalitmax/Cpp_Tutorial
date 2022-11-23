#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<< " Enter size of array : ";
    cin>>n;
    int arr[100000];
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
//bubble sort

for(int i=0; i<n-1; i++)
{
    // Optimise solution
    bool swapped=false;

     for(int j=0; j<n-i-1; j++)
     {
         if(arr[j]>arr[j+1])
         {
             //swap
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             swapped=true;
         }

     }
     if(swapped ==false)
    break;
}


    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}

