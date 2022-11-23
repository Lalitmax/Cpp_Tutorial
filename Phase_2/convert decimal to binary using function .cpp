  #include<iostream>
  #include<cmath>
using namespace std;
int decimaltobinary(int num);

int main()
{

    int num;
    cout<< " Enter decimal number = ";
    cin>>num;
    cout<< " In binary form =  "<<decimaltobinary(num);
    return 0;

}

int decimaltobinary(int num)
{
      int total=0,i=1;
       while(num>0)
       {
           int rem=num%2;

             total =total + rem*i;
                 num=num/2;
       i=i*10;
       }

 return total;
}


