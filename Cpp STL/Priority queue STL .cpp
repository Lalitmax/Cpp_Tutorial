#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // Max heap
    priority_queue<int>  maxi;

    // min heap
    priority_queue<int,vector<int> ,greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();
      cout<<"maxi --> ";
    for(int i=0; i<n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

     int n2=mini.size();
     cout<<"mini --> ";
     for(int i=0; i<n2; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
     cout<<endl;

    cout<<" are khali hai kya bhai --> "<<mini.empty()<<endl;

    return 0;
}
