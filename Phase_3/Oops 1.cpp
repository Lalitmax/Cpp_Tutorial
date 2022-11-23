#include<iostream>
 using namespace std;

  class student {

      public:
       string name;
       string gender;
       int age;

       void printinfo() {

              cout<< " name --> "<<name<<endl<<endl;
              cout<<"gender --> "<<gender<<endl<<endl;
              cout<<" age --> "<<age<<endl<<endl;


       }


  };

  int main()
  {
      student arr[3];
      for(int i=0;i <3; i++ )
      {
          cout<< "Enter name ";
          cin>>arr[i].name;
          cout<< "Enter gender";
          cin>>arr[i].gender;
          cout<< "Enter age";
          cin>>arr[i].age;
      }

      for(int i=0; i<3; i++)
      {
          arr[i].printinfo();
      }
     return 0;
  }
