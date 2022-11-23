#include<iostream>
using namespace std;

class student

{
    public:
    string name;
    string gender ;
    int age;

    // making  parameterized  constructor
    student(string s, string g, int ag)
    {
        name=s;
        gender=g;
        age=ag;
    }


    void printinfo()
    {
           cout<< "name --> "<<name<<endl<<endl;
         cout<< "gender --> "<<gender<<endl<<endl;
         cout<< "age --> "<<age<<endl<<endl;
    }
};

int main()
{
    student a("lalit", "male",19);
    a.printinfo();
    return 0;
}
