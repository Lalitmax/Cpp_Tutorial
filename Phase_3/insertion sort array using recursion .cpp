#include<iostream>
using namespace std;
 void insertionsort(int *arr,  int size)
 {
     if(size<=1)
        return ;
     insertionsort(arr,size-1);
     int current= arr[size-1];
     int j=size-2;
     while(j>=0 && current<arr[j])
     {
         arr[j+1]=arr[j];
         j--;
     }
     arr[j+1]=current;
 }
int main()
{
    int size;
    cout<< " Enter size of array : ";
    cin>>size;
    int arr[10000];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    insertionsort(arr,size);
        for(int i=0; i<size; i++)
    {
       cout<<arr[i];
    }
}
