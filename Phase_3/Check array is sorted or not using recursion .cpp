#include<iostream>
using namespace std;
  bool issorted(int *arr, int size)
  {
      if(size==0|| size==1)
     return true;
     if(arr[0]>arr[1])
     {
         return false;
     }
     else
     {
         bool remainingpart=issorted(arr+1, size-1);
        return remainingpart;

     }
  }
int main()
{
  int size;
    cout<<"Enter size of array : ";
    cin>>size;
      int arr[10000];

      for(int i=0; i<size; i++)
      {
          cin>>arr[i];
      }

      if(issorted(arr,size))
      {
          cout<<"sorted";
      }
      else
      {
          cout<< "unsorted";
      }

      return 0;
}
