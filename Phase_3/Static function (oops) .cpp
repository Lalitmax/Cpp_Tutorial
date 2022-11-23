#include<iostream>
#include<bits.h>
 using namespace std;
  class student
  {
      public:
      int health;
      char level;
     static int timetocomplete;



       static int random()
       {
           return timetocomplete;
       }

  };

 int  student::timetocomplete = 1234;

  int main()
  {
      cout<< student::timetocomplete<<endl;
    cout<< student :: random<<endl;


      return 0;
  }
