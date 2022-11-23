#include<iostream>
#include<cmath>
using namespace std;
int octaltodecimal(int num);
int main()
{
   int num;
   cout<< " Enter binary number : ";
   cin>>num;
   cout<<octaltodecimal(num);
   return 0;

}
int octaltodecimal(int num)
{
    int inc=0;
    int lastdigit;
    int total=0;
    while(num>0)
    {
        lastdigit=num%10;
        total =total+lastdigit*pow(8,inc);
        num=num/10;
        inc++;
    }
    return total;
}

