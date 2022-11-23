 #include<iostream>
using namespace std;
int getlen(char name[]);
bool checkpalindrome( char  name[], int len);
int lovercase(char lwcase);
int main()
{
    char name[100000];
    cout<< "Enter a string : ";
    cin>>name;
    int len =getlen(name);
    if(checkpalindrome(name,len))
    {
        cout<< "This is palindrome";
    }
    else
    {
        cout<< "This is not palindrome";
    }
    return 0;
}

// first function

int getlen(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

// second function

bool checkpalindrome( char name[], int len)
{
    int s=0,e=len-1;
    while(s<e)
    {
        if( lovercase(name[s])!= lovercase(name[e]))
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
int lovercase(char lwcase)
{

    if( lwcase >='a' && lwcase <='z')
    {
        return lwcase;
    }
    else
    {
        char temp = lwcase - 'A' + 'a';
        return temp;
    }


}
