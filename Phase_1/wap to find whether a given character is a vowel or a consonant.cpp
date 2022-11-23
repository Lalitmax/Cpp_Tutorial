#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<< " Enter a character :";
    cin>>ch;
    int a,b;
    a=ch=='a' || ch=='i'|| ch=='o'|| ch=='u'|| ch=='e';
    b=ch=='A' || ch=='I'|| ch=='O'|| ch=='U'|| ch=='E';
    if(a||b)
    {
        cout<<"vowel ";
    }
    else
    {
        cout<< "Consonant";
    }

    return 0;
}
