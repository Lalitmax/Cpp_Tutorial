#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter unsorted array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<< "move zeroes is = ";
    int nonezero=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
           swap( arr[i], arr[nonezero]);
           nonezero++;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
