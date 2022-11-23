#include<iostream>
using namespace std;
int gb=15;
void print1(int i)
{
    cout<<gb<< " in gb"<<endl;
}

void baba1(int i)
{
    cout<<gb<< " in bb"<<endl;
}                                                                          // but this is bad practice because any function change this value

int main()
{
    int i=5;
    print1(i);
    baba1(i);

    cout<< gb<< "in main"<<endl;

return 0;

}
