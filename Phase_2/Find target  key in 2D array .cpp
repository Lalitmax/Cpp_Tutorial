#include<iostream>
using namespace std;
bool findtargetkey(int arr[2][3], int target);
int main()
{
    //create 2D array
    int arr[2][3];
    cout<<" Enter array : ";

    // input array row wise
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }
    int target;
    cout<< "Enter target key : ";
    cin>>target;
   if(findtargetkey(arr,target))
   {
       cout<< "present target key in this array ";
   }
   else
   {
       cout<< " Not present target key in this array ";
   }


    return 0;
}
bool findtargetkey(int arr[2][3], int target)
{

    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)

        {
            if(arr[row][col]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}
