#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<< " Enter a character : ";
    cin>>button;
    switch(button)
    {
       case 'a':
           cout<< "allow to go";
           break;
        case 'b':
           cout<< "bye bye";
           break;
        case 'c':
           cout<< "namaste";
            break;
        case 'k':
            cout<< "kutta";
            break;

        default:
            cout<<" i am learning more ";

    }

    return 0;
}
