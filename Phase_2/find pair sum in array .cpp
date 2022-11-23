#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[10000];
    cout<< " Enter array sorted order 1 to n order b : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<< " Enter key : ";
    cin>>key;
    //find pair sum;
    for(int i=0; i<n; i++)
    {
       for(int j=1
           ; j<n; j++)
       {
           if(arr[i]+arr[j] ==key)
           {
               //check
               if(arr[i]<arr[j])
               {

                     cout<<arr[i]<<" "<<arr[j]<< "    " ;
                     break;

             }
           }
       }
    }

    return 0;
}
