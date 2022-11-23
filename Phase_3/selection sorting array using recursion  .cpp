#include<iostream>
 using namespace std;

  void selectionsort(int *arr, int i,int size1,int size2)
  {
      if(size2==0 || size2==1){
         return ;
      }

      for(int j=i+1; j<size1; j++)
      {
          if(arr[i]>arr[j])
          {
              swap(arr[i],arr[j]);
          }
      }
      selectionsort(arr,i+1, size1,size2-1);
  }
 int main()
 {
     int size;
     cout<< "Enter size of array : ";
     cin>>size;
     int arr[10000];
     for(int i=0; i<size; i++){
         cin>>arr[i];
     }

     selectionsort(arr,0,size,size);

       for(int i=0; i<size; i++)
       {
            cout<<arr[i];
       }

    return 0;
 }

