#include<iostream>
using namespace std;
int findkey(int arr[], int size, int key);
int main()
{

 int size;
 cout<< " Enter size of array : ";
 cin>>size;
 int arr[size];
 for(int i=0; i<size; i++)
 {
     cin>>arr[i];
 }
 int key;
 cout<< " Enter key for finding : ";
 cin>>key;
 cout<<findkey(arr, size, key);
 return 0;
}

int findkey(int arr[], int size, int key)
{
    for(int j=0; j<size; j++)
    {
        if(key==arr[j])
        {
            return j;
        }

    }
return -1;

}
