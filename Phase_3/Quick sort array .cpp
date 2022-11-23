#include<iostream>
 using namespace std;
  int partition(int *arr, int s, int e)
  {
      // first array of  element
      int pivot=arr[s];

       int cnt=0;
       for(int i=s+1; i<=e; i++)
       {
           if(arr[i]<=pivot)
           cnt++;
       }

       int pivotindex= cnt+s;
      // swapping

      swap(arr[s], arr[pivotindex]);
      int i=s,j=e;

      while(i<pivotindex && j>pivotindex)
      {
          while(arr[i]<pivot){
            i++;
          }

          while(arr[j]>pivot){
            j--;
          }

          if(i<pivotindex && j>pivotindex)
          {
              swap(arr[i++],arr[j--]);
          }


      }

      return pivotindex;

  }
  void quicksort(int *arr , int s, int e)
  {
      // base case
      if(s>=e)
        return;
      // partition
      int p=partition(arr, s, e);

      //please sort left side array
      quicksort(arr,s,p-1);

     //please sort left side array
     quicksort(arr, p+1, e);


  }
  int main()
  {
      int arr[]= {7,3,5,1,2,9,0,7};
      int size=8;
      // function call

      quicksort(arr,0, size-1);

      // print  sorted array
       for(int i=0; i<size; i++)
       {
           cout<<arr[ i]<<  " ";
       }

      return 0;
  }
