#include<iostream>
using namespace std;
  void reachhome(int srce, int dst)
  {
      cout<< "source "<<srce<< " destination "<<dst<<endl;
      if(srce==dst)
      {
          cout<< "Pahuch gaya  ";
          return ;
      }

      srce++;
      reachhome(srce,dst);

  }
int main()
{
    int srce;
    cout<< "Enter source : ";
    cin>>srce;
    int dst;
    cout<< "Enter destination : ";
    cin>>dst;
    reachhome(srce,dst);
    return 0;
}
