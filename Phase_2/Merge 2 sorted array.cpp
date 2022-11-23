#include<iostream>
using namespace std;
void mergsort(int arr1[], int n1, int arr2[], int n2, int arr3[]);
void  printfinal(int ans[], int n);
int main()
{
    int n1=7, n,n2=5;
    int arr1[n1]={1,4,6,7,8,9,10};
    int arr2[n2]={2,3,5,11,12};
    int arr3[n=n1+n2]={0};

     mergsort(arr1,n1,arr2,n2,arr3);
    printfinal(arr3,n);

}
void mergsort(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
       arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    // copy first array of element
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
  // copy second array of element

  while(j<n2)
  {
      arr3[k++]=arr2[j++];
  }
}

void  printfinal(int ans[], int n)
{

for(int i=0; i<n; i++)
{
    cout<<ans[i]<< " ";
}
}
