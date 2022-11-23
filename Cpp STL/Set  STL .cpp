#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(0);
      cout<< "print num --> ";
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
s.erase(s.begin());

   cout<< "print num --> ";
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<< " 5 is present or not --> "<<s.count(5)<<endl;

    return 0;
}
