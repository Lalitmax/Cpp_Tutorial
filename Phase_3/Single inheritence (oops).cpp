#include<iostream>
using namespace std;
//single Inheritance
class animal
{
    public:
    int age;
    int weight;

    void speak()
    {
        cout<< "speaking "<<endl;
    }

};

class dog : public animal
{

};

 int main()
 {
     dog d;
     d.speak();

     return 0;
 }

