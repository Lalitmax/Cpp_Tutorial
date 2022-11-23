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
          cout<< "default constructor"<< endl;;
      }

    // making  parameterised  constructor
    student(string s, string g, int ag)
    {
        cout<< "parameterized constructor"<<endl;
        name=s;
        gender=g;
        age=ag;
    }

student ( student &a)
{
    cout<< "copy constructor"<<endl;
    name =a.name;
    gender=a.gender;
    age=a.age;
}

~student(){
cout<< "destructor called "<<endl;;
}
};

int main()
{
    student a("lalit", "male",19);

    student b;
    student c=a;  // copy constructor
    return 0;
}

