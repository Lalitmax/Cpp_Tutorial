#include<iostream>
using namespace std;
void update(int & n)
{
    n++;
}
int main()
{
    int n=7;
    cout<< "before -- > "<<n<<endl;
    update(n);
      cout<< "after -- > "<<n<<endl;

}
