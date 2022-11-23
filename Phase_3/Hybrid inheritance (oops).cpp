#include<iostream>
 using namespace std;
// Hierarchical Inheritance
 class A
 {
    public:
    void fun1()
    {
        cout<< "inside function 1"<<endl;
    }
 };

 class B : public A
 {
    public:
    void fun2()
    {
        cout<< "inside function 2"<<endl;
    }
 };

 class C
 {
    public:
     void fun3()
    {
        cout<< "inside function 3"<<endl;
    }
 };

 class D  : public B , public C
 {
    public:
     void fun4()
    {
        cout<< "inside function 4"<<endl;
    }

 };

  int main()
  {
      D d;
      d.fun1();
      d.fun2();
      d.fun3();
      d.fun4();

      return 0;
  }
