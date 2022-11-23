#include<iostream>
using namespace std;
int main()
{
    int i=4;
    int &j =i; // ak hi variable ka double name i and j.
    cout<< "before --> "<<i<<endl;
    j++;
    cout<< "after --> "<<i<<endl;

    return 0;
}
