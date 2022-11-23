#include<iostream>
 using namespace std;

 class lalit
 {
 public:
    void print()
    {
        cout<< "hello lalit";
    }

     void print( string s)
    {
        cout<< "\nhello lalit , "<< s<<endl;
    }

    void print(string s , int age )
    {
        cout<< s << " "<< age <<endl;
    }

    int print(char g)
    {
        return 'A';
    }

 };

 int main()
 {
     lalit info;
     info.print();
     info.print("rahul");
     info.print("rahul ", 18);
     cout<< "'ASCII value of A = "<< info.print('A')<<endl;

     return 0;
 }

