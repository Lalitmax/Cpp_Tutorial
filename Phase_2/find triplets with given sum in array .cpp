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
       for(int j=1; j<n; j++)
       {
          for(int k=2; k<n; k++)
           {
                if(arr[i]+arr[j] +arr[k] ==key)
           {
               //check
               if(arr[i]<arr[j]<arr[k])
               {

                     cout<<arr[i]<<" "<<arr[j] << " "<< arr[k] <<"    " ;
                     break;

             }
           }
           }
       }
    }

    return 0;
}

