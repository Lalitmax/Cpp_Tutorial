#include<iostream>
using namespace std;
void print(int *ptr )
{
    cout<<ptr<<endl;
    cout<<*ptr;
}
void update(int *p)
{
  //  p=p+1;
  //  cout<<"inside "<<p<<endl;
  *p=*p+1;
}

 int getsum(int  arr[], int n)
 {
     int sum=0;
    /// cout<<endl<<sizeof(arr)<<endl;
     for(int i=0; i<n; i++)
     {
         sum+=arr[i];
     }
     return sum;
 }
int main()
{
    int value=5;
    int *ptr=&value;
  //   print(ptr);
  cout<< "before --> "<<*ptr<<endl;
update(ptr);
cout<< "after --> " <<*ptr<<endl;

int arr[20]={1,2,3,4,5};
  cout<< "sum is --> "<<getsum(arr+2,5)<<endl;
  cout<< "sum is --> "<<getsum(arr,5)<<endl;
    return 0;
}
