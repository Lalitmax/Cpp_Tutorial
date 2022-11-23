#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int ,string> m;
    m[1]= "lalit";
    m[2]= "kumar";
    m[13]= "yadav";
    // i cn put  like insert
    m.insert({5, "rahul"});
cout<<"before erase"<<endl;
    for(auto i : m)
    {
        cout<<i.first<<" " <<i.second<<endl;
    }

    cout<< "finding -1 --> "<<m.count(-1)<<endl;
    m.erase(2);
    cout<<"after erase"<<endl;
    for(auto i :m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}
