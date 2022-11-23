#include<iostream>
 using namespace std;
  void bublesort(int *arr, int size)
  {
      if(size==0 || size==1)
        return ;
      for(int i=0; i<size-1; i++)
      {
          if(arr[i]>arr[i+1])
          {
              swap(arr[i],arr[i+1]);
          }
      }
      bublesort(arr,size-1);
  }
  int main()
  {
      int size;
      cout<< "Enter size of array : ";
      cin>>size;

      int arr[10000];
      cout<< "Enter array : ";
      for(int i=0; i<size; i++)
      {
          cin>>arr[i];
      }
   bublesort(arr,size);
     for(int i=0; i<size; i++)
      {
          cout<<arr[i];
      }

  }
