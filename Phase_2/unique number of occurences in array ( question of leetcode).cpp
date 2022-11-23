#include<iostream>
using namespace std;
bool uniquenumberofoccurence(int arr[], int n);
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[10000];
    cout<<" Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<uniquenumberofoccurence(arr,n);
    return 0;
   }

    bool uniquenumberofoccurence(int arr[], int n)
   {
    int ans=0;

    for(int i=0; i<1; i++)
    {
       ans=ans^arr[i];

    }
    for(int j=0; j<n; j++)
    {
        ans =ans^j;
    }


return ans;
}
