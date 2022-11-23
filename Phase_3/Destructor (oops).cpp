#include<iostream>
#include<bits.h>
 using namespace std;
  class student
  {
  public:
     int health;
      char level;
       char *name;
       student()
       {
           name=new char [100];

       }

       void sethealth(int health)
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

       ~student()
   {
       cout<< "destructor called "<<endl;
   }

  };

    int main()
    {
        student lalit;   // isse call huaa destructor

        student *ch=new student ();

        delete ch;


     return 0;

    }


