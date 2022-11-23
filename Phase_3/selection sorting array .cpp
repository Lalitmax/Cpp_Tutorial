#include<iostream>
using namespace std;
int main()
{
      // bubble sort array
    int size;
    cout<< " Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<< " Enter unsorting array : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    // time complexity:  0(n^2)

    for(int j=0; j<size-1; j++) // size minus 1 is liye kiya hu ki
                                               //  hame jaise 8 size hai to hame 7 tak hi check karna hai
    {
         int smallest=j;
        for(int k=j+1; k<size; k++)
        {
                if(arr[k] <arr[j])
                {
                 smallest=k;
                }                                                 // yaha par arr[k+a] is liye kiya hu ki ab ham vaha par jo 7 tak hi chalaya tha
        }
        swap(arr[smallest],arr[j]);                                                 // to yaha par ham 8 tak check kar sakte hai
    }
    for(int l=0; l<size; l++)
    {
        cout<<arr[l]<< " ";
    }
    return 0;
}

