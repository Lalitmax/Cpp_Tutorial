#include<iostream>
using namespace std;
 int add(int num1, int num2);
int main()
{
    int num1,num2;
    cout<< " Enter two numbers : ";
    cin>>num1>>num2;
    cout<<add(num1,num2);
    return 0;
}

int add(int num1, int num2)
{
    int sum;
    sum=num1 +num2;
    return sum;
}
