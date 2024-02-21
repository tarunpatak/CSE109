// 4 WITH PARAMETER WITH RETURN VALUE
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum(int,int); //function  declaration
    
    cout<<"enter two numbers";
    cin>>a>>b;
    int c=sum(a,b); //function call
    cout<<"sum is="<<c;
   // cout<<sum(a,b);
     return 0;
}
int sum(int x,int y) //function defination
{ int z;
     z=x+y;
     return(z);
     //return(z); 
	  }
     
