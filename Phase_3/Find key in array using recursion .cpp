#include<iostream>
using namespace std;
bool lenearsearch(int arr[], int size, int key)
{
    if(size==0)
    {
        return 0;
    }
   if(arr[0]==key)
   {
       return true;
   }
   else
   {
     bool remainingpart=lenearsearch(arr+1, size-1, key);
return remainingpart;
   }

}

int main()
{
      int size;
    cout<< "Enter array of size : ";
    cin>>size;
    int arr[10000];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<< "Enter key :";
    cin>>key;
   if(lenearsearch(arr,size,key))
   {
       cout<< "present here ";
   }
   else
   {
       cout<< "not present ";
   }
    return 0;
}
