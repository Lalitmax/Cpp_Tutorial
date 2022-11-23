#include<iostream>
  using namespace std;
  int findpeak(int *arr, int s, int e)
  {
      if(s>=e)
      {
          return s;
      }
      int mid=s+(e-s)/2;
      if(arr[mid]<arr[mid+1])
      {
          return findpeak(arr, mid+1, e);
      }else
      {
          return findpeak(arr, s, mid);
      }
  }
  int main()
  {
      int size;
      cout<< "Enter size : ";
      cin>>size;
      int arr[10000];
      for(int i=0; i<size; i++)
      {
          cin>>arr[i];
      }
      cout<< "peak index  --> "<<findpeak(arr,0,size-1);
      return 0;
  }
