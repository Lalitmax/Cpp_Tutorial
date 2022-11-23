#include<iostream>
using namespace std;
int getlength(char name[]);
void reverse(char name[], int len);
int main()
{
    char name[100000];
    cout<< "Enter a string : ";
    cin>>name;
 int len =  getlength(name);
 reverse(name,len);
cout<<name;
 return 0;
}
int getlength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }

    return count;
}
void reverse(char name[], int len)
{
    int s=0, e=len-1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }

}

