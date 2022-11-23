#include<iostream>
 using namespace std;

   class human
   {
   public:
    string name;
    int age;
     int weight;
     void setname(string name)
     {
         this->name=name;
     }

     void setage(int age)
     {
         this->age=age;
     }

     void setweight(int weight)
     {
         this->weight=weight;
     }

   };

   class male :public human
   {
       public:
       void sleep()
       {
           cout<< "male is sleeping mode "<<endl;
       }
   };

   class female :public human
   {
       public:
       void sleep()
       {
           cout<< "female is sleeping mode "<<endl;
       }
   };


  int main()
  {
      //create male object
      male info;

      info.setname("lalit");
      info.setage(19);
      info.setweight(57);

      //print info
      cout<<info.name<<endl;
      cout<<info.age<<endl;
      cout<<info.weight<<endl;
      info.sleep();

      //create female object
       cout<<endl;
       cout<<endl;
      female info2;

     info2.setname("pratibha");
      info2.setage(16);
      info2.setweight(45);

       cout<<info2.name<<endl;
      cout<<info2.age<<endl;
      cout<<info2.weight<<endl;
       info2.sleep();


      return 0;
  }









