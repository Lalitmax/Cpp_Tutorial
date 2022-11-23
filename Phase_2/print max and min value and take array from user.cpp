#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size of array : ";
    cin>>n;
    cout<< " Enter arrays : ";
    int arr[n];
    int maxno=  INT_MIN;
    int minno=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n; j++)
    {
        maxno=max(maxno,arr[j]);
        minno=min(minno,arr[j]);

    }

    cout<< "max = "<<maxno<<"\n"<< "min = "<<minno;
}
