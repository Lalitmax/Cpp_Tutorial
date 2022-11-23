
#include<iostream>
  using namespace std;
  bool check(int arr[][4], int key)  // 1 2 3 4 5 6 7 8 9 10 11 12
  {

      for(int i=0; i<3; i++)
      {
          for(int j=0; j<4; j++)
          {
           if(arr[i][j]==key)
           {
               return true;
           }
          }
      }
      return false;
  }
  int main()
  {
      int arr[3][4];
      cout<< "Enter array ";
      for(int i=0; i<3; i++)
      {
          for(int j=0; j<4; j++)
          {
              cin>>arr[i][j];
          }
      }
        int key;
        cout<< "Enter key: ";
        cin>>key;

      if(check(arr,key))
      {
          cout<< "key is present ";
      }
      else
      {
          cout<< "key is not present ";
      }

    return 0;

  }
