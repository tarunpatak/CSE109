//11.a sum of a number n times using defualt  arguments
#include<iostream>
using namespace std;
void sum(int a=20,int b=10,int c=30);
//void sum(int a,int b);
int main()
{
    sum();
    sum(3);
    sum(4,8);
    sum(4,8,2);
    return 0;
}
void sum(int a,int b ,int c)
{
     int d;
     d=a+b+c;
   cout<<"sum is "<<d<<endl;
     }
