#include<iostream>
using namespace std;
int  getlength(char name[]);
int main()
{
    char name[50];

    cout<< "Enter your name  "<<endl;
    cin>>name;

  cout<<"count = "<<getlength(name);
    return 0;
}
int  getlength(char name[])
{
       int count=0;
     for(int i=0; name[i]!='\0'; i++)
    {
            count++;
    }
    return count;
}
