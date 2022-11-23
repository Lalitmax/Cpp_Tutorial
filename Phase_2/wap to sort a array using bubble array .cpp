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
    // bubble sort
  for(int i=0; i<n-1; i++)
  {
      for(int j=0; j<n-1-i; j++)
      {
          if(arr[j]>arr[j+1])
            //swap
          {
              int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          }
      }
  }
    for(int k=0; k<n; k++)
    {
        cout<< arr[k]<< "  ";
    }

    return 0;
}
