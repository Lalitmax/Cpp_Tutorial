#include<iostream>
using namespace std;
int getlength(char name[]);
bool checkpalindrome(char name[], int len);
char lowercase( char low);
int main()
{
    char name[10000];
    cout<<"Enter a string ";
    cin>>name;
    int len = getlength(name);

    if( checkpalindrome(name,len) )
    {
        cout<<"This string is palindrome";
    }
    else
    {
          cout<<"This string is not palindrome";
    }


    return 0;
}
int getlength(char name[])
{
    int count=0;
    for(int i=0 ; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
bool checkpalindrome(char name[], int len)
{
    int s=0, e=len-1;
    while(s<e)
    {
        if(name[s]!=name[e])
        {
            return 0;

        }
        else
        {
            s++;
            e--;
        }

    }
     return 1;
}


char lowercase( char low)
{
    if(low >= 'a' && low <='z')
    {
        return low;
    }
    else
    {
        char temp= low - 'A' + 'a';
        return temp;
    }
}
