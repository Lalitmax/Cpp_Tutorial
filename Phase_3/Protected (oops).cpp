#include<iostream>
 using namespace std;

  class parent
  {
     protected:
    string name;
    int age;



  };

  class child :public parent
  {
  public:

     void setname(string ne)
     {
         name=ne;
     }

     void setage(int age)
     {
         this->age=age;
     }


    void printinfo()
    {
       cout<< "name--> "<< name<<endl;
       cout<< "age--> "<< age<<endl;
    }

  };

  int main()
  {
      //create object
      child info;
      info.setname("lalit");
      info.setage(19);
      //print info
      info.printinfo();
      return 0;
  }
