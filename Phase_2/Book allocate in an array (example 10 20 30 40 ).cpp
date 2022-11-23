#include<iostream>
using namespace std;
int bookallocate(int arr[], int n,int m);
bool ispossible(int arr[],int n,int m, int mid);
int main()
{

    int n=4;


    int arr[10000]={10,20,30,40};

    int m=2;

 cout<< " pages Allocate = " <<bookallocate(arr,n,m);

return 0;
}

int bookallocate(int arr[], int n,int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    int e=sum;

    while(s<=e)
    {
        int mid= s+(e-s)/2;
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    return ans;
}

bool ispossible(int arr[],int n,int m, int mid)
{

   int studentcount=1;
   int pagesum=0;
   for(int i=0; i<n; i++)
   {
       if(pagesum + arr[i] <=mid)
       {
           pagesum+=arr[i];
       }
       else
       {
           studentcount++;
           if(studentcount>m || arr[i]>mid)
           {
               return false;
           }
           pagesum=arr[i];
       }
   }
    return true;
}

