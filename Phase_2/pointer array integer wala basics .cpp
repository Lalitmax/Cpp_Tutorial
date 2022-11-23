#include<iostream>
using namespace std;
int main()
{

   int arr[10]={9,5,6,7};

   cout<<"address of first memory block is  "<<arr<<endl;
   cout<<"address of first memory block is  "<<&arr[0]<<endl;
   cout<<"value of first memory block is  "<<*arr<<endl;
   cout<<"value of first memory block is  "<<*arr+1<<endl;
   cout<<"value of first memory block is  "<<*(arr+1)<<endl;
   cout<<"value of first memory block is  "<<(*arr)+1<<endl;
   cout<<"value of first memory block is  "<<arr[0]<<endl;
   cout<<"value of first memory block is  "<<2[arr]<<endl;

   int temp[10]={3,5};
   cout<< "size of temp is "<<sizeof(temp)<<endl;
   cout<< "size of temp is "<<sizeof(*temp)<<endl;
   int *ptr=&temp[10];
   cout<< "size of ptr "<<sizeof(ptr)<<endl;
   cout<< "size of ptr "<<sizeof(*ptr)<<endl;
   cout<< "size of ptr "<<sizeof(&ptr)<<endl;

    int a[20]={1,2,3,4};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    int *p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

      int arr2[10];
      int *ptr2=&arr2[0];
      cout<<ptr2<<endl;
      ptr2=ptr2+1;
      cout<<ptr2<<endl;

         return 0;
}

