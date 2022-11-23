#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v);
void printrev(vector<int> r);
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
  vector<int> ans=  reverse(v);

    printrev(ans);
    return 0;
}

vector<int> reverse(vector<int> v)
{
    int s=0;
 int   e=v.size()-1;
    while(s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;

}
void printrev(vector<int> r)
{
    for(int i=0; i<r.size(); i++)
    {
        cout<<r[i]<< " ";
    }
}
