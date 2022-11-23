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

      student(student &temp)
      {
          char *ch =new char[ strlen(temp.name) +1 ];

          strcpy(ch, temp.name);
          this->name=ch;
          this->health=temp.health;
          this->level=temp.level;
      }

      void print()
      {
           cout<< " [ name -> "<<name;
          cout<< "health -> "<<health;
          cout<< "level -> "<<level<< " ]";

          cout<< endl;
          cout<< endl;
      }
      void sethealth(int health)
      {
          this->health=health;
      }

       void setlevel(char  level)
       {
           this->level=level;
       }

       void setname(char name[])
       {
           strcpy(this->name,name);
       }

       ~student()
       {
           cout<< "destructor called"<<endl;
       }

  };

  int main()
  {
      student lalit;
      lalit.sethealth(34);
      lalit.setlevel('A');
       char name[6]="lalit";
       lalit.setname(name);
       lalit.print();

       // copy constructor

       student lalit1(lalit);
       lalit1.print();
       lalit1.name[0]='b';
       lalit1.print();
       lalit.print();

       lalit=lalit1;

       lalit.print();
       lalit1.print();

       return 0;
  }










