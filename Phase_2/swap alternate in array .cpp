#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[100000];
    cout<< " Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int i=0; i<n; i+=2)
    {
        int temp;
        if(i+1<n)
        {
     temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<< "  ";
    }

    return 0;
}
