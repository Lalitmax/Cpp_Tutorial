#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cout<< "Enter sides : ";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb&& sideb==sidec&& sidea==sidec)
    {
        cout<< "this is equilateral ";
    }
    else if(sidea==sideb || sidea==sidec || sideb==sidec)
    {
        cout<< " this is isoceles";
    }
    else

    {
        cout<< "this is scalene";
    }
    return 0;

}
