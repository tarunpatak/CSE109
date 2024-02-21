// 3  WITH PARAMETER WITH NO RETURN VALUE
#include<iostream>
using namespace std ;

int main()
{
    int a,b;
    void sum(int,int);//function declaration
    
    cout<<"enter two numbers";
    cin>>a>>b;
    sum(a,b);//actual arguments
    return 0;
}
void sum(int x,int y )//formal
{
     int z;
     z=x+y;
     cout<<"sum is ="<<z;
     }
     
