#include<iostream>
using namespace std;

class student

{
    public:
    string name;
    string gender ;
    int age;
      // making default constructor
      student()
      {
          cout<< "default constructor";
      }


  /*  void printinfo()
    {
           cout<< "name --> "<<name<<endl<<endl;
         cout<< "gender --> "<<gender<<endl<<endl;
         cout<< "age --> "<<age<<endl<<endl;
  }
   */
};
int main()
{

   student b;
   // for dafault constructor
    return 0;
}
