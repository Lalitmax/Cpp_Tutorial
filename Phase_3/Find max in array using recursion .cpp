#include<iostream>
  using namespace std;
  int findmax(int *arr, int s,int size)
  {
      if(s==size)
        return arr[s];
      if(arr[s]>findmax(arr, s+1,size))
      {
          return arr[s];
      }
      else
      {
          return findmax(arr, s+1, size);
      }
  }
   int main()
   {
       int size;
       cout<< "size of array : ";
       cin>>size;
       int arr[10000];
       for(int i=0; i<size;i++)
       {
           cin>>arr[i];
       }
      cout<< "max --> "<< findmax(arr, 0, size-1);

       return 0;
   }
