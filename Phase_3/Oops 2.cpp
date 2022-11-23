#include<iostream>
using namespace std;

 class student
 {
     string name;
     public:
     string gender;
     int age;

     void setname(string s)
     {
         name=s;
     }
     void printinfo()
     {
         cout<< "name --> "<<name<<endl<<endl;
         cout<< "gender --> "<<gender<<endl<<endl;
         cout<< "age --> "<<age<<endl<<endl;
     }

 };

 int main()
 {
      student arr[3];
       for(int i=0; i<3; i++)
       {
           string s;
           cout<< "Enter name ";
           cin>>s;
           arr[i].setname(s);
           cout<< "Enter gender ";
           cin>>arr[i].gender;
           cout<< "Enter age ";
           cin>>arr[i].age;
       }

       for(int i=0; i<3; i++)
       {
           arr[i].printinfo();
       }
       return 0;
 }
