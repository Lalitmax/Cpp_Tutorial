#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a alphabet : ";
    cin>>ch;
    char  isUppercaseVowel,islowercasevowel;

    islowercasevowel=ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    isUppercaseVowel=ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U';

    if(isUppercaseVowel|| islowercasevowel)
    {
        cout<< "vowel";
    }
    else
    {
        cout<< "consonent";
    }


    return 0;
}
