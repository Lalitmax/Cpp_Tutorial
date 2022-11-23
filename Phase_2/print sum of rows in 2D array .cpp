#include<iostream>
using namespace std;                                                    // question --> 1 2 3 4 5 6 7 8 9 10 11 12
 void printsumofrows(int arr[3][4]);
int main()
{
     // create 2D array
    int arr[3][4];
    cout<< "Enter array : ";
    // input row wise
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }
printsumofrows(arr);
    return 0;
}
void printsumofrows(int arr[3][4])
{

    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {

            sum=sum +arr[row][col];
         cout<<arr[row][col]<<" ";
        }
        cout<< " -->  "<<sum<<endl;
    }
  cout<< endl;
}
