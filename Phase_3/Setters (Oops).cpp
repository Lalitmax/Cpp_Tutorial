#include<iostream>


 using namespace std;

  class student
  {

      private:
      string name ;
      public:
      void  setname(string s)
      {
          name=s;
      }

      void printinfo()
      {
          cout<<name<<endl;
      }
  };

   int main()
  {
      student info;
  string  s;
      cin>>s;
      info.setname(s);
      info.printinfo();

      return 0;

  }
