 #include<iostream>
 using namespace std;
   void merge(int *arr, int s, int mid, int e)
   {
       int len1= mid-s+1;
       int len2=e-mid;
      // create dynamic array
       int *first= new int [len1];
       int *second= new int [len2];
        // copying array
        int k=s;
        for(int i=0; i<len1; i++)
        {
            first[i]=arr[k++];
        }

        for(int j=0 ; j<len2; j++)
        {
            second[j]=arr[k++];
        }

        int i,j;
        i=j=0;
        k=s;

        while(i<len1 && j<len2)
        {
            if(first[i]<second[j])
            {
                arr[k++]=first[i++];
            }
            else
            {
                arr[k++]=second[j++];
            }
        }

        while(i<len1)
        {
             arr[k++]=first[i++];
        }
        while(j<len2)
        {
            arr[k++]=second[j++];
        }
   }

 void mergesort(int *arr, int s, int e)
 {
     //base case
     if(s<e)
     {
         int mid = s+ (e-s)/2;
         mergesort(arr, s,mid);
         mergesort(arr, mid+1,e);

         merge(arr,s,mid,e);
     }
 }

  int main()
  {
      int arr[]={ 6,1,7,3,2,5,4};
      int size=7;

     mergesort(arr,0,size-1);

     //print array
       for(int i=0; i<size; i++)
      {
        cout<<arr[i]<< " ";
      }

     return 0;
  }

