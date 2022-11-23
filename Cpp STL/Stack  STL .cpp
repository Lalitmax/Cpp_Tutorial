#include<iostream>
#include<stack>  // last in first out concept;
using namespace std;
int main()
{

  stack<string> s;
  s.push("lalit");
  s.push("kumar");
  s.push("yadav");

  cout<< "top element --> "<<s.top()<<endl;

  s.pop();

  cout<<"after pop "<<endl;
  cout<< "top element --> "<<s.top()<<endl;
  cout<<"size of stack --> "<<s.size()<<endl;
  cout<<"empty or not --> "<<s.empty()<<endl;

return 0;
}
