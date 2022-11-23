#include<iostream>
 using namespace std;
 void reverse(string &ch, int s, int e)
 {
     if(s>e)
     {
         return ;
     }

     swap(ch[s], ch[e]);
     s++;
     e--;
     reverse(ch,s,e);
 }


 int main()
 {
     string ch="lalit";
  int   len=ch.length()-1;
     reverse(ch,0,len);
     cout<<ch;
     return 0;
 }
