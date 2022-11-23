#include<iostream>
using namespace std;    // you can set default argument from right sides
void print(int arr[], int size , int start=0)
{
    for(int i=start; i<size; i++)
        cout<<arr[i];
}
int main()
{
    int arr[7]= {1,4,2,6,8,9,5};
    int size=7;
    print(arr,size);

    return 0;
}
