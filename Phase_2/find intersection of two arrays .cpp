#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<< " Enter size of array first array  : ";
    cin>>n1;
    int arr[10000];

    cout<<" Enter  first array : ";
    for(int i=0; i<n1; i++)
    {
        cin>>arr[i];
    }
    cout<< " Enter size of array in second array  : ";
     cin>>n2;
      int brr[10000];
    cout<<" Enter  second  array : ";
   for(int i=0; i<n2; i++)
    {
        cin>>brr[i];
    }

int c=0;


      for(int i=0; i<n1 ; i++)
    {
        for(int j=0+c; j<n2; j++)

        {
            if(arr[i]==brr[j])
            {
           cout<<arr[i];
           c++;
               break;
            }
        }

    }




return 0;

}
