#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    int arr[10000];
    cout<< " Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


        int s,e;
        s=0;
        e=n-1;
        while(s<e)
        {
            //swap
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }


    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}
