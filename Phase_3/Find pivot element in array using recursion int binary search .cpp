#include<iostream>
using namespace std;
 int findpivot(int *arr, int s, int e)
 {
     if(s>=e)
     {
         return arr[s];
     }
     int mid=s+(e-s)/2;
     if(arr[mid]>=arr[0])
     {
         return findpivot(arr, mid+1,e);
     }
     else
     {
         return findpivot(arr, s, mid);
     }
 }
int main()
{
    int size=7;
      int arr[]={7,8,9,2,3,4,5};
    cout<<"Pivot element --> "<< findpivot(arr, 0,size-1);
     return 0;

}
