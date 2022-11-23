#include<iostream>
using namespace std;

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

class Germanshepherd : public dog
{

};

 int main()
 {
     Germanshepherd g;
     g.speak();

     return 0;
 }
