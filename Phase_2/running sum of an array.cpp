#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< " Enter size of an array : ";
    cin>>n;
    int array[n];

    int array2[n];

    cout<< " Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
for(int j=0; j<n; j++)
{

    int s=s+array[j];
    array2[j]=s;
    cout<<array2[j]<< " ";

}
    return 0;
}
