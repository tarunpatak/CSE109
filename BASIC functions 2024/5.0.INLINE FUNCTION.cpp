// 5 inline function to calculate maximum of  two numbers
#include<iostream>
using namespace std ;
inline int max(int x,int y)
{
       return(x>y?x:y);
    
       }
       int main ()
       {
           int m=10,n=25;
           int a,b;
           a=max(6,8);
           cout<<"greatest of both is \n"<<a;
           b=max(m,n);
           cout<<"\n greatest of the two is \n"<<b;
                      
           }
           
