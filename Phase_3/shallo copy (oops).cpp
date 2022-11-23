#include<iostream>
#include<bits.h>
using namespace std;
  class student
  {
      int health;

      public:
       char *name;
      char level;

     student()
      {
          name=new char[100];
      }


      void print()
      {
          cout<< " [ name -> "<<name;
          cout<< "health -> "<<health;
          cout<< "level -> "<<level<< " ]";

          cout<< endl;
          cout<< endl;
      }
      void sethealth( int health)
      {
          this->health=health;
      }

      void setlevel(char level)
      {
          this->level=level;
      }

      void setname(char name[])
      {
           strcpy(this->name,name);
      }



  };

  int main()
  {
      student lalit;
      lalit.sethealth(45);
      lalit.setlevel('A');
      char name[6]="lalit";
     lalit.setname(name);
     lalit.print();


     student lalit2(lalit);
     lalit2.print();
     lalit2.name[0]='b';
     lalit2.print();
     lalit.print();




      return 0;
  }


