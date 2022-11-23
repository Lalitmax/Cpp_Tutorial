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
         name=new char[100];
     }



     student(student & temp)
     {
         char *ch =new char[ strlen(temp.name) +1];


            strcpy(ch,temp.name );

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
      lalit.sethealth(445);
      lalit.setlevel('D');
      char name[6]="lalit";
      lalit.setname(name);
      //copy constructor


      lalit.print();
      student lalit1(lalit);


      lalit1.print();
      lalit1.name[0]='b';
      lalit1.print();
      lalit.print();

      return 0;

  }
