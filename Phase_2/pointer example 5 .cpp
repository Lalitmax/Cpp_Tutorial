#include<iostream>
using namespace std;
int main()

{
    int first =0;
    int second =33;
    int *third=&second;
    first=*third;
    *third=*third+2;
    cout<<first<< " "<<second<<endl;
    return 0;
}
