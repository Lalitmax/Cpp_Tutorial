#include<iostream>
using namespace std;
void printsumofrows(int arr[3][4]);
 int largestnum(int arr[][4] );
                                                                // question --> 1 2 3 4 5 6 7 8 9 10 11 12
int main()
{

  int arr[3][4];


//taking input --> row wise input
for(int row=0; row<3; row++)
{
    for(int col=0; col<4; col++)
    {
        cin>>arr[row][col];
    }
}

//print
for(int row=0; row<3; row++)
{
    for(int col=0; col<4;col++)
    {
        cout<<arr[row][col]<<" ";
    }
     cout<<endl;
}
cout<< "sum of rows wise "<<endl;
printsumofrows(arr);

 int num=largestnum(arr);
 cout<<"row index is --> "<<num;

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
int largestnum(int arr[][4] )
{
    int maxi= INT_MIN;
    int rowindex=-1;
      for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {

            sum=sum +arr[row][col];

        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=row;
        }
    }
    cout<< "the maximum sum is --> "<<maxi<<endl;
    return rowindex;
}

