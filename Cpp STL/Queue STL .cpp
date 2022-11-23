#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> q;
    q.push("lalit");
    q.push("kumar");
    q.push("yadav");

    cout<<"first element --> " <<q.front()<<endl;
    cout<< "before pop size --> "<<q.size()<<endl;
    q.pop();
    cout<<"after pop size --> "<<q.size()<<endl;


    return 0;
}
