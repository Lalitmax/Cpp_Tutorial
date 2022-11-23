#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v, int m);
void printrev(vector<int> ans);
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);int m=2;
     vector<int> ans =  reverse(v, m);
    printrev(ans);}
vector<int> reverse(vector<int> v, int m  )
{int s=m+1, e=v.size()-1;
    while(s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;}
void printrev(vector<int> ans)
{for(int i=0; i<ans.size(); i++)
    {cout<<ans[i]<<" ";}}

