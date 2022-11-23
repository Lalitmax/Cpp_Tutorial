#include<iostream>
using namespace std;
void update(int **p)
{
    //p=p+1;
    // Kuch change hoga --> no
 // *p=*p+1;
    //  Kuch change hoga --> yes

   **p=**p+1;
     //  Kuch change hoga --> yes

}
int main()
{
    int i=9;
    int *p=&i;
    int **p2=&p;
    /*
cout<<" sab sahi chal raha hai"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<" \n \n"<<endl;
    // is tino se 9 ko hi point karega
     cout<<i<<endl;
     cout<<*p<<endl;
     cout<<**p2<<endl;
*/
cout<<"before --> "<<i<<endl;
cout<<"before --> "<<p<<endl;
cout<<"before --> "<<p2<<endl;
update(p2);
cout<< "after --> "<<i<<endl;
cout<< "after --> "<<p<<endl;
cout<< "after --> "<<p2<<endl;
    return 0;
}
