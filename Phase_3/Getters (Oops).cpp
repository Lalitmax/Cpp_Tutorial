#include<iostream>
 using namespace std;
  class student
  {
    public:
    float area(float r)
        {
            return  3.14*r*r;
        }

        int area(int l, int r)
        {
            return l*r;
        }
  };

  int main()
  {
       student calc;
      cout<< calc.area(2)<<endl;;
    cout<<   calc.area(2,3);

      return 0;
  }
