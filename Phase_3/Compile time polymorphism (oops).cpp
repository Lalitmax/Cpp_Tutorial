#include<iostream>
 using namespace std;


  //  Function Overloading
 class student
 {
 public:
     void print()
     {
         cout<< "******hello****** "<<endl;
     }

     void print(string name  )
     {
         cout<< name<<endl;
     }
     void print(string name , int age)
     {
         cout<< name<<" "<<age<<endl;
     }

     void print(string name , int age ,int height )
     {
         cout<<name  << " " << age << " "<<height<<endl;
     }
 };

 // Operator Overloading
 class OO
 {

 public:
     int a;
     int b;


     int add()
     {
         return a+b;
     }

     void operator+ (OO &temp)
     {
         int value1 = this->a;
         int value2=temp.a;

         cout<< " outpute " <<value2 - value1;
     }

     void operator() ()
     {
         cout<< "\n mai bracket hu "<<this->a<<endl;
     }

 };

  int main()
  {
      student info;
      info.print();
      info.print("lalit");
      info.print( "lalit ", 19);
      info.print("lalit ", 19, 6.6);

      OO obj1,obj2;
      obj1.a=5;
      obj2.a=7;

      obj1 + obj2;

      obj1();

      return 0;

  }
