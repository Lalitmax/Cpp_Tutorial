#include<iostream>
 using namespace std;
 class animal
 {
    public:
        int  age;
         int weight;

         void bark()
         {
             cout<< "barking "<<endl;
         }


 };

 class human
 {
     public:
         void speak()
         {
             cout<< "speaking "<<endl;
         }

 };

 // multiple inheritence
 class hybrid : public animal , public human
 {

 };

  int main()
  {
      hybrid h;
      h.speak();
      h.bark();


      return 0;

  }
