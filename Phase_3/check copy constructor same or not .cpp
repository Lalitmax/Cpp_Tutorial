#include<iostream>
  using namespace std;
   class student
   {
   public:
     string name ;
      string gender;
      int age;
      student(string n, string g, int ag)
      {
          cout<< "parameterized constructor"<<endl;
          gender=g;
          age=ag;
      }

      student()
      {
          cout<< "default constructor"<<endl;
      }

      student(student &a)
      {
           cout<< "copy constructor"<<endl;
          name =a.name;
          gender =a.gender;
         age =a.age;
      }

 bool operator == (student &a)
 {
     if(name == a.name && gender== a.gender && age == a.age)
     {
         return true;
     }
     else
     {
         return false;
     }
 }


   };
    int main()
    {
        student a("lalit", "male", 19);
         student b;
         student c=a;

          if(c==a)
         {
             cout<< "same"<<endl;
         }
         else
         {
             cout<< "not same"<<endl;
         }

         return 0;

    }
