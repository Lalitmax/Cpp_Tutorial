#include<bits/stdc++.h>
using namespace std;
int hexadecimaltodecimal(string str);

int main()
{
    string str;
    cout<< " Enter hexadecimal number =  ";
    cin>>str;
    cout<<"Hexadecimal is = "<<hexadecimaltodecimal(str);

    return 0;
}

int hexadecimaltodecimal(string str)
{
      int x=1;
      int total=0;
      int n=str.size();
      for(int i=n-1; i>=0; i--)
      {
          if(str[i]>='0' && str[i]<='9' )
          {
              total += x*(str[i]-48);
          }
          else if( str[i]>='A' && str[i]<='F')
          {
              total+=x*(str[i]-55);
          }

          x*=16;

      }
   return total;


}












