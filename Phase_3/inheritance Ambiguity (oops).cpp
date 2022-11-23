#include<iostream>
 using namespace std;

 class A
 {
   public:
    void  fun()
    {
         cout<< " inside class A "<<endl;
    }

 };

 class B
 {
   public:
    void  fun()
    {
         cout<< " inside class B "<<endl;
    }

 };

 class C : public A,public B
 {

 };


  int main()
  {
      C Object;

      Object.A :: fun();
      Object.B :: fun();



      return 0;
  }
