#include<iostream>
using namespace std;
int getsum(int *arr, int size)
{
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainigpart=getsum(arr+1, size-1);
    cout<<remainigpart;

    int sum=arr[0]+remainigpart;
    return sum;
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
cout<<endl;
    cout<<getsum(arr,size);
    return 0;
}
