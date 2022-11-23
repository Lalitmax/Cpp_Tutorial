#include<iostream>                                       // question --> 1 2 3 4 5 6 7 8 9
using namespace std;
void printsumofcolumn(int arr[3][3]);

int main()
{
    // create 2D array
    int arr[3][3];
    cout<< "Enter array : ";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }
    // print
     for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr[row][col]<< " ";
        }
        cout<<endl;
    }

    cout<<" column wise sum "<<endl;
    printsumofcolumn(arr);

    return 0;
}
void printsumofcolumn(int arr[3][3])
{
     // sum of column
    for(int col=0; col<3; col++)
    {  int sum=0;
        for(int row=0; row<3; row++)
        {
        sum+=arr[row][col];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}
