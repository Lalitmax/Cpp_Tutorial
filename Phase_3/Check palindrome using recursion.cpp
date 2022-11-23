#include<iostream>
using namespace std;
 bool checkpalindrome(string &ch, int s, int e)
 {
     if(s>e)
     {
         return true;
     }
     if(ch[s]!=ch[e])
     {
         return false;
     }
     else
     {
       return   checkpalindrome(ch, s+1,e-1);
     }
 }
int main()
{
    string ch="absddba";
    bool isplaindrome=checkpalindrome(ch,0,ch.length()-1);

     if(isplaindrome)
     {
         cout<< "its palindrome";
     }
     else
     {
         cout<< "its not palindrome";
     }

    return 0;
}
