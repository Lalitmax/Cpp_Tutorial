#include<iostream>
using namespace std;
int finduniquenumber(int arr[], int n);
// example= {1,2,4,3,1,2,4} like 4 is unique number
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[100000];
    cout<< " Enter array : ";
    for (int i=0; i< n; i++)
    {
        cin>>arr[i];
    }
 cout<<finduniquenumber(arr,n);
    return 0;
}

int finduniquenumber(int arr[], int n)
{

int ans=0;
    for(int i=0; i<n; i++)
    {
 ans=ans^arr[i];


    }
    return ans;

}
