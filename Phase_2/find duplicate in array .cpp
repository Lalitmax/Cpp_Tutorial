#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size off array : ";
    cin>>n;
    int arr[10000];
    cout<< " Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++ )
        {
            if(arr[i]==arr[j])
            {
            cout<<arr[i]<< "  " ;

            }
        }

    }
    return 0;
}
