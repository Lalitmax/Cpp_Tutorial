#include<iostream>
 using namespace std;
 int main()
 {
     int n;
     cout<< " Enter size of 2D array n1 ,n2=n :  ";
     cin>>n;
     int **arr=new int *[n];

     // creating 2D array

     for(int i=0; i<n; i++)
     {
         arr[i]= new int [n];
     }

     //taking input
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             cin>>arr[i][j];
         }
     }
     // taking output
      for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             cout<<arr[i][j]<< " ";
         }
         cout<<endl;
     }

     //releasing memory
     for(int i=0; i<n; i++)
     {
         delete []arr[i];  // (part of new int *[n])
     }

     delete []arr;  // (part of int **arr)

     return 0;
 }
