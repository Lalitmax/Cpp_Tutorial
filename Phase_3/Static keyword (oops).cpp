#include<iostream>
#include<bits.h>
 using namespace std;
  class student
  {
      public:
      int health;
      char level;
     static int timetocomplete;



  };

  int  student :: timetocomplete = 5;

  int main()
  {
    cout<< student :: timetocomplete<<endl;


      return 0;
  }
