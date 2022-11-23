#include<iostream>
 using namespace std;
  class student
  {
  private:
     string name;
     int age;
      int height;
   public:
      void setname(string name)
      {
          this->name=name;
      }

      string getname()
      {
          return name;
      }

  };

  int main()
  {
      student first;
      first.setname("lalit");
      cout<< first.getname()<<endl;

      return 0;
  }
