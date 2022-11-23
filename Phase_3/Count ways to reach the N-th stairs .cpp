#include<iostream>
using namespace std;
 int nthstairs(int n)
 {
     //base case
     if(n<0)
        return 0;
     if(n==0)
        return 1;
        // recursive call
     int ans =nthstairs(n-1) + nthstairs(n-2);
     return ans;

 }
int main()
{
    int n;
    cout<< " Enter stairs  : ";
    cin>>n;
    // function call
    cout<< "stairs is  "<< nthstairs(n);
    return 0;
}
